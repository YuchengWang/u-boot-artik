/**
 * linux-compat.h - DesignWare USB3 Linux Compatibiltiy Adapter  Header
 *
 * Copyright (C) 2015 Texas Instruments Incorporated - http://www.ti.com
 *
 * Authors: Kishon Vijay Abraham I <kishon@ti.com>
 *
 * Taken from Linux Kernel v3.16 (drivers/usb/dwc3/core.c) and ported
 * to uboot.
 *
 * SPDX-License-Identifier:	GPL-2.0
 *
 */

#ifndef __DWC3_LINUX_COMPAT__
#define __DWC3_LINUX_COMPAT__

#define pr_debug(format)                debug(format)
#define WARN(val, format, arg...)	debug(format, ##arg)
#define WARN_ON_ONCE(val)		debug("Error %d\n", val)

#define BUILD_BUG_ON_NOT_POWER_OF_2(n)

static inline size_t strlcat(char *dest, const char *src, size_t n)
{
	strcat(dest, src);
	return strlen(dest) + strlen(src);
}

#endif