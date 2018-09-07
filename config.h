/*
 * TongSheng TSDZ2 motor controller firmware/
 *
 * Copyright (C) Casainho, 2018.
 *
 * Released under the GPL License, Version 3
 */

#ifndef _CONFIG_H_
#define _CONFIG_H_

// This file is the firmware configuration for the TSDZ2 motor controller,
// to run the 2 different available motors of 36V or 48V motor,
// and from 24V battery (7S) up to 52V battery pack (14S).

// *************************************************************************** //
// BATTERY

// This is the current that motor will draw from the battery
// Higher value will give higher torque and the limit of the controller is 16 amps
#define ADC_BATTERY_CURRENT_MAX 29 // 18 amps (0.625 amps each unit)

// Considering the follow voltage values for each li-ion battery cell
// State of charge 		| voltage
#define LI_ION_CELL_VOLTS_100   4.05
#define LI_ION_CELL_VOLTS_80    3.90
#define LI_ION_CELL_VOLTS_60    3.70
#define LI_ION_CELL_VOLTS_40    3.50
#define LI_ION_CELL_VOLTS_20    3.25
#define LI_ION_CELL_VOLTS_10    3.10
#define LI_ION_CELL_VOLTS_0     2.90

// *************************************************************************** //
// MOTOR CONTROLLER

// Choose PWM ramp up/down step (higher value will make the motor acceleration slower)
//
// For a 24V battery, 25 for ramp up seems ok. For an higher voltage battery, this values should be higher
#define PWM_DUTY_CYCLE_RAMP_UP_INVERSE_STEP 75
#define PWM_DUTY_CYCLE_RAMP_DOWN_INVERSE_STEP 25

// *************************************************************************** //
// MOTOR

// Choose some parameters for your motor (if you don't know, just keep the following original values because they should work ok)
//
// This value should be near 0.
// You can try to tune with the whell on the air, full throttle and look at batttery current: adjust for lower battery current
#define MOTOR_ROTOR_OFFSET_ANGLE 10

#define ADC_MOTOR_PHASE_CURRENT_MAX 48 // 30 amps (0.625 amps each unit)

// This value is ERPS speed after which a transition happens from sinewave no interpolation to have
// interpolation 60 degrees and must be found experimentally but a value of 25 may be good
#define MOTOR_ROTOR_ERPS_START_INTERPOLATION_60_DEGREES 10

#endif /* _CONFIG_H_ */
