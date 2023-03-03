#include QMK_KEYBOARD_H
#include "oneshot.h"

enum custom_keycodes {
  OS_CTRL = USER00,
  OS_ALT,
  OS_GUI,
  OS_SFT,
};

#define BSE 0
#define LWR 1
#define RSE 2
#define ADJ 3

#define L_LWR MO(LWR)
#define L_RSE MO(RSE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BSE] = LAYOUT_split_3x5_3(
        KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,
        KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,
        KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,
                        KC_ESC,  KC_SPC, KC_TAB,                         KC_ENT, KC_RSFT, KC_BSPC
    )
};

bool is_oneshot_cancel_key(uint16_t keycode) {
    switch (keycode) {
    case L_LWR:
    case L_RSE:
        return true;
    default:
        return false;
    }
}

bool is_oneshot_layer_cancel_key(uint16_t keycode) {
    switch (keycode) {
    case L_LWR:
    case L_RSE:
        return true;
    default:
        return false;
    }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
    case L_LWR:
    case L_RSE:
    case OS_CTRL:
    case OS_ALT:
    case OS_GUI:
    case OS_SFT:
        return true;
    default:
        return false;
    }
}

bool is_oneshot_mod_key(uint16_t keycode) {
    switch (keycode) {
    case OS_CTRL:
    case OS_ALT:
    case OS_GUI:
    case OS_SFT:
        return true;
    default:
        return false;
    }
}

oneshot_state os_ctrl_state = os_up_unqueued;
oneshot_state os_alt_state = os_up_unqueued;
oneshot_state os_cmd_state = os_up_unqueued;
oneshot_state os_sft_state = os_up_unqueued;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    update_oneshot(
        &os_ctrl_state, KC_LCTL, OS_CTRL,
        keycode, record
    );
    update_oneshot(
        &os_alt_state, KC_LALT, OS_ALT,
        keycode, record
    );
    update_oneshot(
        &os_cmd_state, KC_LGUI, OS_GUI,
        keycode, record
    );
    update_oneshot(
        &os_sft_state, KC_LSFT, OS_SFT,
        keycode, record
    );

    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, LWR, RSE, ADJ);
}
