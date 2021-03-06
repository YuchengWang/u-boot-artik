/*
 * Copyright (C) 2013 Samsung Electronics
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <asm/arch/cpu.h>

#ifndef __ASM_ARM_ARCH_PMU_H_
#define __ASM_ARM_ARCH_PMU_H_

#define EXYNOS5430_POWER_WAKEUP_STAT			(EXYNOS5430_POWER_BASE + 0x0600)
#define EXYNOS5430_POWER_GSCL_CONFIGURATION		(EXYNOS5430_POWER_BASE + 0x4000)
#define EXYNOS5430_POWER_CAM0_CONFIGURATION		(EXYNOS5430_POWER_BASE + 0x4020)
#define EXYNOS5430_POWER_MSCL_CONFIGURATION		(EXYNOS5430_POWER_BASE + 0x4040)
#define EXYNOS5430_POWER_G3D_CONFIGURATION		(EXYNOS5430_POWER_BASE + 0x4060)
#define EXYNOS5430_POWER_DISP_CONFIGURATION		(EXYNOS5430_POWER_BASE + 0x4080)
#define EXYNOS5430_POWER_CAM1_CONFIGURATION		(EXYNOS5430_POWER_BASE + 0x40A0)
#define EXYNOS5430_POWER_AUD_CONFIGURATION		(EXYNOS5430_POWER_BASE + 0x40C0)
#define EXYNOS5430_POWER_FSYS_CONFIGURATION		(EXYNOS5430_POWER_BASE + 0x40E0)
#define EXYNOS5430_POWER_G2D_CONFIGURATION		(EXYNOS5430_POWER_BASE + 0x4120)
#define EXYNOS5430_POWER_ISP_CONFIGURATION		(EXYNOS5430_POWER_BASE + 0x4140)
#define EXYNOS5430_POWER_MFC0_CONFIGURATION		(EXYNOS5430_POWER_BASE + 0x4180)
#define EXYNOS5430_POWER_MFC1_CONFIGURATION		(EXYNOS5430_POWER_BASE + 0x41a0)
#define EXYNOS5430_POWER_HEVC_CONFIGURATION		(EXYNOS5430_POWER_BASE + 0x41c0)

#define WAKEUP_MASK					0x80000000

#endif
