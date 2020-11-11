Apple1
========
A replica Apple 1 using the modern CMOS versions of the original ICs

Memory Map
----------
| Start Address | Purpose               |
|---------------|-----------------------|
| $0000         | Zero Page RAM         |
| $0100         | RAM                   |
| $8000         | Scratch Memory        |
| $9000         | CompactFlash Firmware |
| $B000         | Unused                |
| $C000         | Cassette Interface    |
| $D000         | PIA                   |
| $E000         | Apple BASIC           |
| $F000         | KRUSADER              |
| $FF00         | Woz Monitor           |

Parallel EEPROM Programmer
--------------------------
The parallel EEPROM is programmed with the binary from [this Github repo](https://github.com/st3fan/krusader) using 
the Arm Mbed LPC1768 Board using the provided schematic and source code.
It can also be easily programmed with any other microcontroller granted there are enough pins (or through the use of shift registers).

For pin connections view either `pins_pcb.h` or `pins.h` (easier to wire manually on a breadboard).
To compile use `mbed compile [--macro PCB]`.

From the serial monitor you can flash and verify the binary, and disable and enable the write protection. 

Parts List
----------
| Part            | Description         | Quantity |
|-----------------|---------------------|----------|
| W65C02S6TPG     | Microprocessor      | 1        |
| W65C21N6TPG     | PIA                 | 1        |
| AS6C62256       | SRAM (32kB)         | 1        |
| AT28C64B        | EEPROM (8kB)        | 1        | 
| 307-044-500-202 | Edge Connector      | 1        |
| SN74AHCT138N    | 3 to 8 Decoder      | 1        |
| SN74HCT00N      | Quad NAND Gate      | 1        |
| ATSAMD21E18A    | ARM Microcontroller | 1        |
| LD805           | 5V Regulator        | 1        |
| LD33CV          | 3.3V Regulator      | 1        |
| RCJ-041         | Composite Connector | 1        | 
| UJ2-AH-4-TH     | USB Connector       | 1        | 
| EG1224          | Slide Switch        | 1        |
| 6mm Push-Button | Push-Button         | 2        |
| 220Ω            | Resistor            | 1        |
| 330Ω            | Resistor            | 1        |
| 560Ω            | Resistor            | 1        |
| 3.3kΩ           | Resistor            | 5        |
| 1kΩ             | Resistor            | 10       |
| 2kΩ             | Resistor            | 9        |
| 0.01uF          | Capacitor           | 1        |
| 0.1uF           | Capacitor           | 8        |
| 1uF             | Capacitor           | 1        |
| 10uF            | Capacitor           | 2        |
| 1N4001          | Diode               | 1        |
| 5mm LED         | LED                 | 1        |

