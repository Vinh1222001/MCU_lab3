/*
 * modify.c
 *
 *  Created on: Nov 12, 2022
 *      Author: PC
 */

#include "modify.h"

void modify_run(int led){
	modify_check=1;
	switch(led){
	case RED:

		if(button2_flag==1){
			button2_flag=0;
			tmp_timer++;
			if(tmp_timer>=100){
				tmp_timer=0;
			}
		}
		break;
	case AMBER:

		if(button2_flag==1){
			button2_flag=0;
			tmp_timer++;
			if(tmp_timer>=100){
				tmp_timer=0;
			}
		}
		break;
	case GREEN:

		if(button2_flag==1){
			button2_flag=0;
			tmp_timer++;
			if(tmp_timer>=100){
				tmp_timer=0;
			}
		}
		break;
	default:
			break;
	}
}
