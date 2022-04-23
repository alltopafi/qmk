// Copyright 2021 Y.Sakamoto (@FREEWING-JP)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x7E57
#define DEVICE_VER   0x0001
#define MANUFACTURER alltopafi
#define PRODUCT      alltopafi-keyboard

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 14

#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS_PER_SIDE (MATRIX_COLS / 2)

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
// #define MATRIX_ROW_PINS { B1 }
// #define MATRIX_COL_PINS { D7 }
// #define UNUSED_PINS

//MCU B1, D7
//IO B0, A7
#define MATRIX_ROW_PINS_MCU \
    { B3, F4, F5, F6, F7 }
#define MATRIX_COL_PINS_MCU \
    { D3, D2, D4, C6, D7, E6, B2 }
#define UNUSED_PINS_MCU \
    { D1, D0, D4, B4, B5, B0, F4, B3, B2, B6 }
#define MATRIX_ROW_PINS_MCP \
    { B0 }
#define MATRIX_COL_PINS_MCP \
    { A0, A1 }
#define UNUSED_PINS_MCP \
    { B1, B2, B3, B4, B5, B6, B7, A2, A3, A6, A7 }

#define ENCODERS_PAD_A { B5 }
#define ENCODERS_PAD_B { B4 }

/* ----
// #define MATRIX_ROW_PINS_MCU \
//     { B3, B2, B1, F0 }
// #define MATRIX_COL_PINS_MCU \
//     { D6, D7, B4, B5, B6 }
// #define UNUSED_PINS_MCU \
//     { B0, B7, C6, C7, D2, D3, D4, D5, E6, F1, F4, F5, F6, F7 }
// #define MATRIX_ROW_PINS_MCP \
//     { B0, B1, B2, B3 }
// #define MATRIX_COL_PINS_MCP \
//     { A0, A1, A2, A3, A4 }
// #define UNUSED_PINS_MCP \
//     { B4, B5, B6, B7, A5, A6, A7 }
// ----
*/

/* COL2ROW, ROW2COL */
// COL2ROW = Set row, Read cols
#define DIODE_DIRECTION COL2ROW

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
//#define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6

// The state of the indicator pins when the LED is "on" - 1 for high
#define LED_PIN_ON_STATE 0

//#define LED_NUM_LOCK_PIN B0
#define LED_CAPS_LOCK_PIN D5   // TX LED
#define LED_SCROLL_LOCK_PIN B0 // RX LED
//#define LED_COMPOSE_PIN B3
//#define LED_KANA_PIN B4


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
#define NO_DEBUG

/* disable print */
#define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define DYNAMIC_KEYMAP_LAYER_COUNT 2

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0

#ifdef JOYSTICK_ENABLE
  #define JOYSTICK_BUTTON_COUNT 0
  #define JOYSTICK_AXES_COUNT 2
  #define JOYSTICK_AXES_RESOLUTION 10
#endif

/*
 * Display OLED SSD1306 128x32
 */
#ifdef OLED_ENABLE
  #define OLED_DISPLAY_ADDRESS 0x3C
  #define OLED_BRIGHTNESS 255
  #define OLED_IC OLED_IC_SSD1306
  #define OLED_DISPLAY_WIDTH 128
  #define OLED_DISPLAY_HEIGHT 32
  #define OLED_TIMEOUT 31000
#endif

// #define DEBUG_MATRIX_SCAN_RATE
