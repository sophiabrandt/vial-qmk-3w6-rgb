// Copyright 2024 Keebart
// Copyright 2021 weteor
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
// Set the mouse settings to a comfortable speed/accuracy trade-off,
// assuming a screen refresh rate of 60 Htz or higher
// The default is 50. This makes the mouse ~3 times faster and more accurate
#define MOUSEKEY_INTERVAL 16
// The default is 20. Since we made the mouse about 3 times faster with the previous setting,
// give it more time to accelerate to max speed to retain precise control over short distances.
#define MOUSEKEY_TIME_TO_MAX 40
// The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
#define MOUSEKEY_DELAY 100
// It makes sense to use the same delay for the mouseweel
#define MOUSEKEY_WHEEL_DELAY 100
// The default is 100
#define MOUSEKEY_WHEEL_INTERVAL 50
// The default is 40
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100

// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM 0

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 10

#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS_PER_SIDE (MATRIX_COLS / 2)

#define MATRIX_ROW_PINS_L \
    { GP6, GP7, GP8, GP9 }
#define MATRIX_COL_PINS_L \
    { GP14, GP13, GP12, GP11, GP10 }

#define MATRIX_ROW_PINS_R \
    { P13, P14, P15, P16 }
#define MATRIX_COL_PINS_R \
    { P04, P05, P06, P07, P08 }

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define USB_SUSPEND_WAKEUP_DELAY 200
