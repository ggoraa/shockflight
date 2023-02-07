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

#define LGEAR_MAX_FAULT_COUNT 8

typedef enum landingGearState_e {
    LGEARSTATE_UNKNOWN,
    LGEARSTATE_CHANGING,
    LGEARSTATE_FAULT,
    LGEARSTATE_RETRACTED,
    LGEARSTATE_HANDLEMODE,
    LGEARSTATE_EXTENDED
} landingGearState_t;

typedef enum landingGearFault_e {
    LGEARFAULT_LEFT_UP_MOTOR, // Left landing gear: upper motor inoperable
    LGEARFAULT_LEFT_LOW_MOTOR, // Left landing gear: lower motor inoperable
    LGEARFAULT_LEFT_UP_LOCK, // Left landing gear: upper lock inoperable
    LGEARFAULT_LEFT_LO_LOCK, // Left landing gear: lower lock inoperable
    LGEARFAULT_RIGHT_UP_MOTOR, // Right landing gear: upper motor inoperable
    LGEARFAULT_RIGHT_LO_MOTOR, // Right landing gear: lower motor inoperable
    LGEARFAULT_RIGHT_UP_LOCK, // Right landing gear: upper lock inoperable
    LGEARFAULT_RIGHT_LO_LOCK, // Right landing gear: lower lock inoperable
} landingGearFault_t;

landingGearState_t getLandingGearState(void);
void setLandingGearState(landingGearState_t state);
uint8_t getLandingGearFaults(void);
void setLandingGearFaults(uint8_t newFaults);