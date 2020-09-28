#include QMK_KEYBOARD_H
#include "keymap_jp.h"
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define HSV_BLACK 0, 0, 0

enum layer_number {
  _BASE = 0,
  _L1,
  _L2,
  _L3,
  _MOUSE,
  _ADJUST,
};

enum custom_keycodes {
  RGB_RST = SAFE_RANGE
};

enum tapdances{
  TD_ZHMS = 0,
  TD_ZHAR,
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_ZHMS] = ACTION_TAP_DANCE_DUAL_ROLE(KC_ZKHK, _MOUSE),
  [TD_ZHAR] = ACTION_TAP_DANCE_DUAL_ROLE(KC_ZKHK, _BASE),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
  //,-----------------------------------------------------|   |-----------------------------------------------------------------------------------------.
  TD(TD_ZHMS),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,           KC_DEL, KC_PSCR,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,        KC_6,    KC_7,    KC_8,    KC_9,    KC_0, JP_MINS, JP_CIRC,  JP_YEN, KC_BSPC, KC_HOME,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   JP_AT, JP_LBRC,           KC_ENT,  KC_END,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     KC_LCTRL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_H,    KC_J,    KC_K,    KC_L, JP_SCLN, JP_COLN, JP_RBRC,                   KC_PGUP,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, JP_BSLS,          KC_RSFT,   KC_UP, KC_PGDN,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     KC_LCTRL, KC_LGUI, KC_LALT,KC_MHEN,LT(_L1,KC_MHEN),KC_SPC,KC_SPC,LT(_L2,KC_HENK),KC_RALT,KC_RGUI,MO(_L3),                 KC_LEFT, KC_DOWN,KC_RIGHT
  //`-----------------------------------------------------|   |-----------------------------------------------------------------------------------------'
  ),

  [_L1] = LAYOUT(
  //,-----------------------------------------------------|   |-----------------------------------------------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           KC_DEL, KC_PSCR,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS, KC_BSPC, KC_HOME,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      JP_DQUO, JP_EXLM, JP_QUES, JP_LBRC, JP_RBRC, JP_TILD,       KC_P6,   KC_P7,   KC_P8,   KC_P9, JP_ASTR, JP_SLSH, XXXXXXX,           KC_ENT,  KC_END,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      JP_QUOT, JP_HASH, JP_ASTR, JP_LPRN, JP_RPRN, JP_UNDS,     XXXXXXX,   KC_P4,   KC_P5,   KC_P6, JP_MINS,  JP_EQL, XXXXXXX,                   KC_PGUP,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       JP_GRV, JP_PERC, JP_AMPR, JP_SCLN, JP_COLN, JP_PIPE,       KC_P0,   KC_P1,   KC_P2,   KC_P3, JP_PLUS, XXXXXXX,          KC_RSFT,   KC_UP, KC_PGDN,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MO(_L1), XXXXXXX,     XXXXXXX, MO(_L2), XXXXXXX, XXXXXXX, XXXXXXX,                   KC_LEFT, KC_DOWN,KC_RIGHT
  //`-----------------------------------------------------|   |-----------------------------------------------------------------------------------------'
  ),

  [_L2] = LAYOUT(
  //,-----------------------------------------------------|   |-----------------------------------------------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           KC_DEL, KC_PSCR,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS, KC_BSPC, KC_HOME,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_TAB, XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, KC_MS_U, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           KC_ENT,  KC_END,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     KC_LCTRL, XXXXXXX, KC_LEFT, KC_DOWN,KC_RIGHT, XXXXXXX,     KC_WH_U, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_PGUP,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_WH_D, KC_BTN1, KC_BTN2, KC_BTN3, XXXXXXX, XXXXXXX,          XXXXXXX,   KC_UP, KC_PGDN,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     KC_LCTRL, KC_LGUI, KC_LALT, XXXXXXX, MO(_L1), XXXXXXX,     XXXXXXX, MO(_L2), XXXXXXX, XXXXXXX, XXXXXXX,                   KC_LEFT, KC_DOWN,KC_RIGHT
  //`-----------------------------------------------------|   |-----------------------------------------------------------------------------------------'
  ),

  [_L3] = LAYOUT(
  //,-----------------------------------------------------|   |-----------------------------------------------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           KC_DEL, KC_EJCT,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_ZKHK, KC_BRID, KC_BRIU, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, KC_BSPC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,     XXXXXXX,  KC_INS, KC_PSCR, KC_SLCK, KC_PAUS, XXXXXXX, XXXXXXX,           KC_ENT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     KC_LCTRL,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,     JP_CAPS, XXXXXXX, KC_HOME, KC_PGUP, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX,  KC_F11,  KC_F12,     XXXXXXX, XXXXXXX,  KC_END, KC_PGDN, JP_UNDS, XXXXXXX,          KC_RSFT,   KC_UP, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,  KC_ENT,      KC_SPC,  KC_DEL, XXXXXXX, XXXXXXX, MO(_L3),                   KC_LEFT, KC_DOWN,KC_RIGHT
  //`-----------------------------------------------------|   |-----------------------------------------------------------------------------------------'
  ),

  [_MOUSE] = LAYOUT(
  //,-----------------------------------------------------|   |-----------------------------------------------------------------------------------------.
  TD(TD_ZHAR), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, KC_PSCR,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_U,          XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     KC_LCTRL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_D,                   KC_BTN3,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          KC_BTN1, KC_MS_U, KC_BTN2,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     KC_LCTRL, KC_LGUI, KC_LALT, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_MS_L, KC_MS_D, KC_MS_R
  //`-----------------------------------------------------|   |-----------------------------------------------------------------------------------------'
  ),

  [_ADJUST] = LAYOUT(
  //,-----------------------------------------------------|   |-----------------------------------------------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, RGB_M_P, RGB_M_B, RGB_M_R, XXXXXXX, XXXXXXX,     RGB_RST, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX,RGB_M_SW,RGB_M_SN, RGB_M_K, XXXXXXX, XXXXXXX,     RGB_TOG, RGB_MOD,RGB_RMOD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, RGB_M_X, RGB_M_G, RGB_M_T, XXXXXXX, XXXXXXX,     RGB_VAD, RGB_VAI, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI,          XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX
  //`-----------------------------------------------------|   |-----------------------------------------------------------------------------------------'
  )
};

