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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
//����
/************************����ͷ�ļ�*********************
�ڹ���ͷ�ļ���ֻ��Ҫ������ͷ�ļ���main.h����.c�ļ���ֻ *
��дmain.h���У���.h�ļ���д��Ҫ��ͷ�ļ����ɡ��������� *
���ļ����������������ڸ����ļ��д�ܶ�#include         *
********************************************************/


//*******************ϵͳ�ļ�***************************
#include "gpio.h"
#include "tim.h"
#include "spi.h"
//********************�û��ļ�**************************
#include "sys.h"
#include "delay.h"
#include "lcd.h"
#include "GUI.h"
#include "test.h"
#include "touch.h"
//**********************c��****************************
#include "string.h"
#include "stdlib.h"
#include "math.h"
#include "stdio.h"     
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
extern const unsigned char asc2_1206[95][12];
extern const unsigned char asc2_1608[95][16];

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TDIN_Pin GPIO_PIN_1
#define TDIN_GPIO_Port GPIOA
#define TCLK_Pin GPIO_PIN_2
#define TCLK_GPIO_Port GPIOA
#define TCS_Pin GPIO_PIN_3
#define TCS_GPIO_Port GPIOA
#define PEN_Pin GPIO_PIN_4
#define PEN_GPIO_Port GPIOA
#define DOUT_Pin GPIO_PIN_5
#define DOUT_GPIO_Port GPIOA
#define BLK_Pin GPIO_PIN_1
#define BLK_GPIO_Port GPIOB
#define RS_Pin GPIO_PIN_10
#define RS_GPIO_Port GPIOB
#define RST_Pin GPIO_PIN_11
#define RST_GPIO_Port GPIOB
#define CS_Pin GPIO_PIN_12
#define CS_GPIO_Port GPIOB
#define SCK_Pin GPIO_PIN_13
#define SCK_GPIO_Port GPIOB
#define MISO_Pin GPIO_PIN_14
#define MISO_GPIO_Port GPIOB
#define MOSI_Pin GPIO_PIN_15
#define MOSI_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
