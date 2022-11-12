/*
 * seven_seg_led_display.h
 *
 *  Created on: Nov 1, 2022
 *      Author: PC
 */

#ifndef INC_SEVEN_SEG_LED_DISPLAY_H_
#define INC_SEVEN_SEG_LED_DISPLAY_H_

#include "main.h"
#include "global.h"

void seven_led_seg_display(int value);
void update7SEG(int index);
void displaying_value();
void update_buffer(int horizontal, int vertical);
void display_for_mode();

#endif /* INC_SEVEN_SEG_LED_DISPLAY_H_ */
