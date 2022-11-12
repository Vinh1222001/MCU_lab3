/*
 * trafic_light.c
 *
 *  Created on: Nov 1, 2022
 *      Author: PC
 */
#include "trafic_ligh.h"

void trafic_light_run(){
	displaying_value();
	switch(status_led_horizontal){
		case INIT:
			status_led_horizontal = RED;
			break;
		case RED:
			if(green_flag_horizontal==1){
				status_led_horizontal=GREEN;
			}
			HAL_GPIO_WritePin(LED_RED_HORIZONTAL_GPIO_Port, LED_RED_HORIZONTAL_Pin, RESET);
			HAL_GPIO_WritePin(LED_AMBER_HORIZONTAL_GPIO_Port, LED_AMBER_HORIZONTAL_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_HORIZONTAL_GPIO_Port, LED_GREEN_HORIZONTAL_Pin, SET);
			break;
		case AMBER:
			if(red_flag_horizontal==1){
				status_led_horizontal=RED;
			}
			HAL_GPIO_WritePin(LED_RED_HORIZONTAL_GPIO_Port, LED_RED_HORIZONTAL_Pin, SET);
			HAL_GPIO_WritePin(LED_AMBER_HORIZONTAL_GPIO_Port, LED_AMBER_HORIZONTAL_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_HORIZONTAL_GPIO_Port, LED_GREEN_HORIZONTAL_Pin, SET);
			break;
		case GREEN:
			if(amber_flag_horizontal==1){
				status_led_horizontal=AMBER;
			}
			HAL_GPIO_WritePin(LED_RED_HORIZONTAL_GPIO_Port, LED_RED_HORIZONTAL_Pin, SET);
			HAL_GPIO_WritePin(LED_AMBER_HORIZONTAL_GPIO_Port, LED_AMBER_HORIZONTAL_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_HORIZONTAL_GPIO_Port, LED_GREEN_HORIZONTAL_Pin, RESET);
			break;
		default:
			break;
	}
	switch(status_led_vertical){
		case INIT:
			status_led_vertical = RED;
			break;
		case RED:
			if(green_flag_vertical==1){
				status_led_vertical=GREEN;
			}
			HAL_GPIO_WritePin(LED_RED_VERTICAL_GPIO_Port, LED_RED_VERTICAL_Pin, RESET);
			HAL_GPIO_WritePin(LED_AMBER_VERTICAL_GPIO_Port, LED_AMBER_VERTICAL_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_VERTICAL_GPIO_Port, LED_GREEN_VERTICAL_Pin, SET);
			break;
		case AMBER:
			if(red_flag_vertical==1){
				status_led_vertical=RED;
			}
			HAL_GPIO_WritePin(LED_RED_VERTICAL_GPIO_Port, LED_RED_VERTICAL_Pin, SET);
			HAL_GPIO_WritePin(LED_AMBER_VERTICAL_GPIO_Port, LED_AMBER_VERTICAL_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_VERTICAL_GPIO_Port, LED_GREEN_VERTICAL_Pin, SET);
			break;
		case GREEN:
			if(amber_flag_vertical==1){
				status_led_vertical=AMBER;
			}
			HAL_GPIO_WritePin(LED_RED_VERTICAL_GPIO_Port, LED_RED_VERTICAL_Pin, SET);
			HAL_GPIO_WritePin(LED_AMBER_VERTICAL_GPIO_Port, LED_AMBER_VERTICAL_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_VERTICAL_GPIO_Port, LED_GREEN_VERTICAL_Pin, RESET);
			break;
		default:
			break;
	}
}

