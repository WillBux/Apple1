#include <atmel_start.h>

char buffer[24][40];
unsigned char row;
unsigned char col;
bool USBHost;

static void data_available(void) {
    char new = gpio_get_pin_level(PB6) << 6 | 
               gpio_get_pin_level(PB5) << 5 | 
               gpio_get_pin_level(PB4) << 4 |
               gpio_get_pin_level(PB3) << 3 |
               gpio_get_pin_level(PB2) << 2 |
               gpio_get_pin_level(PB1) << 1 |
               gpio_get_pin_level(PB0);
    
    if (USBHost) {
        buffer[row][col] = new;
        if (col == 40) {
            col = 0;
            row++;
        } else {
            col++;
        }
    } else {
        // TODO: Print character
    }

}

static void clear_pressed(void) {
    if (USBHost) {
        memset(buffer, 0, 960);
    } else {
        // TODO: Print a bunch (20) of new lines
    }
}

void send_char(char to_send) {
    gpio_set_pin_level(PA0, to_send & 0x01);
    gpio_set_pin_level(PA1, to_send & 0x02);
    gpio_set_pin_level(PA2, to_send & 0x04);
    gpio_set_pin_level(PA3, to_send & 0x08);
    gpio_set_pin_level(PA4, to_send & 0x10);
    gpio_set_pin_level(PA5, to_send & 0x20);
    gpio_set_pin_level(PA6, to_send & 0x40);
    gpio_set_pin_level(STROBE, true);
    // TODO: delay 70ns 
    gpio_set_pin_level(STROBE, false);
}

int main(void) {
    atmel_start_init(); // Initializes MCU, drivers and middleware
    
    bool USBHost = false; // TODO: Turn on/off USBHost from button

    if (USBHost) {
        // TODO: USB Host initalize
    } else {
        usb_init();
        cdcd_acm_example();
    }
    
    // setup external interrupts
    ext_irq_register(DA, data_available);
    ext_irq_register(CLEAR, clear_pressed);

    while (1) {
    }
}

