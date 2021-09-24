#include QMK_KEYBOARD_H

// tco_v06

// Define layer names which are used in the keymap below
#define _QWERTY 0
#define _SYMBOL 1
#define _NUMBER 2
#define _NAV 3
#define _APPANDMEDIA 4
#define _KEYBOARD 5

//Using the = SCAN_RANGE tells the enum to start there
enum custom_keycodes {
	QWERTY = SAFE_RANGE,
	SYMBOL,
	NUMBER,
	NAV,
	APPANDMEDIA,
	KEYBOARD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {



[_QWERTY] = LAYOUT_ortho_4x12( \
	KC_ESC,							KC_Q,								KC_W,								KC_E,								KC_R,								KC_T,						\
	KC_Y,								KC_U,								KC_I,								KC_O,								KC_P,								KC_BSPC,				\
	
	KC_TAB,							KC_A,								KC_S,								KC_D,								KC_F,								KC_G,						\
	KC_H,								KC_J,								KC_K,								KC_L,								KC_SCLN,						KC_QUOT,				\
	
	LSFT_T(KC_BSLS),		KC_Z,								KC_X,								KC_C,								KC_V,								KC_B,						\
	KC_N,								KC_M,								KC_COMM,						KC_DOT,							KC_SLSH,						RSFT_T(KC_1),		\
	
	LT(3,KC_CAPS),			KC_LCPO,						C_S_T(KC_MINS),			LALT_T(KC_LBRC),		LT(1,KC_DEL),				KC_ENT,					\
	KC_SPC,							LT(2,KC_EQL),				RALT_T(KC_RBRC),		KC_LGUI,						KC_RCPC,						LT(3,KC_ENT)		),

[_SYMBOL] = LAYOUT_ortho_4x12( \
	KC_TILD,						KC_EXLM,						KC_AT,							KC_HASH,						KC_DLR,							KC_PERC,				\
	KC_CIRC,						KC_AMPR,						KC_ASTR,						KC_LPRN,						KC_RPRN,						KC_TRNS,				\

	KC_TRNS,						KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,					\
	KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,					\

	KC_TRNS,						KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,					\
	KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_TRNS,				\

	KC_NO,							KC_TRNS,						KC_TRNS,						KC_TRNS,						KC_TRNS,						KC_TRNS,				\
	KC_TRNS,						MO(4),							KC_TRNS,						KC_TRNS,						KC_TRNS,						KC_TRNS					),

[_NUMBER] = LAYOUT_ortho_4x12( \
	KC_GRV,							KC_1,								KC_2,								KC_3,								KC_4,								KC_5,						\
	KC_6,								KC_7,								KC_8,								KC_9,								KC_0,								KC_TRNS,				\

	KC_TRNS,						KC_4,								KC_5,								KC_6,								KC_PLUS,						KC_MINS,				\
	KC_A,								KC_B,								KC_C,								KC_D,								KC_E,								KC_F,						\

	KC_TRNS,						KC_7,								KC_8,								KC_9,								KC_ASTR,						KC_SLSH,				\
	KC_DOT,							KC_COMM,						KC_LT,							KC_GT,							KC_EQL,							KC_TRNS,				\

	KC_NO,							KC_TRNS,						KC_TRNS,						KC_TRNS,						MO(4),							KC_TRNS,				\
	KC_TRNS,						KC_TRNS,						KC_TRNS,						KC_TRNS,						KC_TRNS,						KC_TRNS					),

[_NAV] = LAYOUT_ortho_4x12( \
	KC_ESC,							KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,					\
	KC_HOME,						KC_PGDN,						KC_PGUP,						KC_END,							KC_NO,							KC_TRNS,				\

	KC_TRNS,						KC_NO,							KC_NO,							KC_BTN2,						KC_BTN1,						KC_NO,					\
	KC_LEFT,						KC_DOWN,						KC_UP,							KC_RGHT,						KC_NO,							KC_NO,					\

	KC_TRNS,						KC_NO,							KC_MS_L,						KC_MS_D,						KC_MS_U,						KC_MS_R,				\
	KC_WH_L,						KC_WH_D,						KC_WH_U,						KC_WH_R,						KC_NO,							KC_TRNS,				\

	KC_NO,							KC_TRNS,						KC_TRNS,						KC_TRNS,						KC_DEL,							KC_TRNS,				\
	KC_TRNS,						KC_NO,							KC_TRNS,						KC_TRNS,						KC_TRNS,						KC_TRNS					),

[_APPANDMEDIA] = LAYOUT_ortho_4x12( \
	MO(5),							KC_MUTE,						KC_VOLD,						KC_VOLU,						KC_MPRV,						KC_MPLY,				\
	KC_MNXT,						KC_NO,							KC_BRID,						KC_BRIU,						KC_LGUI,						KC_PSCR,				\

	KC_NO,							KC_F1,							KC_F2,							KC_F3,							KC_F4,							KC_F5,					\
	KC_F6,							KC_NO,							KC_NO,							KC_NO,							KC_LSFT,						KC_S,						\

	KC_TRNS,						KC_F7,							KC_F8,							KC_F9,							KC_F10,							KC_F11,					\
	KC_F12,							KC_NO,							KC_NO,							KC_NO,							KC_LALT,						KC_NO,					\

	KC_NO,							KC_TRNS,						KC_TRNS,						KC_TRNS,						KC_NO,							KC_TRNS,				\
	KC_TRNS,						KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO						),

[_KEYBOARD] = LAYOUT_ortho_4x12( \
	KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,					\
	KC_NO,							RGB_MOD,						RGB_VAI,						RGB_HUI,						RGB_SAI,						RGB_TOG,				\

	RESET,							KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,					\
	KC_NO,							RGB_RMOD,						RGB_VAD,						RGB_HUD,						RGB_SAD,						KC_NO,					\

	KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,					\
	KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,					\

	KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,					\
	KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO,							KC_NO						)

};