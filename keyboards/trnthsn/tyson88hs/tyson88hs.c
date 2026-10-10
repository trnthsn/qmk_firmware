// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include "quantum.h"

#ifdef RGBLIGHT_ENABLE
static bool capslock_rgb_on = false;

static void sync_capslock_rgb(bool caps_lock_on) {
  if (caps_lock_on == capslock_rgb_on) {
    return;
  }

  capslock_rgb_on = caps_lock_on;

  if (caps_lock_on) {
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
    rgblight_sethsv_noeeprom(HSV_WHITE);
  } else {
    rgblight_disable_noeeprom();
  }
}

void keyboard_post_init_kb(void) {
  rgblight_disable_noeeprom();
  keyboard_post_init_user();
}

bool led_update_kb(led_t led_state) {
  bool res = led_update_user(led_state);
  if (res) {
    sync_capslock_rgb(led_state.caps_lock);
  }
  return res;
}

void housekeeping_task_kb(void) {
  sync_capslock_rgb(host_keyboard_led_state().caps_lock);
  housekeeping_task_user();
}
#endif
