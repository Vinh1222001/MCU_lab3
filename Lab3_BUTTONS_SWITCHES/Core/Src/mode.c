/*
 * mode1.c
 *
 *  Created on: Nov 12, 2022
 *      Author: PC
 */


#include <mode.h>

int led_status_mode2=0;

void mode2_run(){
	if(timer1_flag==1){
		setTimer1(50);
		led_status_mode2=1-led_status_mode2;
		HAL_GPIO_WritePin(LED_RED_HORIZONTAL_GPIO_Port, LED_RED_HORIZONTAL_Pin, led_status_mode2);
		HAL_GPIO_WritePin(LED_RED_VERTICAL_GPIO_Port, LED_RED_VERTICAL_Pin, led_status_mode2);
	}
	if(modify_check==0){
		tmp_timer=red_timer_global;
	}
	update_buffer(tmp_timer, 2);
	display_for_mode();
	modify_run(RED);
	HAL_GPIO_WritePin(LED_AMBER_HORIZONTAL_GPIO_Port, LED_AMBER_HORIZONTAL_Pin, SET);
	HAL_GPIO_WritePin(LED_AMBER_VERTICAL_GPIO_Port, LED_AMBER_VERTICAL_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_HORIZONTAL_GPIO_Port, LED_GREEN_HORIZONTAL_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_VERTICAL_GPIO_Port, LED_GREEN_VERTICAL_Pin, SET);
}

void mode3_run(){
	if(timer1_flag==1){
		setTimer1(50);
		led_status_mode2=1-led_status_mode2;
		HAL_GPIO_WritePin(LED_AMBER_HORIZONTAL_GPIO_Port, LED_AMBER_HORIZONTAL_Pin, led_status_mode2);
		HAL_GPIO_WritePin(LED_AMBER_VERTICAL_GPIO_Port, LED_AMBER_VERTICAL_Pin, led_status_mode2);
	}
	if(modify_check==0){
		tmp_timer=amber_timer_global;
	}
	update_buffer(tmp_timer, 3);
	display_for_mode();
	modify_run(AMBER);
	HAL_GPIO_WritePin(LED_RED_HORIZONTAL_GPIO_Port, LED_RED_HORIZONTAL_Pin, SET);
	HAL_GPIO_WritePin(LED_RED_VERTICAL_GPIO_Port, LED_RED_VERTICAL_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_HORIZONTAL_GPIO_Port, LED_GREEN_HORIZONTAL_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_VERTICAL_GPIO_Port, LED_GREEN_VERTICAL_Pin, SET);
}

void mode4_run(){
	if(timer1_flag==1){
		setTimer1(50);
		led_status_mode2=1-led_status_mode2;
		HAL_GPIO_WritePin(LED_GREEN_HORIZONTAL_GPIO_Port, LED_GREEN_HORIZONTAL_Pin, led_status_mode2);
		HAL_GPIO_WritePin(LED_GREEN_VERTICAL_GPIO_Port, LED_GREEN_VERTICAL_Pin, led_status_mode2);
	}
	if(modify_check==0){
		tmp_timer=green_timer_global;
	}
	update_buffer(tmp_timer, 4);
	display_for_mode();
	modify_run(GREEN);
	HAL_GPIO_WritePin(LED_AMBER_HORIZONTAL_GPIO_Port, LED_AMBER_HORIZONTAL_Pin, SET);
	HAL_GPIO_WritePin(LED_AMBER_VERTICAL_GPIO_Port, LED_AMBER_VERTICAL_Pin, SET);
	HAL_GPIO_WritePin(LED_RED_HORIZONTAL_GPIO_Port, LED_RED_HORIZONTAL_Pin, SET);
	HAL_GPIO_WritePin(LED_RED_VERTICAL_GPIO_Port, LED_RED_VERTICAL_Pin, SET);
}
