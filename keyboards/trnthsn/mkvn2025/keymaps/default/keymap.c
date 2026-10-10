// Copyright 2026 Tyson.Keebs
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3,
        KC_TAB, KC_Q, KC_W, KC_E,
        MO(1),  KC_A, KC_S, KC_D
    ),
    [1] = LAYOUT(
        QK_BOOT, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    )
};
