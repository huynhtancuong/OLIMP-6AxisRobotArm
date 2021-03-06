/*
  defaults_generic.h - defaults settings configuration file
  Part of Grbl

  Copyright (c) 2012-2015 Sungeun K. Jeon

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

/* The defaults.h file serves as a central default settings file for different machine
   types, from DIY CNC mills to CNC conversions of off-the-shelf machines. The settings
   here are supplied by users, so your results may vary. However, this should give you
   a good starting point as you get to know your machine and tweak the settings for your
   nefarious needs. */

#ifndef defaults_h
#define defaults_h

  // Grbl generic default settings. Should work across different machines.
  #define DEFAULT_A_STEPS_PER_MM 44.5
  #define DEFAULT_B_STEPS_PER_MM 270.0
  #define DEFAULT_C_STEPS_PER_MM 270.0
  #define DEFAULT_D_STEPS_PER_MM 265.0
  #define DEFAULT_E_STEPS_PER_MM 20.0
  #define DEFAULT_F_STEPS_PER_MM 250.0
  #define DEFAULT_G_STEPS_PER_MM 250.0
  #define DEFAULT_A_MAX_RATE 2000.0 // mm/min
  #define DEFAULT_B_MAX_RATE 800.0 // mm/min
  #define DEFAULT_C_MAX_RATE 800.0 // mm/min
  #define DEFAULT_D_MAX_RATE 800.0 // mm/min
  #define DEFAULT_E_MAX_RATE 2000.0 // mm/min
  #define DEFAULT_F_MAX_RATE 500.0 // mm/min
  #define DEFAULT_G_MAX_RATE 500.0 // mm/min
  #define DEFAULT_A_ACCELERATION 36000.0 //(10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_B_ACCELERATION 36000.0 //(10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_C_ACCELERATION 36000.0 //(10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_D_ACCELERATION 36000.0 //(10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_E_ACCELERATION 36000.0 //(10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_F_ACCELERATION 36000.0 //(10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_G_ACCELERATION 36000.0 //(10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_A_MAX_TRAVEL 200.0 // mm
  #define DEFAULT_B_MAX_TRAVEL 200.0 // mm
  #define DEFAULT_C_MAX_TRAVEL 200.0 // mm
  #define DEFAULT_D_MAX_TRAVEL 200.0 // mm
  #define DEFAULT_E_MAX_TRAVEL 200.0 // mm
  #define DEFAULT_F_MAX_TRAVEL 200.0 // mm
  #define DEFAULT_G_MAX_TRAVEL 200.0 // mm
  #define DEFAULT_STEP_PULSE_MICROSECONDS 10
  #define DEFAULT_STEPPING_INVERT_MASK 0
  #define DEFAULT_DIRECTION_INVERT_MASK 0
  #define DEFAULT_STEPPER_IDLE_LOCK_TIME 255 // msec (0-254, 255 keeps steppers enabled)
  #define DEFAULT_STATUS_REPORT_MASK 3
  #define DEFAULT_JUNCTION_DEVIATION 0.01 // mm
  #define DEFAULT_ARC_TOLERANCE 0.002 // mm
  #define DEFAULT_REPORT_INCHES 0 // false
  #define DEFAULT_INVERT_ST_ENABLE 0 // false
  #define DEFAULT_INVERT_LIMIT_PINS 1 // true
  #define DEFAULT_SOFT_LIMIT_ENABLE 0 // false
  #define DEFAULT_HARD_LIMIT_ENABLE 0  // false
  #define DEFAULT_HOMING_ENABLE 1  // true
  #define DEFAULT_HOMING_DIR_MASK 0 // move positive dir
  #define DEFAULT_HOMING_FEED_RATE 25.0 // mm/min
  #define DEFAULT_HOMING_SEEK_RATE 500.0 // mm/min
  #define DEFAULT_HOMING_DEBOUNCE_DELAY 250 // msec (0-65k)
  #define DEFAULT_HOMING_PULLOFF 2.0 // mm

#endif
