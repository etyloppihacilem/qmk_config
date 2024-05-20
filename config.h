/* Copyright 2022 splitkb.com <support@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
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

#pragma once

#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_SLEEP
#   define RGB_MATRIX_KEYPRESSES
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#   define ENABLE_RGB_MATRIX_SOLID_SPLASH
#   define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#endif

#ifdef MOUSEKEY_ENABLE
#   define MK_KINETIC_SPEED
#   define MOUSEKEY_DELAY 0
#   define MOUSEKEY_INTERVAL 8
#   define MOUSEKEY_MOVE_DELTA 18
#   define MOUSEKEY_INITIAL_SPEED 600
#   define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 8
#   define MOUSEKEY_WHEEL_BASE_MOVEMENTS 16
#   define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 24
#endif

#define OLED_BRIGHTNESS 128

#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
