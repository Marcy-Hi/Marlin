/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
const short temptable_1[][2] PROGMEM = {
  { OV(  23), 300 },
  { OV(  25), 295 },
  { OV(  27), 290 },
  { OV(  28), 275 },
  { OV(  31), 270 },
  { OV(  33), 265 },
  { OV(  35), 260 },
  { OV(  38), 256 },
  { OV(  41), 251 },
  { OV(  44), 247 },
  { OV(  48), 242 },
  { OV(  52), 238 },
  { OV(  56), 233 },
  { OV(  61), 228 },
  { OV(  66), 224 },
  { OV(  71), 220 },
  { OV(  78), 215 },
  { OV(  84), 211 },
  { OV(  92), 206 },
  { OV( 100), 201 },
  { OV( 109), 197 },
  { OV( 120), 192 },
  { OV( 131), 187 },
  { OV( 143), 182 },
  { OV( 156), 178 },
  { OV( 187), 168 },
  { OV( 224), 158 },
  { OV( 268), 148 },
  { OV( 320), 138 },
  { OV( 379), 128 },
  { OV( 445), 118 },
  { OV( 519), 108 },
  { OV( 590),  98 },
  { OV( 665),  88 },
  { OV( 737),  78 },
  { OV( 801),  68 },
  { OV( 857),  59 },
  { OV( 903),  49 },
  { OV( 939),  40 },
  { OV( 965),  30 },
  { OV( 977),  25 },
  { OV( 985),  20 },
  { OV( 993),  15 },
  { OV( 999),  10 },
  { OV(1004),   5 },
  { OV(1008),   0 },
  { OV(1012),  -5 },
  { OV(1016), -10 },
  { OV(1020), -15 }
};
