/* drivers/sharp/shirda/shirda_kdrv_config_MSM8926_V2.h (sharp IrDA driver)
 *
 * Copyright (C) 2011 - 2015 SHARP CORPORATION All rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */


#define	SHIRDA_GPIO_TXD		(0)
#define	SHIRDA_GPIO_RXD		(1)
#define	SHIRDA_GPIO_SD		(80)
#define	SHIRDA_GPIO_TX_FUNC	(2)
#define	SHIRDA_GPIO_RX_FUNC	(2)
#define	SHIRDA_GPIO_SD_FUNC	(0)

#define	SHIRDA_TXD_PULL		GPIO_CFG_NO_PULL
#define	SHIRDA_TXD_STRENGTH	GPIO_CFG_2MA

#define	SHIRDA_RXD_PULL		GPIO_CFG_PULL_UP
#define	SHIRDA_RXD_STRENGTH	GPIO_CFG_2MA

#define	SHIRDA_SD_PULL		GPIO_CFG_PULL_UP
#define	SHIRDA_SD_STRENGTH	GPIO_CFG_2MA


#define	GSBIREG_BASE		(0xF991D000)
#define	UART_DM_REGISTER	(0x0)
#define	UART_DM_IRDA		(0x00B8)

#define	SHIRDA_BLSP_NODE	"f991d000.serial"

#define	SHIRDA_UART_CLK_NAME	"f991d000.serial"

