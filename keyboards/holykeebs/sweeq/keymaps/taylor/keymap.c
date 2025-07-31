#include QMK_KEYBOARD_H
#include "users/holykeebs/holykeebs.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q, LCTL_T(KC_W), LALT_T(KC_F), KC_P, KC_B,            KC_J, KC_L, RALT_T(KC_U), RCTL_T(KC_Y), KC_QUOT,
    LSFT_T(KC_A), LT(4,KC_R), LT(3,KC_S), LT(2,KC_T), KC_G,            KC_M, LT(5,KC_N), LT(6,KC_E), LT(7,KC_I), RSFT_T(KC_O),
    MT(MOD_HYPR,KC_Z), KC_X, KC_C, KC_D, KC_V,            KC_K, KC_H, KC_COMM, KC_DOT, LT(1,KC_SCLN),
                                    LGUI_T(KC_TAB), LT(9,KC_SPC), KC_BSPC, RGUI_T(KC_ENT)
  ),
  [1] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            HK_SAVE, KC_TRNS, KC_UP, KC_TRNS, HK_P_SET_S,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            HK_RESET, KC_TRNS, KC_DOWN, KC_TRNS, HK_P_SET_D,
    QK_MAKE, KC_TRNS, KC_TRNS, DB_TOGG, EE_CLR,            EE_CLR, DB_TOGG, HK_D_MODE_T, HK_C_SCROLL, KC_NO,
                                    QK_BOOT, QK_BOOT, QK_BOOT, QK_BOOT
  ),
  [2] = LAYOUT(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_PGDN, KC_PGUP, KC_UP, KC_HOME, KC_END,
    KC_NO, G(S(A(C(KC_T)))), LGUI(KC_K), KC_NO, KC_NO,            G(KC_LBRC), KC_LEFT, KC_DOWN, KC_RGHT, G(KC_RBRC),
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            CW_TOGG, G(S(KC_LBRC)), G(S(KC_X)), G(S(KC_RBRC)), KC_NO,
                                    KC_NO, KC_ESC, KC_DEL, KC_TRNS
  ),
  [3] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS,            KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PMNS,
    KC_TRNS, KC_PCMM, KC_NO, KC_PDOT, KC_TRNS,            KC_PAST, KC_P4, KC_P5, KC_P6, KC_PPLS,
    KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS,            KC_TRNS, KC_P1, KC_P2, KC_P3, KC_PEQL,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_P0
  ),
  [4] = LAYOUT(
    KC_TRNS, KC_NO, LGUI(KC_F), LGUI(KC_A), KC_TRNS,            KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS,
    LGUI(KC_K), KC_NO, LGUI(KC_V), LGUI(KC_C), LGUI(KC_X),            KC_MCTL, KC_MRWD, KC_MPLY, KC_MFFD, KC_LPAD,
    KC_TRNS, KC_NO, LGUI(KC_U), KC_TRNS, KC_TRNS,            KC_TRNS, KC_BRIU, KC_BRID, KC_TRNS, KC_TRNS,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [5] = LAYOUT(
    KC_GRV, KC_PIPE, KC_LBRC, KC_RBRC, KC_DLR,            KC_NO, KC_NO, KC_ASTR, KC_UNDS, KC_PLUS,
    KC_HASH, KC_SLSH, KC_LPRN, KC_RPRN, KC_PERC,            KC_NO, KC_NO, KC_AT, KC_MINS, KC_COLN,
    KC_CIRC, KC_BSLS, KC_LCBR, KC_RCBR, KC_AMPR,            KC_NO, KC_NO, KC_EXLM, KC_QUES, KC_SCLN,
                                    KC_TRNS, KC_TILD, KC_PEQL, KC_TRNS
  ),
  [6] = LAYOUT(
    KC_NUM, KC_F17, KC_F18, KC_F19, KC_F20,            KC_F21, KC_F22, KC_NO, KC_F23, KC_F24,
    KC_CAPS, KC_F9, KC_F10, KC_F11, KC_F12,            KC_F13, KC_F14, KC_NO, KC_F15, KC_F16,
    KC_SCRL, KC_F1, KC_F2, KC_F3, KC_F4,            KC_F5, KC_F6, KC_NO, KC_F7, KC_F8,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [7] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, DF(3), KC_TRNS, KC_NO, KC_NO,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            DF(2), DF(0), KC_LGUI, KC_NO, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            DF(9), DF(8), KC_TRNS, KC_NO, KC_NO,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [8] = LAYOUT(
    KC_NO, KC_WH_L, KC_WH_U, KC_WH_R, KC_NO,            KC_NO, KC_NO, KC_MS_U, KC_NO, KC_NO,
    KC_BTN4, KC_BTN2, KC_WH_D, KC_BTN1, KC_BTN5,            KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,
    KC_NO, KC_NO, KC_BTN3, KC_NO, KC_NO,            KC_NO, KC_TRNS, KC_NO, KC_NO, DF(0),
                                    KC_TRNS, KC_NO, KC_NO, KC_TRNS
  ),
  [9] = LAYOUT(
    KC_TRNS, KC_WH_L, KC_WH_U, KC_WH_R, KC_TRNS,            KC_NO, KC_WH_L, KC_WH_U, KC_WH_R, KC_NO,
    KC_BTN4, KC_BTN2, KC_WH_D, KC_BTN1, KC_BTN5,            KC_BTN4, KC_BTN1, KC_WH_D, KC_BTN2, KC_BTN5,
    KC_TRNS, KC_TRNS, KC_BTN3, KC_TRNS, KC_TRNS,            KC_TRNS, KC_NO, KC_BTN3, KC_NO, DF(0),
                                    HK_S_MODE, KC_NO, KC_TRNS, KC_TRNS
  )
};
