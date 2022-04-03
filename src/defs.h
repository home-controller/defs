/**
 * @file defs.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.0.4
 * @date 2022-03-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _defs_h
#define _defs_h

#include <Arduino.h>
//#include "UI_IO.h"

//Menu_C menu();
// MCU used __AVR_ATmega328P__
#ifdef __AVR_ATmega328P__
 #define ATmega328P_mcu
 #define ATmega328P
 #define  mem_eeprom 1024
 #define  mem_flash 32256
 #define mem_sram 2048
 #define _pwmPins {3, 5, 6, 9, 10, 11}//timer intafears with 5 & 6
 #define InOnlyPins = 2 // ATmega328P chips have 2 analog input only pins namely A6 & A7. Some older boards do not bring them out to pins but most do.
#endif  
#define MCU_type nano_mcu

extern byte pwm_pins[];// = _pwmPins;
// an empty array for arrays where the first element is the array size.
extern byte eA[];

// User output type
#define termIO //output to the Serial Monitor
#define screenIO 0 // Small screen. i.e. Nokia 5110.
#define lcd16x2 0
#define lcd20x4 0

#define _1bitMsk B00000001
#define _2bitMsk B00000011
#define _3bitMsk B00000111
#define _4bitMsk B00001111
#define _5bitMsk B00011111
#define _6bitMsk B00111111
#define _7bitMsk B01111111
#define _8bitMsk B11111111
#define bit1mask _1bitMsk
#define bit2mask _2bitMsk
#define bit3mask _3bitMsk
#define bit4mask _4bitMsk
#define bit5mask _5bitMsk
#define bit6mask _6bitMsk
#define bit7mask _7bitMsk
#define bit8mask _8bitMsk

;
#ifdef ATmega328P
#define PIN_D0 0
#define PIN_D1 1
#define PIN_D2 2
#define PIN_D3 3
#define PIN_D4 4
#define PIN_D5 5
#define PIN_D6 6
#define PIN_D7 7
#define PIN_D8 8
#define PIN_D9 9
#define PIN_D10 10
#define PIN_D11 11
#define PIN_D12 12
#define PIN_D13 13
#define PIN_D14 14
#define PIN_D15 15
#define PIN_D16 16
#define PIN_D17 17
#define PIN_D18 18
#define PIN_D19 19
#define D0 PIN_D0
#define D1 PIN_D1
#define D2 PIN_D2
#define D3 PIN_D3
#define D4 PIN_D4
#define D5 PIN_D5
#define D6 PIN_D6
#define D7 PIN_D7
#define D8 PIN_D8
#define D9 PIN_D9
#define D10 PIN_D10
#define D11 PIN_D11
#define D12 PIN_D12
#define D13 PIN_D13
#define D14 PIN_D14
#define D15 PIN_D15
#define D16 PIN_D16
#define D17 PIN_D17
#define D18 PIN_D18
#define D19 PIN_D19
#endif

#define ct_pin 0    //ct stands for controller type
#define ct_1wire 1
#define ct_I2C 2    // this should probably be more specific as in a type of i2c IO expander.
#define ct_SPI 3
#define ct_array 4
#define ioLocalPin 0
#define ioLocalPinVal 6 // Value from a analog pin maybe use for dimmer etc.

/**
 * Override the defs in the unit headers with values for this project.
 */
//#define t 1

boolean is_pwmPin(byte p);
byte cpBitsMsk8(byte a, byte b, byte msk);//set bit in a matched by msk to value(s) from b

;
#endif
