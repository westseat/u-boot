/*
 * Copyright (c) 2015 Actions Semi Co., Ltd.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __ASM_ARCH_CLK_H__
#define __ASM_ARCH_CLK_H__

#if defined(CONFIG_S900)
#include <asm/arch/clk_s900.h>
#else
#error Unknown SoC type
#endif

#ifndef __ASSEMBLY__

void owl_clk_enable(int clk_id);
void owl_clk_disable(int clk_id);
void owl_clk_enable_by_perip_id(int perip_id);
void owl_clk_disable_by_perip_id(int perip_id);

int owl_clk_init(void);

#endif	/* __ASSEMBLY__ */
#endif	/* __ASM_ARCH_CLK_H__ */