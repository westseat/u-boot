/*
 * Copyright (C) 2015 Actions Semi Inc.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_S900_EVB_H__
#define __CONFIG_S900_EVB_H__
#include "s900_common.h"

#define CONFIG_IDENT_STRING	 "S900 VR"

#define CONFIG_EXTRA_ENV_SETTINGS	CONFIG_EXTRA_ENV_SETTINGS_COMMON \
					"devif=mmc\0"			 \
					"bootdisk=1\0"

#define CONFIG_BOOTCOMMAND		"run emmcboot;"
#define CONFIG_BOOTDELAY		1	/* autoboot after 1 seconds */

#define CONFIG_PWM_OWL

#ifdef CONFIG_NR_DRAM_BANKS
#undef CONFIG_NR_DRAM_BANKS
#endif

#define CONFIG_NR_DRAM_BANKS		2

/* video support */
#define CONFIG_VIDEO
#define CONFIG_VIDEO_OWL
#define CONFIG_CFB_CONSOLE
#define CONFIG_VGA_AS_SINGLE_DEVICE
#define CONFIG_VIDEO_LOGO

/* splash image */
#define CONFIG_SPLASH_SCREEN
#define CONFIG_SPLASH_SCREEN_ALIGN
#define CONFIG_VIDEO_BMP_LOGO
#define CONFIG_VIDEO_BMP_GZIP
#define CONFIG_SYS_VIDEO_LOGO_MAX_SIZE		(10 * 1024 * 1024)
#define CONFIG_SYS_VIDEO_LOGO_NAME              "boot_logo.bmp.gz"
#define CONFIG_SYS_BATTERY_LOW_NAME             "battery_low.bmp.gz"
#define CONFIG_SYS_CHARGER_LOGO_NAME            "charger_logo.bmp.gz"
#define CONFIG_SYS_RECOVERY_LOGO_NAME           "recovery_logo.bmp.gz"
#define CONFIG_SYS_CHARGER_FRAME_NAME           "charger_frame.bmp.gz"

/* MMC */
#define CONFIG_CMD_MMC
#define CONFIG_MMC
#define CONFIG_GENERIC_MMC
#define CONFIG_OWL_MMC
#define SLOT0                                          0
#define SLOT2                                          2
#define SLOT3                                          3

#define CONFIG_OWL_EMMC_RAID0

/*CHARGER*/
#define CONFIG_ATC260X_CHARGER
#define CONFIG_ATC2609A_CHARGER
/*BATTERY*/
#define CONFIG_POWER_BATTERY
#define CONFIG_POWER_BATTERY_BQ27441


/* check low power */
#define CONFIG_CHECK_POWER

/* check key & power in board later init stage */
#define CONFIG_BOARD_LATE_INIT

/* DWC3 */
#define CONFIG_USB_DWC3_PHY_OWL
#define CONFIG_USB_DWC3_OWL
#define CONFIG_USB_DWC3
#define CONFIG_USB_DWC3_GADGET

/* USB gadget */
#define CONFIG_USB_GADGET
#define CONFIG_USB_GADGET_DUALSPEED
#define CONFIG_USB_GADGET_VBUS_DRAW	2

/* Downloader */
#define CONFIG_USBDOWNLOAD_GADGET
#define CONFIG_G_DNL_VENDOR_NUM		0x18d1
#define CONFIG_G_DNL_PRODUCT_NUM	0x0c02
#define CONFIG_G_DNL_MANUFACTURER	"Actions-Semi"

/* Fastboot */ 
#define CONFIG_FASTBOOT_FLASH
#define CONFIG_FASTBOOT_FLASH_MMC_DEV 1
#define CONFIG_CMD_FASTBOOT
#define CONFIG_USB_FASTBOOT_BUF_ADDR    0x20000000
#define CONFIG_USB_FASTBOOT_BUF_SIZE    0x40000000

/* UMS */
#define CONFIG_USB_GADGET_MASS_STORAGE
#define CONFIG_CMD_USB_MASS_STORAGE
#define CONFIG_G_DNL_UMS_VENDOR_NUM	0x10D6
#define CONFIG_G_DNL_UMS_PRODUCT_NUM	0x0C02

/* USB_ETHER */
#define CONFIG_USB_ETHER
#define CONFIG_USB_ETH_RNDIS
#define CONFIG_USBNET_DEV_ADDR		"de:ad:be:ef:00:01"
#define CONFIG_USBNET_HOST_ADDR	"de:ad:be:ef:00:02"
#define CONFIG_LIB_RAND
#define CONFIG_NET_RANDOM_ETHADDR

#define CONFIG_CMD_LINK_LOCAL
#define CONFIG_CMD_PING

/*  XHCI */
#define CONFIG_USB_XHCI
#define CONFIG_SYS_USB_XHCI_MAX_ROOT_PORTS 2
#define CONFIG_USB_XHCI_OWL

/* USB Configs */
#define CONFIG_CMD_USB
#define CONFIG_USB_STORAGE

/* check key & power in board later init stage */
#define CONFIG_BOARD_LATE_INIT

/* support enter android recovery */
#define CONFIG_ANDROID_RECOVERY
#define ANDROID_RECOVERY_PART                "2"
#define ANDROID_CACHE_PART                   "6"
#define ANDROID_DATA_PART                    "5"

/* support adckey */
#define CONFIG_ATC260X_ADCKEY
#define CONFIG_CHECK_KEY

#endif /* __CONFIG_ATM9009_EVB_H */