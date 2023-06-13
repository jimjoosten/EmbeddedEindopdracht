/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32wbxx_hal.h"

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
#define LED_RED_Pin GPIO_PIN_13
#define LED_RED_GPIO_Port GPIOC
#define POTMETER_Pin GPIO_PIN_1
#define POTMETER_GPIO_Port GPIOC
#define REED_Pin GPIO_PIN_3
#define REED_GPIO_Port GPIOC
#define BUZZER_GROVE_Pin GPIO_PIN_0
#define BUZZER_GROVE_GPIO_Port GPIOB
#define RELAY_Pin GPIO_PIN_10
#define RELAY_GPIO_Port GPIOA
#define ROTARY1_Pin GPIO_PIN_11
#define ROTARY1_GPIO_Port GPIOC
#define ROTARY2_Pin GPIO_PIN_12
#define ROTARY2_GPIO_Port GPIOC
#define ROTARY_SWITCH_Pin GPIO_PIN_0
#define ROTARY_SWITCH_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
