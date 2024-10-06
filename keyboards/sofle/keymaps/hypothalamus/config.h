/* Copyright 2021 Dane Evans
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

/* Select hand configuration */

/// https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/

#define MASTER_LEFT

#ifdef ENCODER_RESOLUTION
#    undef ENCODER_RESOLUTION
#    define ENCODER_RESOLUTION 4
#endif

#ifdef MOUSEKEY_ENABLE
// #    define MOUSEKEY_WHEEL_INTERVAL 10
#    define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 32
#endif

#define OLED_TIMEOUT 120000

// split sync stuff
// #define SPLIT_MODS_ENABLE
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_OLED_ENABLE

// RGB stuff

/* ws2812 RGB LED */
// #define RGB_DI_PIN D3
// #define WS2812_DI_PIN RGB_DI_PIN

#ifdef RGB_MATRIX_ENABLE
// #    define RGBLED_NUM 72
// #    define RGB_MATRIX_LED_COUNT RGBLED_NUM
#    define RGB_MATRIX_SPLIT \
        { 36, 36 }

#    define RGB_MATRIX_CUSTOM_USER

// #    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #    define RGB_MATRIX_KEYPRESSES             // reacts to keypresses
#    define RGB_MATRIX_TIMEOUT 120000  // same as OLED
#    define RGB_DISABLE_WHEN_USB_SUSPENDED   // turn off effects when suspended
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 80 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.

#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_RAINBOW_MOVING_CHEVRON

#    define RGB_MATRIX_HUE_STEP 8
#    define RGB_MATRIX_SAT_STEP 8
#    define RGB_MATRIX_VAL_STEP 8
#    define RGB_MATRIX_SPD_STEP 10

/* Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
// #    define ENABLE_RGB_MATRIX_ALPHAS_MODS
// #    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
// #    define ENABLE_RGB_MATRIX_BREATHING
// #    define ENABLE_RGB_MATRIX_BAND_SAT
// #    define ENABLE_RGB_MATRIX_BAND_VAL
// #    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
// #    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
// #    define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
// #    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
// #    define ENABLE_RGB_MATRIX_CYCLE_ALL
// #    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
// #    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
// #    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
// #    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
// #    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
// #    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
// #    define ENABLE_RGB_MATRIX_DUAL_BEACON
// #    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
// #    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
// #    define ENABLE_RGB_MATRIX_RAINDROPS
// #    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
// #    define ENABLE_RGB_MATRIX_HUE_BREATHING
// #    define ENABLE_RGB_MATRIX_HUE_PENDULUM
// #    define ENABLE_RGB_MATRIX_HUE_WAVE
// #    define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// #    define ENABLE_RGB_MATRIX_PIXEL_RAIN

#    ifdef RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #        define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#        define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#    endif // RGB_MATRIX_FRAMEBUFFER_EFFECTS

#    if defined(RGB_MATRIX_KEYPRESSES) || defined(RGB_MATRIX_KEYRELEASES)
// #        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #        define ENABLE_RGB_MATRIX_SOLID_REACTIVE
// #        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
// #        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// #        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
// #        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
// #        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
// #        define ENABLE_RGB_MATRIX_SPLASH
// #        define ENABLE_RGB_MATRIX_MULTISPLASH
// #        define ENABLE_RGB_MATRIX_SOLID_SPLASH
// #        define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#    endif // KEYPRESS / KEYRELEASE

#endif // RGB_MATRIX_ENABLE
