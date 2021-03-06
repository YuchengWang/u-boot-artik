/*
 * Header file for UBI support for U-Boot
 *
 * Adaptation from kernel to U-Boot
 *
 *  Copyright (C) 2005-2007 Samsung Electronics
 *  Kyungmin Park <kyungmin.park@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __UBOOT_UBI_H
#define __UBOOT_UBI_H

#include <common.h>
#include <compiler.h>
#include <linux/compat.h>
#include <malloc.h>
#include <div64.h>
#include <linux/math64.h>
#include <linux/crc32.h>
#include <linux/types.h>
#include <linux/list.h>
#include <linux/rbtree.h>
#include <linux/string.h>
#include <linux/mtd/mtd.h>
#include <linux/mtd/ubi.h>

#ifdef CONFIG_CMD_ONENAND
#include <onenand_uboot.h>
#endif

#include <asm/errno.h>

/* configurable */
#if !defined(CONFIG_MTD_UBI_WL_THRESHOLD)
#define CONFIG_MTD_UBI_WL_THRESHOLD	4096
#endif
#define CONFIG_MTD_UBI_BEB_RESERVE	1

/* debug options (Linux: drivers/mtd/ubi/Kconfig.debug) */
#undef CONFIG_MTD_UBI_DEBUG
#undef CONFIG_MTD_UBI_DEBUG_PARANOID
#undef CONFIG_MTD_UBI_DEBUG_MSG
#undef CONFIG_MTD_UBI_DEBUG_MSG_EBA
#undef CONFIG_MTD_UBI_DEBUG_MSG_WL
#undef CONFIG_MTD_UBI_DEBUG_MSG_IO
#undef CONFIG_MTD_UBI_DEBUG_MSG_BLD

#undef CONFIG_MTD_UBI_BLOCK

#if !defined(CONFIG_MTD_UBI_BEB_LIMIT)
#define CONFIG_MTD_UBI_BEB_LIMIT	20
#endif

/* build.c */
#define get_device(...)
#define put_device(...)
#define ubi_sysfs_init(...)		0
#define ubi_sysfs_close(...)		do { } while (0)

#ifndef __UBIFS_H__
#include "../drivers/mtd/ubi/ubi.h"
#endif

/* functions */
extern int ubi_mtd_param_parse(const char *val, struct kernel_param *kp);
extern int ubi_init(void);
extern void ubi_exit(void);

extern struct ubi_device *ubi_devices[];

#endif
