/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define USE_SERIAL

#define MASTER_LEFT
//#define MASTER_RIGHT

#undef DIODE_DIRECTION
#define DIODE_DIRECTION COL2ROW

//#define EE_HANDS

#define VIAL_KEYBOARD_UID {0x6A, 0x4E, 0xF2, 0x32, 0xC7, 0xBA, 0x6E, 0x96}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0, 4, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 4, 0, 4 }

#define SOLENOID_PIN F5
