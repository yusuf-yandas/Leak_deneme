/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpdma.c
  * @brief   This file provides code for the configuration
  *          of the GPDMA instances.
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
/* Includes ------------------------------------------------------------------*/
#include "gpdma.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

DMA_HandleTypeDef handle_GPDMA1_Channel5;
DMA_HandleTypeDef handle_GPDMA1_Channel1;
DMA_HandleTypeDef handle_GPDMA2_Channel6;

/* GPDMA1 init function */
void MX_GPDMA1_Init(void)
{

  /* USER CODE BEGIN GPDMA1_Init 0 */

  /* USER CODE END GPDMA1_Init 0 */

  /* Peripheral clock enable */
  __HAL_RCC_GPDMA1_CLK_ENABLE();

  /* GPDMA1 interrupt Init */
    HAL_NVIC_SetPriority(GPDMA1_Channel0_IRQn, 1, 0);
    HAL_NVIC_EnableIRQ(GPDMA1_Channel0_IRQn);
    HAL_NVIC_SetPriority(GPDMA1_Channel3_IRQn, 1, 0);
    HAL_NVIC_EnableIRQ(GPDMA1_Channel3_IRQn);
    HAL_NVIC_SetPriority(GPDMA1_Channel4_IRQn, 1, 0);
    HAL_NVIC_EnableIRQ(GPDMA1_Channel4_IRQn);
    HAL_NVIC_SetPriority(GPDMA1_Channel5_IRQn, 1, 0);
    HAL_NVIC_EnableIRQ(GPDMA1_Channel5_IRQn);

  /* USER CODE BEGIN GPDMA1_Init 1 */

  /* USER CODE END GPDMA1_Init 1 */
  handle_GPDMA1_Channel5.Instance = GPDMA1_Channel5;
  handle_GPDMA1_Channel5.Init.Request = DMA_REQUEST_SW;
  handle_GPDMA1_Channel5.Init.BlkHWRequest = DMA_BREQ_SINGLE_BURST;
  handle_GPDMA1_Channel5.Init.Direction = DMA_MEMORY_TO_MEMORY;
  handle_GPDMA1_Channel5.Init.SrcInc = DMA_SINC_INCREMENTED;
  handle_GPDMA1_Channel5.Init.DestInc = DMA_DINC_INCREMENTED;
  handle_GPDMA1_Channel5.Init.SrcDataWidth = DMA_SRC_DATAWIDTH_HALFWORD;
  handle_GPDMA1_Channel5.Init.DestDataWidth = DMA_DEST_DATAWIDTH_HALFWORD;
  handle_GPDMA1_Channel5.Init.Priority = DMA_LOW_PRIORITY_LOW_WEIGHT;
  handle_GPDMA1_Channel5.Init.SrcBurstLength = 1;
  handle_GPDMA1_Channel5.Init.DestBurstLength = 1;
  handle_GPDMA1_Channel5.Init.TransferAllocatedPort = DMA_SRC_ALLOCATED_PORT0|DMA_DEST_ALLOCATED_PORT0;
  handle_GPDMA1_Channel5.Init.TransferEventMode = DMA_TCEM_BLOCK_TRANSFER;
  handle_GPDMA1_Channel5.Init.Mode = DMA_NORMAL;
  if (HAL_DMA_Init(&handle_GPDMA1_Channel5) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_DMA_ConfigChannelAttributes(&handle_GPDMA1_Channel5, DMA_CHANNEL_NPRIV) != HAL_OK)
  {
    Error_Handler();
  }
  handle_GPDMA1_Channel1.Instance = GPDMA1_Channel1;
  handle_GPDMA1_Channel1.Init.Request = DMA_REQUEST_SW;
  handle_GPDMA1_Channel1.Init.BlkHWRequest = DMA_BREQ_SINGLE_BURST;
  handle_GPDMA1_Channel1.Init.Direction = DMA_MEMORY_TO_MEMORY;
  handle_GPDMA1_Channel1.Init.SrcInc = DMA_SINC_FIXED;
  handle_GPDMA1_Channel1.Init.DestInc = DMA_DINC_FIXED;
  handle_GPDMA1_Channel1.Init.SrcDataWidth = DMA_SRC_DATAWIDTH_BYTE;
  handle_GPDMA1_Channel1.Init.DestDataWidth = DMA_DEST_DATAWIDTH_BYTE;
  handle_GPDMA1_Channel1.Init.Priority = DMA_LOW_PRIORITY_LOW_WEIGHT;
  handle_GPDMA1_Channel1.Init.SrcBurstLength = 1;
  handle_GPDMA1_Channel1.Init.DestBurstLength = 1;
  handle_GPDMA1_Channel1.Init.TransferAllocatedPort = DMA_SRC_ALLOCATED_PORT0|DMA_DEST_ALLOCATED_PORT0;
  handle_GPDMA1_Channel1.Init.TransferEventMode = DMA_TCEM_BLOCK_TRANSFER;
  handle_GPDMA1_Channel1.Init.Mode = DMA_NORMAL;
  if (HAL_DMA_Init(&handle_GPDMA1_Channel1) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_DMA_ConfigChannelAttributes(&handle_GPDMA1_Channel1, DMA_CHANNEL_NPRIV) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN GPDMA1_Init 2 */

  /* USER CODE END GPDMA1_Init 2 */

}
/* GPDMA2 init function */
void MX_GPDMA2_Init(void)
{

  /* USER CODE BEGIN GPDMA2_Init 0 */

  /* USER CODE END GPDMA2_Init 0 */

  /* Peripheral clock enable */
  __HAL_RCC_GPDMA2_CLK_ENABLE();

  /* GPDMA2 interrupt Init */
    HAL_NVIC_SetPriority(GPDMA2_Channel6_IRQn, 5, 0);
    HAL_NVIC_EnableIRQ(GPDMA2_Channel6_IRQn);

  /* USER CODE BEGIN GPDMA2_Init 1 */

  /* USER CODE END GPDMA2_Init 1 */
  handle_GPDMA2_Channel6.Instance = GPDMA2_Channel6;
  handle_GPDMA2_Channel6.InitLinkedList.Priority = DMA_LOW_PRIORITY_LOW_WEIGHT;
  handle_GPDMA2_Channel6.InitLinkedList.LinkStepMode = DMA_LSM_FULL_EXECUTION;
  handle_GPDMA2_Channel6.InitLinkedList.LinkAllocatedPort = DMA_LINK_ALLOCATED_PORT0;
  handle_GPDMA2_Channel6.InitLinkedList.TransferEventMode = DMA_TCEM_LAST_LL_ITEM_TRANSFER;
  handle_GPDMA2_Channel6.InitLinkedList.LinkedListMode = DMA_LINKEDLIST_NORMAL;
  if (HAL_DMAEx_List_Init(&handle_GPDMA2_Channel6) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_DMA_ConfigChannelAttributes(&handle_GPDMA2_Channel6, DMA_CHANNEL_NPRIV) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN GPDMA2_Init 2 */

  /* USER CODE END GPDMA2_Init 2 */

}

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
