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

#include "landinggear.h"

static landingGearState_t lGearState = 0;
static uint8_t faults = 0;

landingGearState_t getLandingGearState(void) {
    return lGearState;
}

void setLandingGearState(landingGearState_t state) {
    lGearState = state;
}

uint8_t getLandingGearFaults(void) {
    return faults;
}

void setLandingGearFaults(uint8_t newFaults) {
    faults = newFaults;
}