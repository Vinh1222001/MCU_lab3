/*
 * global.c
 *
 *  Created on: Nov 1, 2022
 *      Author: PC
 */
#include "global.h"

int mode = INIT;
int status_led_horizontal=INIT;
int status_led_vertical=INIT;
int status_led_vertical;
int red_flag_horizontal=1;
int amber_flag_horizontal=0;
int green_flag_horizontal=0;

int red_flag_vertical=0;
int amber_flag_vertical=0;
int green_flag_vertical=1;
int led_buffer[4]={0,5,0,3};


int red_timer_global=5;
int amber_timer_global=2;
int green_timer_global=3;

int horizontal=5;
int vertical=3;

int tmp_timer=0;
int modify_check=0;
