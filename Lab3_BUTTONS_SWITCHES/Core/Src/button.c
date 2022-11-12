/*
 * button.c
 *
 *  Created on: Nov 1, 2022
 *      Author: PC
 */

#include "button.h"

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int KeyReg01 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;
int KeyReg21 = NORMAL_STATE;
int KeyReg31 = NORMAL_STATE;

int KeyReg02 = NORMAL_STATE;
int KeyReg12 = NORMAL_STATE;
int KeyReg22 = NORMAL_STATE;
int KeyReg32 = NORMAL_STATE;

int TimeOutForKeyPress =  TIMEOUT;

int led_status=0;

int isButtonPressed = 0;
int button1_flag=0;
int button2_flag=0;
int button3_flag=0;

void subKeyProcess(){
	if(KeyReg3 == PRESSED_STATE){
		//isButtonPressed =1;
		button1_flag=1;
	}
	if(KeyReg31 == PRESSED_STATE){
		//isButtonPressed =1;
		button2_flag=1;
	}

	if(KeyReg32 == PRESSED_STATE){
		//isButtonPressed =1;
		button3_flag=1;
	}

}
void getKeyInput(){
  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  KeyReg0 = HAL_GPIO_ReadPin(SELECT_MODE_BUTTON_GPIO_Port,SELECT_MODE_BUTTON_Pin);
  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
    if (KeyReg2 != KeyReg3){
      KeyReg3 = KeyReg2;

      if (KeyReg3 == PRESSED_STATE){
        TimeOutForKeyPress = TIMEOUT;
        subKeyProcess();
      }
    }else{
       TimeOutForKeyPress --;
        if (TimeOutForKeyPress == 0){
          KeyReg3 = NORMAL_STATE;
        }
    }
  }
}

void getKeyInput1(){
  KeyReg21 = KeyReg11;
  KeyReg11 = KeyReg01;
  KeyReg01= HAL_GPIO_ReadPin(MODIFY_BUTTOON_GPIO_Port, MODIFY_BUTTOON_Pin);
  if ((KeyReg11 == KeyReg01) && (KeyReg11 == KeyReg21)){
    if (KeyReg21 != KeyReg31){
      KeyReg31 = KeyReg21;

      if (KeyReg31 == PRESSED_STATE){
        TimeOutForKeyPress = TIMEOUT;
        subKeyProcess();
      }
    }else{
       TimeOutForKeyPress --;
        if (TimeOutForKeyPress == 0){
          KeyReg31 = NORMAL_STATE;
        }
    }
  }
}

void getKeyInput2(){
  KeyReg22 = KeyReg12;
  KeyReg12 = KeyReg02;
  KeyReg02= HAL_GPIO_ReadPin(SET_VALUE_BUTTON_GPIO_Port, SET_VALUE_BUTTON_Pin);
  if ((KeyReg12 == KeyReg02) && (KeyReg12 == KeyReg22)){
    if (KeyReg22 != KeyReg32){
      KeyReg32 = KeyReg22;

      if (KeyReg32 == PRESSED_STATE){
        TimeOutForKeyPress = TIMEOUT;
        subKeyProcess();
      }
    }else{
       TimeOutForKeyPress --;
        if (TimeOutForKeyPress == 0){
          KeyReg32 = NORMAL_STATE;
        }
    }
  }
}
