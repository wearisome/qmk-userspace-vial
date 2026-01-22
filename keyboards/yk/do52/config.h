/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once
#define EE_HANDS

#ifdef PS2_DRIVER_INTERRUPT
#define PS2_MOUSE_ROTATE 90
#define PS2_MOUSE_USE_REMOTE_MODE

#define PS2_INT_INIT()  do {    \
    EICRA |= ((1<<ISC21) |      \
              (0<<ISC20));      \
} while (0)
#define PS2_INT_ON()  do {      \
    EIMSK |= (1<<INT2);         \
} while (0)
#define PS2_INT_OFF() do {      \
    EIMSK &= ~(1<<INT2);        \
} while (0)
#define PS2_INT_VECT   INT2_vect
#endif
// uncomment for left hand
//#undef PS2_MOUSE_USE_REMOTE_MODE

#define DYNAMIC_KEYMAP_LAYER_COUNT 6

#undef TAPPING_TERM
#define TAPPING_TERM 200
