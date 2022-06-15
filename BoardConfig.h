/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#ifndef MINI_FIGHTER_BOARD_CONFIG_H_
#define MINI_FIGHTER_BOARD_CONFIG_H_

#include <GamepadEnums.h>
#include "enums.h"
#include "NeoPico.hpp"
#include "PlayerLEDs.h"


#define PIN_DPAD_UP     2
#define PIN_DPAD_DOWN   22
#define PIN_DPAD_LEFT   21
#define PIN_DPAD_RIGHT  26
#define PIN_BUTTON_B1   3
#define PIN_BUTTON_B2   4
#define PIN_BUTTON_B3   7
#define PIN_BUTTON_B4   8
#define PIN_BUTTON_L1   9
#define PIN_BUTTON_R1   10
#define PIN_BUTTON_L2   5
#define PIN_BUTTON_R2   6
#define PIN_BUTTON_S1   16
#define PIN_BUTTON_S2   17
#define PIN_BUTTON_L3   14
#define PIN_BUTTON_R3   15
#define PIN_BUTTON_A1   28
#define PIN_BUTTON_A2   18

#define DEFAULT_SOCD_MODE SOCD_MODE_NEUTRAL
#define BUTTON_LAYOUT BUTTON_LAYOUT_HITBOX

#define BOARD_LEDS_PIN 27

#define LED_BRIGHTNESS_MAXIMUM 100
#define LED_BRIGHTNESS_STEPS 5
#define LED_FORMAT LED_FORMAT_GRB
#define LEDS_PER_PIXEL 1

#define LEDS_DPAD_LEFT   0
#define LEDS_DPAD_DOWN   1
#define LEDS_DPAD_RIGHT  2
#define LEDS_DPAD_UP     3
#define LEDS_BUTTON_B3   4
#define LEDS_BUTTON_B4   5
#define LEDS_BUTTON_R1   6
#define LEDS_BUTTON_L1   7
#define LEDS_BUTTON_B1   11
#define LEDS_BUTTON_B2   10
#define LEDS_BUTTON_R2   9
#define LEDS_BUTTON_L2   8

#endif