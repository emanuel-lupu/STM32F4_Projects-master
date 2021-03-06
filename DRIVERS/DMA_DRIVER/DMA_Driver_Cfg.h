/*
 * DMA_Driver_Cfg.h
 *
 *  Created on: Aug 14, 2018
 *      Author: zsolt.balo
 */

#ifndef DRIVERS_DMA_DRIVER_DMA_DRIVER_CFG_H_
#define DRIVERS_DMA_DRIVER_DMA_DRIVER_CFG_H_

#include "DMA_Driver.h"

#define DMA_DRIVER_DMA1								NOK
#define DMA_DRIVER_DMA2								OK
#define DMA_DRIVER_REQ_CHANNEL						DMA_DRIVER_REQ_CHANNEL_0
#define DMA_DRIVER_RUNNING_MODE						DMA_DRIVER_NORMAL_MODE
#define DMA_DRIVER_DIRECT_MODE						NOK
#define DMA_DRIVER_FIFO_THRESHOLD					DMA_FIFO_THRESHOLD_FULL
#define DMA_DRIVER_CHANNEL_PRIORITY					DMA_DRIVER_CHANNEL_PRIORITY_MEDIUM
#define DMA_DRIVER_MEMMORY_SIZE						DMA_DRIVER_MEMMORY_SIZE_32_BITS
#define DMA_PERIPHERAL_SIZE							DMA_PERIPHERAL_SIZE_32_bits
#define DMA_DRIVER_MEMMORY_INCREMENT 				OK
#define DMA_DRIVER_PERIPHERAL_INCREMENT 			OK
#define DMA_DRIVER_DIRECTION						DMA_DRIVER_DIRECTION_MEMORY_TO_MEMORY
#define DMA_DRIVER_DUBLE_BUFFERING					NOK
#define DMA_DRIVER_BURST_TRANSFER					NOK
#define DMA_DRIVER_FIFO_ENABLE						OK
#define DMA_DRIVER_MEMORY_BURST						DMA_DRIVER_BURST_TRANSFER_SINGLE_TRANSFER
#define DMA_DRIVER_PERIPHERAL_BURST					DMA_DRIVER_BURST_TRANSFER_SINGLE_TRANSFER
#define DMA_DRIVER_TX_COUNT 						(uint16)(0x04)

#endif /* DRIVERS_DMA_DRIVER_DMA_DRIVER_CFG_H_ */
