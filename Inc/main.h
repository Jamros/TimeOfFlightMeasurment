/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32l4xx_hal.h"

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
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOA
#define VCP_TX_Pin GPIO_PIN_2
#define VCP_TX_GPIO_Port GPIOA
#define ButtonTriger_Pin GPIO_PIN_12
#define ButtonTriger_GPIO_Port GPIOA
#define ButtonTriger_EXTI_IRQn EXTI15_10_IRQn
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define VCP_RX_Pin GPIO_PIN_15
#define VCP_RX_GPIO_Port GPIOA
#define LD_Mode_Pin GPIO_PIN_3
#define LD_Mode_GPIO_Port GPIOB
#define Button_Mode_Pin GPIO_PIN_7
#define Button_Mode_GPIO_Port GPIOB
#define Button_Mode_EXTI_IRQn EXTI9_5_IRQn
/* USER CODE BEGIN Private defines */
#define LCD_RS_GPIO_Port GPIOB
#define LCD_RS_Pin GPIO_PIN_5
#define LCD_EN_GPIO_Port GPIOA
#define LCD_EN_Pin GPIO_PIN_7
#define LCD_RW_GPIO_Port GPIOA
#define LCD_RW_Pin GPIO_PIN_8 
#define LCD_D4_GPIO_Port GPIOA
#define LCD_D4_Pin GPIO_PIN_6
#define LCD_D5_GPIO_Port GPIOA
#define LCD_D5_Pin GPIO_PIN_0
#define LCD_D6_GPIO_Port GPIOA
#define LCD_D6_Pin GPIO_PIN_4
#define LCD_D7_GPIO_Port GPIOA
#define LCD_D7_Pin GPIO_PIN_3

#define CONTINOUS_MODE 1
#define DISCONTINOUS_MODE 1

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
