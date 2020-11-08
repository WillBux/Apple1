#include "mbed.h"
#ifdef PCB
    #include "pins_pcb.h"
    #warning "PCB"
#else
    #include "pins.h"
#endif
#include "pins.h"
#include "data.h"

BusOut addressIO(A00, A01, A02, A03, A04, A05, A06, A07, A08, A09, A10, A11, A12);
BusInOut dataIO(D0, D1, D2, D3, D4, D5, D6, D7);
BusOut control(OE, WE, CE); // 0b000, CE-WE-OE

void setupWrite() {
    dataIO.output();
    control = 0b011;
    wait_us(10);
}

void writeToAddress(int address, uint8_t data) {
    addressIO.write(address);
    dataIO.write(data);
    wait_us(10);
    control = 0b001;
    wait_us(10);
    control = 0b011;
    wait_us(10);
}

void setupRead() {
    dataIO.input();
    dataIO.mode(PullNone);
    control = 0b010;
    wait_us(10);
}

void setupNull() {
    control = 0b111;
    wait_us(10);
}

uint8_t readAddress(int address) {
    addressIO.write(address);
    wait_us(10);
    return (uint8_t)dataIO.read();
}

void disableWriteProtect() {
    printf("Disabling write protect...\n");
    setupWrite();
    writeToAddress(0x1555, 0xAA);
    writeToAddress(0x0AAA, 0x55);
    writeToAddress(0x1555, 0x80);
    writeToAddress(0x1555, 0xAA);
    writeToAddress(0x0AAA, 0x55);
    writeToAddress(0x1555, 0x20);
    wait_us(10000);
    setupNull();
}

void enableWriteProtect() {
    printf("Enabling write protect...\n");
    setupWrite();
    writeToAddress(0x1555, 0xAA);
    writeToAddress(0x0AAA, 0x55);
    writeToAddress(0x1555, 0xA0);
    wait_us(10000);
    setupNull();
}

void testWriteProtect() {
    printf("Testing write protect...\n");
    setupWrite();
    uint8_t testVal = ~data[0];
    writeToAddress(0x0000, testVal);
    wait_us(10000);
    setupNull();
    setupRead();
    if (readAddress(0x0000) == testVal) {
        printf("Write protect failed.\n");
    } else {
        printf("Write protect success.\n");
    }
    setupNull();
}


void write() {
    disableWriteProtect();
    printf("Writing...\n");
    setupWrite();
    for (unsigned int i = 0; i < numBytes; i++) {
        if (i % 64 == 0) {
            printf("%#06X\n", i);
            wait_us(10000);
        }
        writeToAddress(startAddress + i, data[i]);
    }
    setupNull();
}

void read() {
    printf("Reading...\n");
    setupRead();
    unsigned int errors = 0;
    uint8_t input;
    for (unsigned int i = 0; i < numBytes; i++) {
        input = readAddress(startAddress + i);
        if (input != data[i]) {
            printf("Error at %#06X, expected %#04X, got %#04X\n", i, data[i], input);
            errors++;    
        }
    }
    setupNull();
    if (errors) {
        printf("There were %d errors\n", errors);
    } else {
        printf("Read with no errors\n");
    }
}

int main() {
    while(1) {
        printf("Read or write to EEPROM and disable, enable or test write protect (r/w/d/e/t): ");
        char input;
        scanf("%c", &input);
        printf("\n");
        if (input == 'r') {
            read();
        } else if (input == 'w') {
            write();
        } else if (input == 'd') {
            disableWriteProtect();
        } else if (input == 'e') {
            enableWriteProtect();
        } else if (input == 't') {
            testWriteProtect();
        }
    }
}
