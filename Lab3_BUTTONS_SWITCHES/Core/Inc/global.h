/*
 * global.h
 *
 *  Created on: Nov 1, 2022
 *      Author: PC
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "button.h"
#include "software_timer.h"
#include "seven_seg_led_display.h"

#define INIT 0
#define MODE01 1
#define MODE02 2
#define MODE03 3
#define MODE04 4

#define RED_HORIZONTAL 10
#define AMBER_HORIZONTAL 11
#define GREEN_HORIZONTAL 12

#define RED_VERTICAL 20
#define AMBER_VERTICAL 21
#define GREEN_VERTICAL 22

#define RED_TIMER 500
#define AMBER_TIMER 200
#define GREEN_TIMER 300

#define RED 30
#define AMBER 31
#define GREEN 32

#define  TIMER_INTERRUPT_DURATION 20

extern int mode;

extern int red_timer_global;
extern int amber_timer_global;
extern int green_timer_global;

extern int status_led_horizontal;
extern int status_led_vertical;
extern int red_flag_horizontal;
extern int amber_flag_horizontal;
extern int green_flag_horizontal;

extern int red_flag_vertical;
extern int amber_flag_vertical;
extern int green_flag_vertical;
extern int led_buffer[4];

extern int horizontal;
extern int vertical;

extern int tmp_timer;
extern int modify_check;

#endif /* INC_GLOBAL_H_ */
