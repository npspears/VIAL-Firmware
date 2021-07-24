/* Copyright 2020 Nathan Spears
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define CTL_ESC CTL_T(KC_ESC)
#define DS_PRSR LALT(KC_UP)           // Previous discord server
#define DS_NXSR LALT(KC_DOWN)         // Next discord server
#define DS_PRUN LALT(LSFT(KC_UP))     // Previous unread discord msg
#define DS_NXUN LALT(LSFT(KC_DOWN))   // Next unread discord msg
#define DS_READ KC_ESC
#define DS_SRED LSFT(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_default(
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_NO  , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
        CTL_ESC, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_NO  , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSPO, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_NO  , KC_N   , KC_M   , KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,
        KC_LCTL, KC_NO  , KC_LALT,          LT(1, KC_ENT),                      LT(2, KC_SPC),    MO(3),   KC_NO,   KC_RGUI
    ),

    [1] = LAYOUT_default(
        _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL ,
        _______, _______, _______, _______ ,_______, _______, _______, KC_MINS, KC_EQL , KC_LCBR, KC_RCBR, KC_PIPE, KC_GRV ,
        _______, _______, _______, _______, _______, _______, _______, KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD,
        _______, _______, _______,          _______,                            _______,          _______, _______, _______
    ),

    [2] = LAYOUT_default(
        _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PGUP, KC_HOME,
        _______, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_END ,
        _______, _______, _______,          _______,                            _______,          _______, _______, _______
    ),
    [3] = LAYOUT_default(
        RESET  , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        RGB_TOG, RGB_VAI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        RGB_MOD, RGB_VAD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        RGB_RMOD,_______, _______,          _______,                            _______,          _______, _______, _______
    )
};
