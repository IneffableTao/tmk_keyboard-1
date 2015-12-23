#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* layer 0: qwerty */
  KEYMAP_ERGO(\
      ESC,      F1,  F2,  F3,  F4,  F5,     F6,  F7,  F8,  F9,  F10, F11, F12,         PSCR,SLCK,PAUS,
      GRV, 1,   2,   3,   4,   5,   6,      7,   8,   9,   0,   MINS,EQL, NO,  BSPC,   INS, HOME,PGUP,
      TAB, Q,   W,   E,   R,   T,           Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,   DEL, END, PGDN,
      FN0, A,   S,   D,   F,   G,           H,   J,   K,   L,   SCLN,QUOT,NO,  ENT,
      LSFT,NO,  Z,   X,   C,   V,   B,      FN1, N,   M,   COMM,DOT, SLSH,RSFT,             UP,
      LCTL,APP, LGUI,LALT,          SPC,    SPC,           FN1, RGUI,APP, RCTL,        LEFT,DOWN,RGHT),
  /* layer 1: space fn */
  KEYMAP_ERGO(\
      TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,
      FN2, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,   TRNS,TRNS,TRNS,
      TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,
      FN3, TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,
      TRNS,NO,  TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,             TRNS,
      TRNS,TRNS,TRNS,TRNS,          FN4,    FN4,           TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS),
  /* layer 2: gaming */
  KEYMAP_ERGO(\
      TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,
      TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,   TRNS,TRNS,TRNS,
      TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,
      TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,
      TRNS,NO,  TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,             TRNS,
      TRNS,NO,  NO,  TRNS,          TRNS,   TRNS,          TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS),
  /* layer 3: first function layer */
  KEYMAP_ERGO(\
      TRNS,     FN5, TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,
      FN6, FN7, FN8, TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,   TRNS,TRNS,TRNS,
      TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        WBAK,WH_D,WH_U,WFWD,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,
      TRNS,ACL0,ACL1,ACL2,TRNS,TRNS,        MS_L,MS_D,MS_U,MS_R,TRNS,TRNS,NO,  TRNS,
      TRNS,NO,  TRNS,TRNS,TRNS,BTN3,BTN2,   TRNS,BTN1,BTN4,BTN5,TRNS,TRNS,TRNS,             TRNS,
      TRNS,TRNS,TRNS,TRNS,          BTN1,   BTN1,          TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS),
  /* layer 4: second function layer */
  KEYMAP_ERGO(\
      TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,
      GRV, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,   TRNS,TRNS,TRNS,
      TRNS,TRNS,Y,   P,   PSCR,SLCK,        PAUS,HOME,INS, DEL, END, VOLD,VOLU,MUTE,   TRNS,TRNS,TRNS,
      CAPS,TRNS,TRNS,TRNS,WSCH,TRNS,        LEFT,DOWN,UP,  RGHT,MPRV,MNXT,NO,  MPLY,
      TRNS,NO,  SLEP,TRNS,CALC,TRNS,WFAV,   TRNS,FN9, PGDN,PGUP,TRNS,TRNS,TRNS,             TRNS,
      TRNS,TRNS,TRNS,TRNS,          TRNS,   TRNS,          TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS)
};

enum LayerId {
  LAYER_QWERTY,
  LAYER_SPACEFN,
  LAYER_GAMING,
  LAYER_FUNCTIONS_FIRST,
  LAYER_FUNCTIONS_SECOND
};

const action_t fn_actions[] PROGMEM = {
  [0] = ACTION_LAYER_TAP_KEY(LAYER_FUNCTIONS_FIRST, KC_CAPS),
  [1] = ACTION_LAYER_MODS(LAYER_FUNCTIONS_SECOND, MOD_RALT),
  [2] = ACTION_MODS_KEY(MOD_RSFT, KC_GRV),
  [3] = ACTION_LAYER_TAP_KEY(LAYER_FUNCTIONS_FIRST, KC_ESC),
  [4] = ACTION_LAYER_TAP_KEY(LAYER_FUNCTIONS_SECOND, KC_SPACE),
  [5] = ACTION_BACKLIGHT_LEVEL(BACKLIGHT_SWITCH),
  [6] = ACTION_DEFAULT_LAYER_SET(LAYER_QWERTY),
  [7] = ACTION_DEFAULT_LAYER_SET(LAYER_SPACEFN),
  [8] = ACTION_LAYER_TOGGLE(LAYER_GAMING),
  [9] = ACTION_MODS_KEY(MOD_LSFT, KC_INS)
};
