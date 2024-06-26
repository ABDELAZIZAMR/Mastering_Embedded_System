/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

#include "platform.h"

#define RCC_BASE    0x40021000
#define GPIOA_BASE  0X40010800

#define RCC_APB2ENR  *(volatile uint32_t *)(RCC_BASE   + 0x18)
#define GPIOA_CRH    *(volatile uint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_ODR    *(volatile uint32_t *)(GPIOA_BASE + 0x0C)

// BIT FIELDS

#define RCC_IOPAEN    (1<<2)
#define GPIOA13       (1UL<<13])

typedef union{
	uint32_t       all_fields;

	struct {
		uint32_t      reserved:13;
		uint32_t      pin_13:1;

	}pin;
}R_ODR_t;

volatile R_ODR_t*  R_ODR = (volatile uint32_t*)(GPIOA_BASE + 0x0C);
int main(){
	RCC_APB2ENR |=1<<2;
	GPIOA_CRH &=0xff0fffff;
	GPIOA_CRH |=0x00200000;
	while(1){
		R_ODR ->pin.pin_13 =0;
		for(int i = 0; i<10000; i++);
		R_ODR ->pin.pin_13 =1;
		for(int i = 0; i<10000; i++);
	}
	return 0;

}
