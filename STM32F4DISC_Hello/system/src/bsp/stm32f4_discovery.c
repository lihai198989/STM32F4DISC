/*
 * stm32f4_discovery.c
 *
 *  Created on: Aug 11, 2017
 *      Author: li
 */
#include "stm32f4_discovery.h"

void bsp_ledInit(void)
{
	GPIO_InitTypeDef gpioInitStruct;

	__HAL_RCC_GPIOD_CLK_ENABLE();

	gpioInitStruct.Alternate = 0;
	gpioInitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	gpioInitStruct.Pull = GPIO_NOPULL;
	gpioInitStruct.Speed= GPIO_SPEED_FREQ_MEDIUM;

	gpioInitStruct.Pin  = BSP_LED3_PIN;
	HAL_GPIO_Init(BSP_LED3_PORT, &gpioInitStruct);

	gpioInitStruct.Pin  = BSP_LED4_PIN;
	HAL_GPIO_Init(BSP_LED4_PORT, &gpioInitStruct);

	gpioInitStruct.Pin  = BSP_LED5_PIN;
	HAL_GPIO_Init(BSP_LED5_PORT, &gpioInitStruct);

	gpioInitStruct.Pin  = BSP_LED6_PIN;
	HAL_GPIO_Init(BSP_LED6_PORT, &gpioInitStruct);
}

void bsp_ledOn(BSP_LedType led)
{
	switch(led)
	{
		case BSP_LED3:
			HAL_GPIO_WritePin(BSP_LED3_PORT, BSP_LED3_PIN, GPIO_PIN_SET);
			break;
		case BSP_LED4:
			HAL_GPIO_WritePin(BSP_LED4_PORT, BSP_LED4_PIN, GPIO_PIN_SET);
			break;
		case BSP_LED5:
			HAL_GPIO_WritePin(BSP_LED5_PORT, BSP_LED5_PIN, GPIO_PIN_SET);
			break;
		case BSP_LED6:
			HAL_GPIO_WritePin(BSP_LED6_PORT, BSP_LED6_PIN, GPIO_PIN_SET);
			break;
		default:
			break;
	}
}

void bsp_ledOff(BSP_LedType led)
{
	switch(led)
	{
		case BSP_LED3:
			HAL_GPIO_WritePin(BSP_LED3_PORT, BSP_LED3_PIN, GPIO_PIN_RESET);
			break;
		case BSP_LED4:
			HAL_GPIO_WritePin(BSP_LED4_PORT, BSP_LED4_PIN, GPIO_PIN_RESET);
			break;
		case BSP_LED5:
			HAL_GPIO_WritePin(BSP_LED5_PORT, BSP_LED5_PIN, GPIO_PIN_RESET);
			break;
		case BSP_LED6:
			HAL_GPIO_WritePin(BSP_LED6_PORT, BSP_LED6_PIN, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}

void bsp_ledSpark(BSP_LedType led)
{
	switch(led)
	{
		case BSP_LED3:
			HAL_GPIO_TogglePin(BSP_LED3_PORT, BSP_LED3_PIN);
			break;
		case BSP_LED4:
			HAL_GPIO_TogglePin(BSP_LED4_PORT, BSP_LED4_PIN);
			break;
		case BSP_LED5:
			HAL_GPIO_TogglePin(BSP_LED5_PORT, BSP_LED5_PIN);
			break;
		case BSP_LED6:
			HAL_GPIO_TogglePin(BSP_LED6_PORT, BSP_LED6_PIN);
			break;
		default:
			break;
	}
}
