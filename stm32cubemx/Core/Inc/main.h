/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Ch3_SET_Pin GPIO_PIN_2
#define Ch3_SET_GPIO_Port GPIOE
#define Ch4_SET_Pin GPIO_PIN_3
#define Ch4_SET_GPIO_Port GPIOE
#define Ch5_SET_Pin GPIO_PIN_4
#define Ch5_SET_GPIO_Port GPIOE
#define Ch6_SET_Pin GPIO_PIN_5
#define Ch6_SET_GPIO_Port GPIOE
#define Ch7_SET_Pin GPIO_PIN_6
#define Ch7_SET_GPIO_Port GPIOE
#define Ch8_SET_Pin GPIO_PIN_7
#define Ch8_SET_GPIO_Port GPIOE
#define Ch1_RESET_Pin GPIO_PIN_8
#define Ch1_RESET_GPIO_Port GPIOE
#define Ch2_RESET_Pin GPIO_PIN_9
#define Ch2_RESET_GPIO_Port GPIOE
#define Ch3_RESET_Pin GPIO_PIN_10
#define Ch3_RESET_GPIO_Port GPIOE
#define Ch4_RESET_Pin GPIO_PIN_11
#define Ch4_RESET_GPIO_Port GPIOE
#define Ch5_RESET_Pin GPIO_PIN_12
#define Ch5_RESET_GPIO_Port GPIOE
#define Ch6_RESET_Pin GPIO_PIN_13
#define Ch6_RESET_GPIO_Port GPIOE
#define Ch7_RESET_Pin GPIO_PIN_14
#define Ch7_RESET_GPIO_Port GPIOE
#define Ch8_RESET_Pin GPIO_PIN_15
#define Ch8_RESET_GPIO_Port GPIOE
#define Temp1_Alert_Pin GPIO_PIN_8
#define Temp1_Alert_GPIO_Port GPIOD
#define Temp2_Alert_Pin GPIO_PIN_9
#define Temp2_Alert_GPIO_Port GPIOD
#define SPI3_CS_Pin GPIO_PIN_15
#define SPI3_CS_GPIO_Port GPIOA
#define Ch1_EN_Pin GPIO_PIN_0
#define Ch1_EN_GPIO_Port GPIOD
#define Ch2_EN_Pin GPIO_PIN_1
#define Ch2_EN_GPIO_Port GPIOD
#define Ch3_EN_Pin GPIO_PIN_2
#define Ch3_EN_GPIO_Port GPIOD
#define Ch4_EN_Pin GPIO_PIN_3
#define Ch4_EN_GPIO_Port GPIOD
#define Ch5_EN_Pin GPIO_PIN_4
#define Ch5_EN_GPIO_Port GPIOD
#define Ch6_EN_Pin GPIO_PIN_5
#define Ch6_EN_GPIO_Port GPIOD
#define Ch7_EN_Pin GPIO_PIN_6
#define Ch7_EN_GPIO_Port GPIOD
#define Ch8_EN_Pin GPIO_PIN_7
#define Ch8_EN_GPIO_Port GPIOD
#define Ch1_SET_Pin GPIO_PIN_0
#define Ch1_SET_GPIO_Port GPIOE
#define Ch2_SET_Pin GPIO_PIN_1
#define Ch2_SET_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
