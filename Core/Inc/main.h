/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32h5xx_hal.h"

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
#define SELECT_0_Pin GPIO_PIN_4
#define SELECT_0_GPIO_Port GPIOE
#define SELECT_1_Pin GPIO_PIN_5
#define SELECT_1_GPIO_Port GPIOE
#define SELECT_2_Pin GPIO_PIN_6
#define SELECT_2_GPIO_Port GPIOE
#define Shift_REG_CS_Pin GPIO_PIN_13
#define Shift_REG_CS_GPIO_Port GPIOC
#define V_Giris_Adc_Pin GPIO_PIN_0
#define V_Giris_Adc_GPIO_Port GPIOC
#define Vsensor1_Adc_Pin GPIO_PIN_1
#define Vsensor1_Adc_GPIO_Port GPIOC
#define Vsensor2_Adc_Pin GPIO_PIN_2
#define Vsensor2_Adc_GPIO_Port GPIOC
#define ADC_SPI_MOSI_Pin GPIO_PIN_3
#define ADC_SPI_MOSI_GPIO_Port GPIOC
#define STOP_BUTTON_Pin GPIO_PIN_0
#define STOP_BUTTON_GPIO_Port GPIOA
#define PTC100_Pin GPIO_PIN_1
#define PTC100_GPIO_Port GPIOA
#define ADC_SPI_CS_Pin GPIO_PIN_3
#define ADC_SPI_CS_GPIO_Port GPIOA
#define FRAM_CS_Pin GPIO_PIN_4
#define FRAM_CS_GPIO_Port GPIOA
#define FRAM_SCK_Pin GPIO_PIN_5
#define FRAM_SCK_GPIO_Port GPIOA
#define FRAM_MISO_Pin GPIO_PIN_6
#define FRAM_MISO_GPIO_Port GPIOA
#define FRAM_MOSI_Pin GPIO_PIN_7
#define FRAM_MOSI_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_4
#define LED1_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_5
#define LED2_GPIO_Port GPIOC
#define ENTER_BUTTON_Pin GPIO_PIN_0
#define ENTER_BUTTON_GPIO_Port GPIOB
#define DAC_SPI_MOSI_Pin GPIO_PIN_2
#define DAC_SPI_MOSI_GPIO_Port GPIOB
#define TFT_BL_PWM_Pin GPIO_PIN_10
#define TFT_BL_PWM_GPIO_Port GPIOB
#define DAC_SPI_CS_YEDEKKART_Pin GPIO_PIN_12
#define DAC_SPI_CS_YEDEKKART_GPIO_Port GPIOB
#define ADC_SPI_SCK_Pin GPIO_PIN_13
#define ADC_SPI_SCK_GPIO_Port GPIOB
#define ADC_SPI_MISO_Pin GPIO_PIN_14
#define ADC_SPI_MISO_GPIO_Port GPIOB
#define ALL_BUTTON_Pin GPIO_PIN_15
#define ALL_BUTTON_GPIO_Port GPIOB
#define LED3_Pin GPIO_PIN_6
#define LED3_GPIO_Port GPIOC
#define LED4_Pin GPIO_PIN_7
#define LED4_GPIO_Port GPIOC
#define LED5_Pin GPIO_PIN_8
#define LED5_GPIO_Port GPIOC
#define LED6_Pin GPIO_PIN_9
#define LED6_GPIO_Port GPIOC
#define PWM_INA_Pin GPIO_PIN_10
#define PWM_INA_GPIO_Port GPIOA
#define USB_N_Pin GPIO_PIN_11
#define USB_N_GPIO_Port GPIOA
#define USB_P_Pin GPIO_PIN_12
#define USB_P_GPIO_Port GPIOA
#define DAC_SPI_CS_ANAKART_Pin GPIO_PIN_15
#define DAC_SPI_CS_ANAKART_GPIO_Port GPIOA
#define DAC_SPI_SCK_Pin GPIO_PIN_10
#define DAC_SPI_SCK_GPIO_Port GPIOC
#define DAC_SPI_MISO_Pin GPIO_PIN_11
#define DAC_SPI_MISO_GPIO_Port GPIOC
#define Shift_REG_SCK_Pin GPIO_PIN_12
#define Shift_REG_SCK_GPIO_Port GPIOC
#define DI_2_Pin GPIO_PIN_2
#define DI_2_GPIO_Port GPIOD
#define DI_1_Pin GPIO_PIN_3
#define DI_1_GPIO_Port GPIOD
#define USART2_DIR_Pin GPIO_PIN_4
#define USART2_DIR_GPIO_Port GPIOD
#define FMC_RESET_Pin GPIO_PIN_4
#define FMC_RESET_GPIO_Port GPIOB
#define Shift_REG_MOSI_Pin GPIO_PIN_5
#define Shift_REG_MOSI_GPIO_Port GPIOB
#define START_BUTTON_Pin GPIO_PIN_6
#define START_BUTTON_GPIO_Port GPIOB
#define LED7_Pin GPIO_PIN_0
#define LED7_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