int RGB_current_mode;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool result = false;
  switch (keycode) {
    #ifdef RGBLIGHT_ENABLE
      case RGB_MOD:
          if (record->event.pressed) {
            rgblight_mode(RGB_current_mode);
            rgblight_step();
            RGB_current_mode = rgblight_get_mode();
          }
        break;
      case RGB_RMOD:
          if (record->event.pressed) {
            rgblight_mode(RGB_current_mode);
            rgblight_step_reverse();
            RGB_current_mode = rgblight_get_mode();
          }
        break;
      case RGB_RST:
          if (record->event.pressed) {
            eeconfig_update_rgblight_default();
            rgblight_enable();
            RGB_current_mode = rgblight_get_mode();
          }
        break;
    #endif
    default:
      result = true;
      break;
  }

  return result;
}

#ifdef RGBLIGHT_ENABLE
  const rgblight_segment_t PROGMEM rgb_sample_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 0, 1, HSV_WHITE},            // Esc
    { 1, 1, HSV_RED},              // F1
    { 2, 1, HSV_CORAL},            // F2
    { 3, 1, HSV_ORANGE},           // F3
    { 4, 1, HSV_GOLDENROD},        // F4
    { 5, 1, HSV_GOLD},             // F5

    // 6, 7, 8, 9, 10              // LED Tape

    {11, 1, HSV_BLACK},            // Blocker

    {12, 1, HSV_YELLOW},           // F6
    {13, 1, HSV_CHARTREUSE},       // F7
    {14, 1, HSV_GREEN},            // F8
    {15, 1, HSV_SPRINGGREEN},      // F9
    {16, 1, HSV_TURQUOISE},        // F10
    {17, 1, HSV_TEAL},             // F11
    {18, 1, HSV_CYAN},             // F12
    {19, 1, HSV_AZURE},            // Del
    {20, 1, HSV_BLUE},             // PScr

    {21, 1, HSV_PURPLE},           // Home
    {22, 1, HSV_MAGENTA},          // End
    {23, 1, HSV_PINK},             // PgUP
    {24, 1, HSV_BLACK}             // PgDN

    // 25, 26, 27, 28, 29, 30, 31  // LED Tape
  );

  const rgblight_segment_t PROGMEM rgb_L1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 0,32, HSV_BLUE}
  );

  const rgblight_segment_t PROGMEM rgb_L2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 0,32, HSV_RED}
  );

  const rgblight_segment_t PROGMEM rgb_L3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 0,32, HSV_GREEN}
  );

  const rgblight_segment_t PROGMEM rgb_mouse_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 0, 1, HSV_WHITE},            // Esc
    { 1, 1, HSV_RED},              // F1
    { 2, 1, HSV_CORAL},            // F2
    { 3, 1, HSV_ORANGE},           // F3
    { 4, 1, HSV_GOLDENROD},        // F4
    { 5, 1, HSV_GOLD},             // F5

    // 6, 7, 8, 9, 10              // LED Tape

    {11, 1, HSV_BLACK},            // Blocker

    {12, 1, HSV_YELLOW},           // F6
    {13, 1, HSV_CHARTREUSE},       // F7
    {14, 1, HSV_GREEN},            // F8
    {15, 1, HSV_SPRINGGREEN},      // F9
    {16, 1, HSV_TURQUOISE},        // F10
    {17, 1, HSV_TEAL},             // F11
    {18, 1, HSV_CYAN},             // F12
    {19, 1, HSV_AZURE},            // Del
    {20, 1, HSV_BLUE},             // PScr

    {21, 1, HSV_PURPLE},           // Home
    {22, 1, HSV_MAGENTA},          // End
    {23, 1, HSV_PINK},             // PgUP
    {24, 1, HSV_BLACK}             // PgDN

    // 25, 26, 27, 28, 29, 30, 31  // LED Tape
  );

  const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
	rgb_sample_layer,
    rgb_L1_layer,
	rgb_L2_layer,
	rgb_L3_layer,
    rgb_mouse_layer
  );
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
  // LED調整モードの検出
  state = update_tri_layer_state(state, _L1, _L2, _ADJUST);
  
  // レイヤーによってLED状態を変更
  #ifdef RGBLIGHT_ENABLE
    rgblight_set_layer_state(_L1, get_highest_layer(state) == _L1);
    rgblight_set_layer_state(_L2, get_highest_layer(state) == _L2);
    rgblight_set_layer_state(_L3, get_highest_layer(state) == _L3);
    rgblight_set_layer_state(_MOUSE, get_highest_layer(state) == _MOUSE);
  #endif

  return state;
}

// キーボード初期化後に呼ばれる関数
void keyboard_post_init_user(void) {
  #ifdef RGBLIGHT_ENABLE
    // レイヤーのLED情報を読み込み
    rgblight_layers = rgb_layers;
  #endif
}
