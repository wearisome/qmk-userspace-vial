/*
 * Copyright 2020 Christopher Courtney <drashna@live.com> (@drashna)
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Publicw License as published by
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

#include "47.h"

// clang-format off
#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    /* Key Matrix to LED index. */
    {      3,      4,     11,     12,     19,      20,  NO_LED},
    {      2,      5,     10,     13,     18,      21 , NO_LED},
    {      1,      6,     9,      14,     17,      22 , NO_LED},
    {      0,      7,     8,      15,     16,      23,  24},

    {     28,     29,       35,         36,         41,      42, NO_LED},
    {     27,     30,       34,         37,         40,      43, NO_LED},
    {     26,     31,       33,         38,         39,      44, NO_LED},
    {     25,     32,       NO_LED,     NO_LED,     NO_LED,  45, 46 },
}, {


    {   0,   39 },   {   0,  26 },   {   0,  13 },   {   0,  0 },
    {  17,  0 },   {  17,  13 },   {  17,   26 },  {   17,  39 },
    {  34,   39 },   {  34,  26 },   {  34,  13 },   {  34,  0 },
    {  51,  0 },   {  51,  13 },   {  51,   26 },  {   51,  39 },
    {  68,   52 },   {  68,  30 },   {  68,  15 },   {  68,  5 },
    {  85,   5 },   {  85,  15 },   {  85,  30 },   {  85,  55 },
    {  102,   58 },

    { 221,   39 },   { 221,  26 },    { 221,  13 },   { 221,  0 },
    { 204,  0 },    { 204,  13 },   { 204,   26 }, { 204,   39 },
    { 187,   26 },   { 187,  13 },    { 187,  0 },
    { 170,  0 },   {   170,  13 },{ 170,   26 },
    { 153,   26 },  { 153,   13 }, { 153,   0 },
    { 136,   0 },{ 136,   13 },{ 136,   26 },
    { 130,   39 },{ 119,   40 }

}, {
    /* LED index to flag. */

    LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
    LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
    LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
    LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
    LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
    LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
    LED_FLAG_MODIFIER,

    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,  LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT
} };
#endif


