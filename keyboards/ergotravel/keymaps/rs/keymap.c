﻿#include QMK_KEYBOARD_H
#include "rs.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_kc(
  //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
     TAB , Q  , W  , E  , R  , T  , GRV,      BSLS, Y  , U  , I  , O  , P  ,EQL ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
     ESCC, A  , S  , D  , F  , G  ,PIPE,      MINS, H  , J  , K  , L  ,SCLN,QUOT,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
     LSFT, Z  , X  , C  , V  , B  , SPC,      BSPC, N  , M  ,COMM,DOT ,SLSH,ENTS,
  //|----+----+----+----+----+----+----.     .----+----+----+----+----+----+----|
      FN ,    ,LCTL,LALT,LGUI, SPC,               BSPC, CODE,LEFT, UP ,DOWN,RIGHT
  //`----+----+----+--+-+----/----/               \----\----+----+----+----+----'
  ),
  [_CODE] = LAYOUT_kc(
    //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
       GRV ,EXLM, AT ,HASH, DLR,PERC,    ,          ,CIRC,LPLT,ASTR,RPGT,NEQL,    ,
    //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
           , 1  , 2  , 3  , 4  , 5  ,    ,          ,MINS,LBRC, UP ,RBRC,    ,BSLS,
    //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
           , 6  , 7  , 8  , 9  , 0  , DOT,          ,AMPR,LEFT,DOWN,RGHT,    ,PIPE,
    //|----+----+----+----+----+----+----.     .----+----+----+----+----+----+----|
           ,    ,    ,    ,    ,    ,                    ,    ,    ,    ,    ,
    //`----+----+----+----+----/----/               \----\----+----+----+----+----'
  ),
  [_FN] = LAYOUT_kc(
    //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
           , F1 , F2 , F3 , F4 , F5 ,    ,          , F6 , F7 , F8 , F9 , F10,F11 ,
    //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
           ,    ,    ,    ,    ,    ,BRMU,          ,    ,    ,PGUP,    ,    ,    ,
    //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
           ,    ,    ,    ,    , RST,BRMD,      VOLU,    ,CTRA,PGDN,CTRE,    ,    ,
    //|----+----+----+----+----+----+----.     .----+----+----+----+----+----+----|
           ,    ,    ,    ,    ,    ,                VOLD,MUTE,    ,    ,    ,
    //`----+----+----+----+----/----/               \----\----+----+----+----+----'
  ),
};