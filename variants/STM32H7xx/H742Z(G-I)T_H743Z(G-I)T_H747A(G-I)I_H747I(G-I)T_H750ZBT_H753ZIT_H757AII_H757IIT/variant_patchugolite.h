/*
 *******************************************************************************
 * Copyright (c) 2020, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
 #pragma once

 /*----------------------------------------------------------------------------
  *        STM32 pins number
  *----------------------------------------------------------------------------*/
#define PE7   0
#define PE8   1
#define PB9   2
#define PB8   3
#define PA4   4
#define PB7   5
#define PB6   6
#define PG0   7
#define PG1   8
#define PC8   9
#define PA15  10
#define PB5   11
#define PB4   12
#define PG11  13
#define PC9   14
#define PA8   15
#define PC3_C 16
#define PC1   17
#define PF8   18
#define PF6   19
#define PF5   20
#define PF4   21
#define PF3   22
#define PF2   23
#define PF7   24
#define PF1   25
#define PF0   26
#define PE6   27
#define PE5   28
#define PE4   29
#define PE3   30
#define PE2   31
//Analog pins
#define PB1   PIN_A0
#define PC5   PIN_A1
#define PC4   PIN_A2
#define PA7   PIN_A3
#define PA6   PIN_A4
#define PA5   PIN_A5
//Other pins
#define PC13  38
#define PC14  39
#define PC15  40
#define PF9   41
#define PF10  42
#define PH0   43
#define PH1   44
#define PC0   45
#define PC2_C 46
#define PA0   47
#define PA1   48
#define PA2   49
#define PA3   50
#define PB0   51
#define PB2   52
#define PF11  53
#define PF12  54
#define PF13  55
#define PF14  56
#define PF15  57
#define PE9   58
#define PE10  59
#define PE11  60
#define PE12  61
#define PE13  62
#define PE14  63
#define PE15  64
#define PB10  65
#define PB11  66
#define PB12  67
#define PB13  68
#define PB14  69
#define PB15  70
#define PD8   71
#define PD9   72
#define PD10  73
#define PD11  74
#define PD12  75
#define PB13  76
#define PB14  77
#define PD15  78
#define PG2   79
#define PG3   80
#define PG4   81
#define PG5   82
#define PG6   83
#define PG7   84
#define PG8   85
#define PC6   86
#define PC7   87
#define PA9   88
#define PA10  89
#define PA11  90
#define PA12  91
#define PA13  92
#define PA14  93
#define PC10  94
#define PC11  95
#define PC12  96
#define PD0   97
#define PD1   98
#define PD2   99
#define PD3   100
#define PD4   101
#define PD5   102
#define PD6   103
#define PD7   104
#define PG9   105
#define PG10  106
#define PG12  107
#define PG13  108
#define PG14  109
#define PG15  107
#define PB3   108
#define PE0   109
#define PE1   110


 
 // Alternate pins number
 #define PA0_ALT1                (PA0  | ALT1)
 #define PA1_ALT1                (PA1  | ALT1)
 #define PA1_ALT2                (PA1  | ALT2)
 #define PA2_ALT1                (PA2  | ALT1)
 #define PA2_ALT2                (PA2  | ALT2)
 #define PA3_ALT1                (PA3  | ALT1)
 #define PA3_ALT2                (PA3  | ALT2)
 #define PA4_ALT1                (PA4  | ALT1)
 #define PA4_ALT2                (PA4  | ALT2)
 #define PA5_ALT1                (PA5  | ALT1)
 #define PA6_ALT1                (PA6  | ALT1)
 #define PA7_ALT1                (PA7  | ALT1)
 #define PA7_ALT2                (PA7  | ALT2)
 #define PA7_ALT3                (PA7  | ALT3)
 #define PA9_ALT1                (PA9  | ALT1)
 #define PA10_ALT1               (PA10 | ALT1)
 #define PA11_ALT1               (PA11 | ALT1)
 #define PA12_ALT1               (PA12 | ALT1)
 #define PA15_ALT1               (PA15 | ALT1)
 #define PA15_ALT2               (PA15 | ALT2)
 #define PB0_ALT1                (PB0  | ALT1)
 #define PB0_ALT2                (PB0  | ALT2)
 #define PB1_ALT1                (PB1  | ALT1)
 #define PB1_ALT2                (PB1  | ALT2)
 #define PB3_ALT1                (PB3  | ALT1)
 #define PB3_ALT2                (PB3  | ALT2)
 #define PB4_ALT1                (PB4  | ALT1)
 #define PB4_ALT2                (PB4  | ALT2)
 #define PB5_ALT1                (PB5  | ALT1)
 #define PB5_ALT2                (PB5  | ALT2)
 #define PB6_ALT1                (PB6  | ALT1)
 #define PB6_ALT2                (PB6  | ALT2)
 #define PB7_ALT1                (PB7  | ALT1)
 #define PB8_ALT1                (PB8  | ALT1)
 #define PB9_ALT1                (PB9  | ALT1)
 #define PB14_ALT1               (PB14 | ALT1)
 #define PB14_ALT2               (PB14 | ALT2)
 #define PB15_ALT1               (PB15 | ALT1)
 #define PB15_ALT2               (PB15 | ALT2)
 #define PC0_ALT1                (PC0  | ALT1)
 #define PC0_ALT2                (PC0  | ALT2)
 #define PC1_ALT1                (PC1  | ALT1)
 #define PC1_ALT2                (PC1  | ALT2)
 #define PC4_ALT1                (PC4  | ALT1)
 #define PC5_ALT1                (PC5  | ALT1)
 #define PC6_ALT1                (PC6  | ALT1)
 #define PC7_ALT1                (PC7  | ALT1)
 #define PC8_ALT1                (PC8  | ALT1)
 #define PC9_ALT1                (PC9  | ALT1)
 #define PC10_ALT1               (PC10 | ALT1)
 #define PC11_ALT1               (PC11 | ALT1)
 #define PF8_ALT1                (PF8  | ALT1)
 #define PF9_ALT1                (PF9  | ALT1)
 
 #define NUM_DIGITAL_PINS        114
 #define NUM_DUALPAD_PINS        2
 #define NUM_ANALOG_INPUTS       28
 
 // On-board LED pin number
 #ifndef LED_BUILTIN
   #define LED_BUILTIN           PF15
 #endif
 
 // On-board user button
 #ifndef USER_BTN
   #define USER_BTN              PE10
 #endif
 
 // SPI definitions
 #ifndef PIN_SPI_SS
   #define PIN_SPI_SS            PA4
 #endif
 #ifndef PIN_SPI_SS1
   #define PIN_SPI_SS1           PA15
 #endif
 #ifndef PIN_SPI_SS2
   #define PIN_SPI_SS2           PG10
 #endif
 #ifndef PIN_SPI_SS3
   #define PIN_SPI_SS3           PNUM_NOT_DEFINED
 #endif
 #ifndef PIN_SPI_MOSI
   #define PIN_SPI_MOSI          PB5
 #endif
 #ifndef PIN_SPI_MISO
   #define PIN_SPI_MISO          PB4
 #endif
 #ifndef PIN_SPI_SCK
   #define PIN_SPI_SCK           PG11
 #endif
 
 // I2C definitions
 #ifndef PIN_WIRE_SDA
   #define PIN_WIRE_SDA          PC9
 #endif
 #ifndef PIN_WIRE_SCL
   #define PIN_WIRE_SCL          PA8
 #endif
 
 // Timer Definitions
 // Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
 #ifndef TIMER_TONE
   #define TIMER_TONE            TIM6
 #endif
 #ifndef TIMER_SERVO
   #define TIMER_SERVO           TIM7
 #endif
 
 // UART Definitions
 #ifndef SERIAL_UART_INSTANCE
   #define SERIAL_UART_INSTANCE  4
 #endif
 
 // Default pin used for generic 'Serial' instance
 // Mandatory for Firmata
 #ifndef PIN_SERIAL_RX
   #define PIN_SERIAL_RX         PA11
 #endif
 #ifndef PIN_SERIAL_TX
   #define PIN_SERIAL_TX         PA12
 #endif
 
 // Extra HAL modules
 #if !defined(HAL_DAC_MODULE_DISABLED)
   #define HAL_DAC_MODULE_ENABLED
 #endif
 #if !defined(HAL_ETH_MODULE_DISABLED)
   #define HAL_ETH_MODULE_ENABLED
 #endif
 #if !defined(HAL_QSPI_MODULE_DISABLED)
   #define HAL_QSPI_MODULE_ENABLED
 #endif
 #if !defined(HAL_SD_MODULE_DISABLED)
   #define HAL_SD_MODULE_ENABLED
 #endif
 
 /*----------------------------------------------------------------------------
  *        Arduino objects - C++ only
  *----------------------------------------------------------------------------*/
 
 #ifdef __cplusplus
   // These serial port names are intended to allow libraries and architecture-neutral
   // sketches to automatically default to the correct port name for a particular type
   // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
   // the first hardware serial port whose RX/TX pins are not dedicated to another use.
   //
   // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
   //
   // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
   //
   // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
   //
   // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
   //
   // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
   //                            pins are NOT connected to anything by default.
   #ifndef SERIAL_PORT_MONITOR
     #define SERIAL_PORT_MONITOR   Serial
   #endif
   #ifndef SERIAL_PORT_HARDWARE
     #define SERIAL_PORT_HARDWARE  Serial
   #endif
 #endif
 