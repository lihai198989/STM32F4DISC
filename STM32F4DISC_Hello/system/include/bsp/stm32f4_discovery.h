/*
 * stm32f4_discovery.h
 *
 *  Created on: Aug 11, 2017
 *      Author: li
 */

#ifndef INCLUDE_BSP_STM32F4_DISCOVERY_H_
#define INCLUDE_BSP_STM32F4_DISCOVERY_H_

#include "stm32f4xx_hal.h"

#define BSP_LED3_PORT		GPIOD
#define BSP_LED3_PIN		GPIO_PIN_13
#define BSP_LED4_PORT		GPIOD
#define BSP_LED4_PIN		GPIO_PIN_12
#define BSP_LED5_PORT		GPIOD
#define BSP_LED5_PIN		GPIO_PIN_14
#define BSP_LED6_PORT		GPIOD
#define BSP_LED6_PIN		GPIO_PIN_15


typedef enum {
	BSP_LED3 = 0,
	BSP_LED4,
	BSP_LED5,
	BSP_LED6
} BSP_LedType;

void bsp_ledInit(void);
void bsp_ledOn(BSP_LedType led);
void bsp_ledOff(BSP_LedType led);
void bsp_ledSpark(BSP_LedType led);

#endif /* INCLUDE_BSP_STM32F4_DISCOVERY_H_ */
