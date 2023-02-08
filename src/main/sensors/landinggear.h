/*
 * This file is part of Shockflight.
 *
 * Shockflight is free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Shockflight is distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <stdint.h>

typedef enum landingGearState_e {
    LGEARSTATE_UNKNOWN,
    LGEARSTATE_CHANGING,
    LGEARSTATE_FAULT,
    LGEARSTATE_RETRACTED,
    LGEARSTATE_HANDLEMODE,
    LGEARSTATE_EXTENDED,
} landingGearState_t;

typedef enum landingGearFault_e {
    LGEARFAULT_LEFT_UP_MOTOR,
    LGEARFAULT_LEFT_LOW_MOTOR,
    LGEARFAULT_LEFT_UP_LOCK,
    LGEARFAULT_LEFT_LO_LOCK,
    LGEARFAULT_RIGHT_UP_MOTOR,
    LGEARFAULT_RIGHT_LO_MOTOR,
    LGEARFAULT_RIGHT_UP_LOCK,
    LGEARFAULT_RIGHT_LO_LOCK,
    LGEARFAULT_COUNT
} landingGearFault_t;

landingGearState_t getLandingGearState(void);
void setLandingGearState(const landingGearState_t state);
uint8_t getLandingGearFaults(void);
void setLandingGearFaults(const uint8_t newFaults);