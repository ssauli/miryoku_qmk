// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define TAIPO_TAP_TIMEOUT 150
#define ONESHOT_TIMEOUT 500

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
MIRYOKU_X(TAIPO,  "Taipo")

#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              TO(TAIPO),         RGB_HUI,           RGB_SAI,           RGB_VAI,           RGB_TOG,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           U_NU,              \
U_NA,              KC_ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  U_NA,              U_NU,              U_NU,              U_NU,              U_NU,              OU_AUTO,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP


#define MIRYOKU_LAYER_TAIPO \
U_NP,           U_NP,           U_NP,           U_NP,           U_NP,           TO(BASE),       U_NP,           U_NP,           U_NP,           U_NP,    \
TP_TLP,         TP_TLR,         TP_TLM,         TP_TLI,         U_NP,           U_NP,           TP_TRI,         TP_TRM,         TP_TRR,         TP_TRP,  \
TP_BLP,         TP_BLR,         TP_BLM,         TP_BLI,         U_NP,           U_NP,           TP_BRI,         TP_BRM,         TP_BRR,         TP_BRP,  \
U_NP,           U_NP,           U_NP,           TP_LIT,         TP_LOT,         TP_ROT,         TP_RIT,         U_NP,           U_NP,           U_NP

#define MIRYOKU_LAYERMAPPING_TAIPO MIRYOKU_MAPPING
