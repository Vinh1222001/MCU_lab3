/*
 * selecting_mode.c
 *
 *  Created on: Nov 1, 2022
 *      Author: PC
 */

#include "selecting_mode.h"

void selecting_mode_run(){
	switch(mode){
		case INIT:
			mode=MODE01;
			HAL_GPIO_WritePin(CHECK_SUCCESSFULL_GPIO_Port, CHECK_SUCCESSFULL_Pin, SET);
			break;
		case MODE01:
			trafic_light_run();
			if(button1_flag==1){
				button1_flag=0;
				modify_check=0;
				mode = MODE02;
			}
			break;
		case MODE02:
			mode2_run();
			if(button1_flag==1){
				button1_flag=0;
				modify_check=0;
				mode = MODE03;
				HAL_GPIO_WritePin(CHECK_SUCCESSFULL_GPIO_Port, CHECK_SUCCESSFULL_Pin, SET);
			}
			if(button3_flag==1){
				button3_flag=0;
				red_timer_global=tmp_timer;
				HAL_GPIO_WritePin(CHECK_SUCCESSFULL_GPIO_Port, CHECK_SUCCESSFULL_Pin, RESET);
			}
			break;
		case MODE03:
			mode3_run();
			if(button1_flag==1){
				button1_flag=0;
				modify_check=0;
				mode = MODE04;
				HAL_GPIO_WritePin(CHECK_SUCCESSFULL_GPIO_Port, CHECK_SUCCESSFULL_Pin, SET);
			}
			if(button3_flag==1){
				button3_flag=0;
				amber_timer_global=tmp_timer;
				HAL_GPIO_WritePin(CHECK_SUCCESSFULL_GPIO_Port, CHECK_SUCCESSFULL_Pin, RESET);
			}
			break;
		case MODE04:
			mode4_run();
			if(button1_flag==1){
				button1_flag=0;
				modify_check=0;
				mode = MODE01;
				HAL_GPIO_WritePin(CHECK_SUCCESSFULL_GPIO_Port, CHECK_SUCCESSFULL_Pin, SET);
			}
			if(button3_flag==1){
				button3_flag=0;
				green_timer_global=tmp_timer;
				HAL_GPIO_WritePin(CHECK_SUCCESSFULL_GPIO_Port, CHECK_SUCCESSFULL_Pin, RESET);
			}
			break;
		default:

			break;
	}
}
