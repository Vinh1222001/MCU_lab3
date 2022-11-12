/*
 * button.h
 *
 *  Created on: Nov 1, 2022
 *      Author: PC
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET
#define TIMEOUT 500

extern int isButtonPressed;
extern int button1_flag;
extern int button2_flag;
extern int button3_flag;


void getKeyInput();
void getKeyInput1();
void getKeyInput2();

#endif /* INC_BUTTON_H_ */
