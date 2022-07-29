// #include "kb.h"
#include QMK_KEYBOARD_H

// Define layers
#define _BL 0
#define _WIN 1
#define _UP 2
#define _FN 3
#define _MACRO 4
#define _ARROW 5
#define _SWAP 6

// Tap Dance declarations
enum {
    TD_CAPS_WIN,
    TD_CAPS_BASE,
    TD_ESC_CC
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Caps Lock, twice for _WIN
    [TD_CAPS_WIN] = ACTION_TAP_DANCE_LAYER_MOVE(KC_CAPS, _WIN),
    [TD_CAPS_BASE] = ACTION_TAP_DANCE_LAYER_MOVE(KC_CAPS, _BL),
    [TD_ESC_CC] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, LCTL(KC_C)),
};
        
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT(TD(TD_ESC_CC), KC_Q, KC_W, KC_F, KC_P, KC_B,                     KC_J, KC_L, KC_U, KC_Y, KC_SCOLON, KC_BSLS, \
                 OSL(_MACRO), LT(_FN, KC_A), KC_R, KC_S, MT(MOD_LALT, KC_T), KC_G,    KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT, \
                 KC_TRNS, KC_Z, KC_X, KC_C, LT(_SWAP, KC_D), KC_V,                KC_K, KC_H, KC_COMMA, KC_DOT, KC_SLASH, KC_TRNS, \
                 MT(MOD_LSFT, KC_DEL), LT(_UP, KC_ENT), MT(MOD_LGUI, KC_TAB),     KC_BSPC, LT(_ARROW, KC_SPC), TD(TD_CAPS_WIN)), \
  [_WIN] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                  MOD_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                                KC_TRNS, KC_TRNS, MT(MOD_LCTL, KC_TAB),         KC_TRNS, KC_TRNS, TD(TD_CAPS_BASE)), \
  [_UP] = LAYOUT(KC_TILDE, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, \
                 KC_GRAVE, KC_1, KC_2, KC_3, MT(MOD_LSFT, KC_4), KC_5,          KC_6, MT(MOD_LSFT, KC_7), KC_8, KC_9, KC_0, KC_TRNS, \
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL, KC_TRNS, \
                                            KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS), \
  [_FN] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT, KC_TRNS,        KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, \
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU, KC_TRNS,        KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_TRNS, \
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_TRNS, KC_TRNS,        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_TRNS, \
                                            KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS), \
  [_MACRO] = LAYOUT(HYPR(KC_A), HYPR(KC_B), HYPR(KC_C), HYPR(KC_D), HYPR(KC_E), HYPR(KC_F),     HYPR(KC_G), HYPR(KC_H), HYPR(KC_I), HYPR(KC_J), HYPR(KC_K), HYPR(KC_L), \
                    HYPR(KC_M), HYPR(KC_N), HYPR(KC_O), HYPR(KC_P), HYPR(KC_Q), HYPR(KC_R),     HYPR(KC_S), HYPR(KC_T),  HYPR(KC_U), HYPR(KC_V), HYPR(KC_W), HYPR(KC_X), \
                    HYPR(KC_Y), HYPR(KC_Z), HYPR(KC_1), HYPR(KC_2), HYPR(KC_3), HYPR(KC_4),     HYPR(KC_5), HYPR(KC_6), HYPR(KC_7), HYPR(KC_8), HYPR(KC_9), HYPR(KC_0), \
                                                                 KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS), \
  [_ARROW] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, \
                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS, \
                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                                               KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS), \
  [_SWAP] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                                               KC_TRNS, KC_SPC, KC_BSPC,       KC_TRNS, KC_TRNS, KC_TRNS) \
};  

// const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
// 	keyevent_t event = record->event;

// 	switch (id) {

// 	}
// 	return MACRO_NONE;
// }

// void matrix_init_user(void) {
// }

// void matrix_scan_user(void) {
// }

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
// 	return true;
// }

// void led_set_user(uint8_t usb_led) {

// 	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
// 	} else {
		
// 	}

// 	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
// 	} else {
		
// 	}

// 	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
// 	} else {
		
// 	}

// 	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
// 	} else {
		
// 	}

// 	if (usb_led & (1 << USB_LED_KANA)) {
		
// 	} else {
		
// 	}

// }