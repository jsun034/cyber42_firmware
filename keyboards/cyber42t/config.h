#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    qmkbuilder
#define PRODUCT         cyber42t

#define TAPPING_TERM 175
#define IGNORE_MOD_TAP_INTERRUPT

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* key matrix pins */
// 0, 1, 5, 3
#define MATRIX_ROW_PINS { D2, D3, C6, D0 }
// A0-A5, 13-9, 6
#define MATRIX_COL_PINS { F7, F6, F5, F4, F1, F0, C7, D6, B7, B6, B5, D7 }
#define UNUSED_PINS { D1 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

// #ifdef BACKLIGHT_PIN
// #define BACKLIGHT_LEVELS 0 
// #endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 7

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* prevent stuck modifiers */
// #define STRICT_LAYER_RELEASE

/* AutoShift */
#define AUTO_SHIFT_TIMEOUT 140
#define NO_AUTO_SHIFT_ALPHA 
#define NO_AUTO_SHIFT_NUMERIC 


// #ifdef RGB_DI_PIN
// #define RGBLIGHT_ANIMATIONS
// #define RGBLED_NUM 0
// #define RGBLIGHT_HUE_STEP 8
// #define RGBLIGHT_SAT_STEP 8
// #define RGBLIGHT_VAL_STEP 8
// #endif

#endif