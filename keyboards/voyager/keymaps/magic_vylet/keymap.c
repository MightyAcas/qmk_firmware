#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#include "features/magic.h"
#include "features/layer_lock.h"

/// qmk compile -kb voyager -km magic_vylet

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
    LLOCK
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TAB,         KC_W,           KC_C,           KC_M,           KC_P,           KC_B,                                           KC_X,           KC_L,           KC_O,           KC_U,           KC_J,           KC_MINUS,       
    KC_BSPC,        KC_R,           KC_S,           KC_T,           KC_H,           KC_F,                                           KC_Y,           KC_N,           KC_A,           KC_E,           KC_I,           KC_COMMA,       
    OSM(MOD_LCTL),  KC_Q,           KC_V,           KC_G,           KC_D,           KC_K,                                           KC_Z,           US_AREP,        KC_DOT,         KC_QUOTE,       KC_SCLN,        KC_LEFT_GUI,       
                                                                                    KC_SPACE,       OSL(1),         RCTL(KC_BSPC),  OSM(MOD_RSFT)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_ESCAPE,      KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_SLASH,       KC_QUES,        KC_TILD,        
    KC_BSPC,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_GRAVE,       
    KC_DELETE,      KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_BTN2,     KC_MS_BTN1,     LLOCK,                                          KC_CAPS,        KC_EQUAL,       KC_PLUS,        KC_BSLS,        KC_PIPE,        KC_LEFT_GUI,       
                                                                                    KC_SPACE,       TO(0),          TO(3),          KC_DQUO
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    LED_LEVEL,      KC_HOME,        C(S(KC_T)),     KC_UP,          C(KC_W),        KC_PAGE_UP,                                     KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_MINUS,       
    KC_BSPC,        KC_END,         KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,                                        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_COMMA,       
    OSM(MOD_LCTL),  KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_BTN2,     KC_MS_BTN1,     KC_PSCR,                                        KC_F11,         KC_F12,         KC_DOT,         RGB_VAD,        RGB_VAI,        KC_LEFT_GUI,       
                                                                                    KC_SPACE,       TO(0),          TO(3),          OSM(MOD_RSFT)
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,       
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,       
                                                                                    KC_SPACE,       TO(1),          TO(2),          KC_BSPC
  ),
};

const uint16_t PROGMEM comboLangle[] = { KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM comboLsquare[] = { KC_C, KC_S, COMBO_END};
const uint16_t PROGMEM comboLcurly[] = { KC_M, KC_T, COMBO_END};
const uint16_t PROGMEM comboLparen[] = { KC_P, KC_H, COMBO_END};
const uint16_t PROGMEM comboEnter[] = { KC_H, KC_F, COMBO_END};
const uint16_t PROGMEM comboEnterSYM[] = { KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM comboEnterNAV[] = { KC_RIGHT, KC_PGDN, COMBO_END};
const uint16_t PROGMEM comboOSMalt[] = { KC_D, KC_K, COMBO_END};
const uint16_t PROGMEM comboOSMaltSYMNAV[] = { KC_MS_BTN1, KC_PSCR, COMBO_END};

const uint16_t PROGMEM comboRparen[] = { KC_L, KC_N, COMBO_END};
const uint16_t PROGMEM comboRcurly[] = { KC_O, KC_A, COMBO_END};
const uint16_t PROGMEM comboRsquare[] = { KC_U, KC_E, COMBO_END};
const uint16_t PROGMEM comboRangle[] = { KC_J, KC_I, COMBO_END};

const uint16_t PROGMEM comboNav[] = { KC_SPACE, OSL(1), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {

    COMBO(comboLangle, KC_LABK),
    COMBO(comboLsquare, KC_LBRC),
    COMBO(comboLcurly, KC_LCBR),
    COMBO(comboLparen, KC_LPRN),
    COMBO(comboEnter, KC_ENTER),
    COMBO(comboEnterSYM, KC_ENTER),
    COMBO(comboEnterNAV, KC_ENTER),
    COMBO(comboOSMalt, OSM(MOD_LALT)),
    COMBO(comboOSMaltSYMNAV, OSM(MOD_LALT)),

    COMBO(comboRparen, KC_RPRN),
    COMBO(comboRcurly, KC_RCBR),
    COMBO(comboRsquare, KC_RBRC),
    COMBO(comboRangle, KC_RABK),

    COMBO(comboNav, TO(2)),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116}, {193,230,116} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    bool return_value;
    if (magic_pr(keycode, record, &return_value))
        return return_value;
    if (!process_layer_lock(keycode, record, LLOCK)) {
        return false;
    }
    switch (keycode) {
      case RGB_SLD:
        if (record->event.pressed) {
          rgblight_mode(1);
        }
        return false;
    }
    return true;
}
