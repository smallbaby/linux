/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __clkgen_defs_asm_h
#define __clkgen_defs_asm_h

/*
 * This file is autogenerated from
 *   file:           clkgen.r
 *
 *   by ../../../tools/rdesc/bin/rdes2c -asm -outfile clkgen_defs_asm.h clkgen.r
 * Any changes here will be lost.
 *
 * -*- buffer-read-only: t -*-
 */

#ifndef REG_FIELD
#define REG_FIELD( scope, reg, field, value ) \
	REG_FIELD_X_( value, reg_##scope##_##reg##___##field##___lsb )
#define REG_FIELD_X_( value, shift ) ((value) << shift)
#endif

#ifndef REG_STATE
#define REG_STATE( scope, reg, field, symbolic_value ) \
	REG_STATE_X_( regk_##scope##_##symbolic_value, reg_##scope##_##reg##___##field##___lsb )
#define REG_STATE_X_( k, shift ) (k << shift)
#endif

#ifndef REG_MASK
#define REG_MASK( scope, reg, field ) \
	REG_MASK_X_( reg_##scope##_##reg##___##field##___width, reg_##scope##_##reg##___##field##___lsb )
#define REG_MASK_X_( width, lsb ) (((1 << width)-1) << lsb)
#endif

#ifndef REG_LSB
#define REG_LSB( scope, reg, field ) reg_##scope##_##reg##___##field##___lsb
#endif

#ifndef REG_BIT
#define REG_BIT( scope, reg, field ) reg_##scope##_##reg##___##field##___bit
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) REG_ADDR_X_(inst, reg_##scope##_##reg##_offset)
#define REG_ADDR_X_( inst, offs ) ((inst) + offs)
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
	REG_ADDR_VECT_X_(inst, reg_##scope##_##reg##_offset, index, \
			 STRIDE_##scope##_##reg )
#define REG_ADDR_VECT_X_( inst, offs, index, stride ) \
	((inst) + offs + (index) * stride)
#endif

/* Register r_bootsel, scope clkgen, type r */
#define reg_clkgen_r_bootsel___boot_mode___lsb 0
#define reg_clkgen_r_bootsel___boot_mode___width 5
#define reg_clkgen_r_bootsel___intern_main_clk___lsb 5
#define reg_clkgen_r_bootsel___intern_main_clk___width 1
#define reg_clkgen_r_bootsel___intern_main_clk___bit 5
#define reg_clkgen_r_bootsel___extern_usb2_clk___lsb 6
#define reg_clkgen_r_bootsel___extern_usb2_clk___width 1
#define reg_clkgen_r_bootsel___extern_usb2_clk___bit 6
#define reg_clkgen_r_bootsel_offset 0

/* Register rw_clk_ctrl, scope clkgen, type rw */
#define reg_clkgen_rw_clk_ctrl___pll___lsb 0
#define reg_clkgen_rw_clk_ctrl___pll___width 1
#define reg_clkgen_rw_clk_ctrl___pll___bit 0
#define reg_clkgen_rw_clk_ctrl___cpu___lsb 1
#define reg_clkgen_rw_clk_ctrl___cpu___width 1
#define reg_clkgen_rw_clk_ctrl___cpu___bit 1
#define reg_clkgen_rw_clk_ctrl___iop_usb___lsb 2
#define reg_clkgen_rw_clk_ctrl___iop_usb___width 1
#define reg_clkgen_rw_clk_ctrl___iop_usb___bit 2
#define reg_clkgen_rw_clk_ctrl___vin___lsb 3
#define reg_clkgen_rw_clk_ctrl___vin___width 1
#define reg_clkgen_rw_clk_ctrl___vin___bit 3
#define reg_clkgen_rw_clk_ctrl___sclr___lsb 4
#define reg_clkgen_rw_clk_ctrl___sclr___width 1
#define reg_clkgen_rw_clk_ctrl___sclr___bit 4
#define reg_clkgen_rw_clk_ctrl___h264___lsb 5
#define reg_clkgen_rw_clk_ctrl___h264___width 1
#define reg_clkgen_rw_clk_ctrl___h264___bit 5
#define reg_clkgen_rw_clk_ctrl___ddr2___lsb 6
#define reg_clkgen_rw_clk_ctrl___ddr2___width 1
#define reg_clkgen_rw_clk_ctrl___ddr2___bit 6
#define reg_clkgen_rw_clk_ctrl___vout_hist___lsb 7
#define reg_clkgen_rw_clk_ctrl___vout_hist___width 1
#define reg_clkgen_rw_clk_ctrl___vout_hist___bit 7
#define reg_clkgen_rw_clk_ctrl___eth___lsb 8
#define reg_clkgen_rw_clk_ctrl___eth___width 1
#define reg_clkgen_rw_clk_ctrl___eth___bit 8
#define reg_clkgen_rw_clk_ctrl___ccd_tg_200___lsb 9
#define reg_clkgen_rw_clk_ctrl___ccd_tg_200___width 1
#define reg_clkgen_rw_clk_ctrl___ccd_tg_200___bit 9
#define reg_clkgen_rw_clk_ctrl___dma0_1_eth___lsb 10
#define reg_clkgen_rw_clk_ctrl___dma0_1_eth___width 1
#define reg_clkgen_rw_clk_ctrl___dma0_1_eth___bit 10
#define reg_clkgen_rw_clk_ctrl___ccd_tg_100___lsb 11
#define reg_clkgen_rw_clk_ctrl___ccd_tg_100___width 1
#define reg_clkgen_rw_clk_ctrl___ccd_tg_100___bit 11
#define reg_clkgen_rw_clk_ctrl___jpeg___lsb 12
#define reg_clkgen_rw_clk_ctrl___jpeg___width 1
#define reg_clkgen_rw_clk_ctrl___jpeg___bit 12
#define reg_clkgen_rw_clk_ctrl___sser_ser_dma6_7___lsb 13
#define reg_clkgen_rw_clk_ctrl___sser_ser_dma6_7___width 1
#define reg_clkgen_rw_clk_ctrl___sser_ser_dma6_7___bit 13
#define reg_clkgen_rw_clk_ctrl___strdma0_2_video___lsb 14
#define reg_clkgen_rw_clk_ctrl___strdma0_2_video___width 1
#define reg_clkgen_rw_clk_ctrl___strdma0_2_video___bit 14
#define reg_clkgen_rw_clk_ctrl___dma2_3_strcop___lsb 15
#define reg_clkgen_rw_clk_ctrl___dma2_3_strcop___width 1
#define reg_clkgen_rw_clk_ctrl___dma2_3_strcop___bit 15
#define reg_clkgen_rw_clk_ctrl___dma4_5_iop___lsb 16
#define reg_clkgen_rw_clk_ctrl___dma4_5_iop___width 1
#define reg_clkgen_rw_clk_ctrl___dma4_5_iop___bit 16
#define reg_clkgen_rw_clk_ctrl___dma9_11___lsb 17
#define reg_clkgen_rw_clk_ctrl___dma9_11___width 1
#define reg_clkgen_rw_clk_ctrl___dma9_11___bit 17
#define reg_clkgen_rw_clk_ctrl___memarb_bar_ddr___lsb 18
#define reg_clkgen_rw_clk_ctrl___memarb_bar_ddr___width 1
#define reg_clkgen_rw_clk_ctrl___memarb_bar_ddr___bit 18
#define reg_clkgen_rw_clk_ctrl___sclr_h264___lsb 19
#define reg_clkgen_rw_clk_ctrl___sclr_h264___width 1
#define reg_clkgen_rw_clk_ctrl___sclr_h264___bit 19
#define reg_clkgen_rw_clk_ctrl_offset 4


/* Constants */
#define regk_clkgen_eth1000_rx                    0x0000000c
#define regk_clkgen_eth1000_tx                    0x0000000e
#define regk_clkgen_eth100_rx                     0x0000001d
#define regk_clkgen_eth100_rx_half                0x0000001c
#define regk_clkgen_eth100_tx                     0x0000001f
#define regk_clkgen_eth100_tx_half                0x0000001e
#define regk_clkgen_nand_3_2                      0x00000000
#define regk_clkgen_nand_3_2_0x30                 0x00000002
#define regk_clkgen_nand_3_2_0x30_pll             0x00000012
#define regk_clkgen_nand_3_2_pll                  0x00000010
#define regk_clkgen_nand_3_3                      0x00000001
#define regk_clkgen_nand_3_3_0x30                 0x00000003
#define regk_clkgen_nand_3_3_0x30_pll             0x00000013
#define regk_clkgen_nand_3_3_pll                  0x00000011
#define regk_clkgen_nand_4_2                      0x00000004
#define regk_clkgen_nand_4_2_0x30                 0x00000006
#define regk_clkgen_nand_4_2_0x30_pll             0x00000016
#define regk_clkgen_nand_4_2_pll                  0x00000014
#define regk_clkgen_nand_4_3                      0x00000005
#define regk_clkgen_nand_4_3_0x30                 0x00000007
#define regk_clkgen_nand_4_3_0x30_pll             0x00000017
#define regk_clkgen_nand_4_3_pll                  0x00000015
#define regk_clkgen_nand_5_2                      0x00000008
#define regk_clkgen_nand_5_2_0x30                 0x0000000a
#define regk_clkgen_nand_5_2_0x30_pll             0x0000001a
#define regk_clkgen_nand_5_2_pll                  0x00000018
#define regk_clkgen_nand_5_3                      0x00000009
#define regk_clkgen_nand_5_3_0x30                 0x0000000b
#define regk_clkgen_nand_5_3_0x30_pll             0x0000001b
#define regk_clkgen_nand_5_3_pll                  0x00000019
#define regk_clkgen_no                            0x00000000
#define regk_clkgen_rw_clk_ctrl_default           0x00000002
#define regk_clkgen_ser                           0x0000000d
#define regk_clkgen_ser_pll                       0x0000000f
#define regk_clkgen_yes                           0x00000001
#endif /* __clkgen_defs_asm_h */
