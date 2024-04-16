// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk

#pragma once

#ifndef MIRYOKU_KEYBOARD_CORNE
#define MIRYOKU_KEYBOARD_CORNE
#endif

#include "custom_config.dtsi"

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GAME   10

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04, K05,      K06, K07, K08, K09, K10, K11, \
     K12, K13, K14, K15, K16, K17,      K18, K19, K20, K21, K22, K23, \
     K24, K25, K26, K27, K28, K29,      K30, K31, K32, K33, K34, K35, \
     N36, N37, N38, K39, K40, K41,      K42, K43, K44, N45, N46, N47  \
) \
K00  K01  K02  K03  K04  K05       K06  K07  K08  K09  K10  K11  \
K12  K13  K14  K15  K16  K17       K18  K19  K20  K21  K22  K23  \
K24  K25  K26  K27  K28  K29       K30  K31  K32  K33  K34  K35  \
               K39  K40  K41       K42  K43  K44

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40


#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_CORNE \
&uc_win_ea,        &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,                    U_NU,     \
&uc_win_eg,        U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),          U_NU,     \
&uc_win_ag,        U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),    U_NU,     \
&uc_win_cc,        U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP,                     U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY_CORNE \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             &u_to_U_BASE,    \
&kp LCTRL,         &kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           U_NU,            \
&kp LSHFT,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         U_NU,            \
U_NP,              U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_GAME_CORNE \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             &u_to_U_BASE,    \
&kp LCTRL,         &kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           U_NU,            \
&kp LSHFT,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         U_NU,            \
U_NP,              U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &mo U_NUM,         &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_VI_CORNE \
U_BOOT,            &u_to_U_GAME,      &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             U_NU,     \
U_NU,              &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      U_NU,     \
U_NU,              U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           U_NU,     \
U_NP,              U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_VI_CORNE \
U_BOOT,            &u_to_U_GAME,      &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             U_NU,     \
U_NU,              &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              U_NU,     \
U_NU,              U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              U_NU,     \
U_NP,              U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_CORNE \
U_BOOT,            &u_to_U_GAME,      &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             U_NU,     \
U_NU,              &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,     \
U_NU,              U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,     \
U_NP,              U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_VI_CORNE \
U_BOOT,            &u_to_U_GAME,      &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         U_NU,     \
U_NU,              &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          U_NU,     \
U_NU,              U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NU,     \
U_NP,              U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_CORNE \
U_BOOT,            &u_to_U_GAME,      &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_TOG,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_NU,     \
U_NU,              &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_NU,     \
U_NU,              U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       U_NU,     \
U_NP,              U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM_CORNE \
U_NU,              &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            U_NU,     \
U_NU,              &kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NU,     \
U_NU,              &kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              U_NU,     \
U_NP,              U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM_CORNE \
&uc_win_ug,        &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            U_NU,     \
U_NU,              &kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NU,     \
U_NU,              &kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              U_NU,     \
U_NP,              U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_FUN_CORNE \
U_NU,              &kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            U_NU,     \
U_NU,              &kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NU,     \
U_NU,              &kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              U_NU,     \
U_NP,              U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_BUTTON_CORNE \
U_NU,              U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             U_NU,     \
U_NU,              &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NU,     \
U_NU,              U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             U_NU,     \
U_NP,              U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP,              U_NP


#define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTY_CORNE
#define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTY_CORNE
#define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_QWERTY_CORNE
#define MIRYOKU_LAYER_BUTTON MIRYOKU_ALTERNATIVES_BUTTON_CORNE
#define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_VI_CORNE
#define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_VI_CORNE
#define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_VI_CORNE
#define MIRYOKU_LAYER_NUM MIRYOKU_ALTERNATIVES_NUM_CORNE
#define MIRYOKU_LAYER_SYM MIRYOKU_ALTERNATIVES_SYM_CORNE
#define MIRYOKU_LAYER_FUN MIRYOKU_ALTERNATIVES_FUN_CORNE
#define MIRYOKU_LAYER_GAME MIRYOKU_ALTERNATIVES_GAME_CORNE

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_LAYOUTMAPPING_CORNE
