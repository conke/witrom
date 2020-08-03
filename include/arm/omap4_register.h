#pragma once

// PRCM
#define CM_SYS_CLKSEL               0x4a306110
#define CM_ABE_PLL_REF_CLKSEL		0x4a30610c

#define CM_WKUP_CLKSTCTRL		    0x4a307800
#define CM_WKUP_L4WKUP_CLKCTRL		0x4a307820
#define CM_WKUP_WDT1_CLKCTRL		0x4a307828
#define CM_WKUP_WDT2_CLKCTRL		0x4a307830
#define CM_WKUP_GPIO1_CLKCTRL		0x4a307838
#define CM_WKUP_TIMER1_CLKCTRL		0x4a307840
#define CM_WKUP_TIMER12_CLKCTRL		0x4a307848
#define CM_WKUP_SYNCTIMER_CLKCTRL	0x4a307850
#define CM_WKUP_USIM_CLKCTRL		0x4a307858
#define CM_WKUP_SARRAM_CLKCTRL		0x4a307860
#define CM_WKUP_KEYBOARD_CLKCTRL	0x4a307878
#define CM_WKUP_RTC_CLKCTRL		0x4a307880
#define CM_WKUP_BANDGAP_CLKCTRL		0x4a307888

#define PRM_VC_VAL_BYPASS               0x4a307ba0
#define PRM_VC_CFG_CHANNEL              0x4a307ba4
#define PRM_VC_CFG_I2C_MODE             0x4a307ba8
#define PRM_VC_CFG_I2C_CLK              0x4a307bac
#define PRM_IRQSTATUS_MPU		0x4a306010

// CM1 CKGEN
#define CM_CLKSEL_CORE				0x4a004100
#define CM_CLKSEL_ABE				0x4a004108
#define CM_DLL_CTRL				0x4a004110
#define CM_CLKMODE_DPLL_CORE			0x4a004120
#define CM_IDLEST_DPLL_CORE			0x4a004124
#define CM_AUTOIDLE_DPLL_CORE			0x4a004128
#define CM_CLKSEL_DPLL_CORE			0x4a00412c
#define CM_DIV_M2_DPLL_CORE			0x4a004130
#define CM_DIV_M3_DPLL_CORE			0x4a004134
#define CM_DIV_M4_DPLL_CORE			0x4a004138
#define CM_DIV_M5_DPLL_CORE			0x4a00413c
#define CM_DIV_M6_DPLL_CORE			0x4a004140
#define CM_DIV_M7_DPLL_CORE			0x4a004144
#define CM_SSC_DELTAMSTEP_DPLL_CORE		0x4a004148
#define CM_SSC_MODFREQDIV_DPLL_CORE		0x4a00414c
#define CM_EMU_OVERRIDE_DPLL_CORE		0x4a004150
#define CM_CLKMODE_DPLL_MPU			0x4a004160
#define CM_IDLEST_DPLL_MPU			0x4a004164
#define CM_AUTOIDLE_DPLL_MPU			0x4a004168
#define CM_CLKSEL_DPLL_MPU			0x4a00416c
#define CM_DIV_M2_DPLL_MPU			0x4a004170
#define CM_SSC_DELTAMSTEP_DPLL_MPU		0x4a004188
#define CM_SSC_MODFREQDIV_DPLL_MPU		0x4a00418c
#define CM_BYPCLK_DPLL_MPU			0x4a00419c
#define CM_CLKMODE_DPLL_IVA			0x4a0041a0
#define CM_IDLEST_DPLL_IVA			0x4a0041a4
#define CM_AUTOIDLE_DPLL_IVA			0x4a0041a8
#define CM_CLKSEL_DPLL_IVA			0x4a0041ac
#define CM_DIV_M4_DPLL_IVA			0x4a0041b8
#define CM_DIV_M5_DPLL_IVA			0x4a0041bc
#define CM_SSC_DELTAMSTEP_DPLL_IVA		0x4a0041c8
#define CM_SSC_MODFREQDIV_DPLL_IVA		0x4a0041cc
#define CM_BYPCLK_DPLL_IVA			0x4a0041dc
#define CM_CLKMODE_DPLL_ABE			0x4a0041e0
#define CM_IDLEST_DPLL_ABE			0x4a0041e4
#define CM_AUTOIDLE_DPLL_ABE			0x4a0041e8
#define CM_CLKSEL_DPLL_ABE			0x4a0041ec
#define CM_DIV_M2_DPLL_ABE			0x4a0041f0
#define CM_DIV_M3_DPLL_ABE			0x4a0041f4
#define CM_SSC_DELTAMSTEP_DPLL_ABE		0x4a004208
#define CM_SSC_MODFREQDIV_DPLL_ABE		0x4a00420c
#define CM_CLKMODE_DPLL_DDRPHY			0x4a004220
#define CM_IDLEST_DPLL_DDRPHY			0x4a004224
#define CM_AUTOIDLE_DPLL_DDRPHY			0x4a004228
#define CM_CLKSEL_DPLL_DDRPHY			0x4a00422c
#define CM_DIV_M2_DPLL_DDRPHY			0x4a004230
#define CM_DIV_M4_DPLL_DDRPHY			0x4a004238
#define CM_DIV_M5_DPLL_DDRPHY			0x4a00423c
#define CM_DIV_M6_DPLL_DDRPHY			0x4a004240
#define CM_SSC_DELTAMSTEP_DPLL_DDRPHY		0x4a004248
#define CM_MPU_MPU_CLKCTRL			0x4a004320

// CM2 CKGEN
#define CM_CLKSEL_DUCATI_ISS_ROOT		0x4a008100
#define CM_CLKSEL_USB_60MHz			0x4a008104
#define CM_SCALE_FCLK				0x4a008108
#define CM_CORE_DVFS_PERF1			0x4a008110
#define CM_CORE_DVFS_PERF2			0x4a008114
#define CM_CORE_DVFS_PERF3			0x4a008118
#define CM_CORE_DVFS_PERF4			0x4a00811c
#define CM_CORE_DVFS_CURRENT			0x4a008124
#define CM_IVA_DVFS_PERF_TESLA			0x4a008128
#define CM_IVA_DVFS_PERF_IVAHD			0x4a00812c
#define CM_IVA_DVFS_PERF_ABE			0x4a008130
#define CM_IVA_DVFS_CURRENT			0x4a008138
#define CM_CLKMODE_DPLL_PER			0x4a008140
#define CM_IDLEST_DPLL_PER			0x4a008144
#define CM_AUTOIDLE_DPLL_PER			0x4a008148
#define CM_CLKSEL_DPLL_PER			0x4a00814c
#define CM_DIV_M2_DPLL_PER			0x4a008150
#define CM_DIV_M3_DPLL_PER			0x4a008154
#define CM_DIV_M4_DPLL_PER			0x4a008158
#define CM_DIV_M5_DPLL_PER			0x4a00815c
#define CM_DIV_M6_DPLL_PER			0x4a008160
#define CM_DIV_M7_DPLL_PER			0x4a008164
#define CM_SSC_DELTAMSTEP_DPLL_PER		0x4a008168
#define CM_SSC_MODFREQDIV_DPLL_PER		0x4a00816c
#define CM_EMU_OVERRIDE_DPLL_PER		0x4a008170
#define CM_CLKMODE_DPLL_USB			0x4a008180
#define CM_IDLEST_DPLL_USB			0x4a008184
#define CM_AUTOIDLE_DPLL_USB			0x4a008188
#define CM_CLKSEL_DPLL_USB			0x4a00818c
#define CM_DIV_M2_DPLL_USB			0x4a008190
#define CM_SSC_DELTAMSTEP_DPLL_USB		0x4a0081a8
#define CM_SSC_MODFREQDIV_DPLL_USB		0x4a0081ac
#define CM_CLKDCOLDO_DPLL_USB			0x4a0081b4
#define CM_CLKMODE_DPLL_UNIPRO			0x4a0081c0
#define CM_IDLEST_DPLL_UNIPRO			0x4a0081c4
#define CM_AUTOIDLE_DPLL_UNIPRO			0x4a0081c8
#define CM_CLKSEL_DPLL_UNIPRO			0x4a0081cc
#define CM_DIV_M2_DPLL_UNIPRO			0x4a0081d0
#define CM_SSC_DELTAMSTEP_DPLL_UNIPRO		0x4a0081e8
#define CM_SSC_MODFREQDIV_DPLL_UNIPRO		0x4a0081ec

// CM2 CORE
#define CM_L3_1_CLKSTCTRL		0x4a008700
#define CM_L3_1_DYNAMICDEP		0x4a008708
#define CM_L3_1_L3_1_CLKCTRL		0x4a008720
#define CM_L3_2_CLKSTCTRL		0x4a008800
#define CM_L3_2_DYNAMICDEP		0x4a008808
#define CM_L3_2_L3_2_CLKCTRL		0x4a008820
#define CM_L3_2_GPMC_CLKCTRL		0x4a008828
#define CM_L3_2_OCMC_RAM_CLKCTRL	0x4a008830
#define CM_DUCATI_CLKSTCTRL		0x4a008900
#define CM_DUCATI_STATICDEP		0x4a008904
#define CM_DUCATI_DYNAMICDEP		0x4a008908
#define CM_DUCATI_DUCATI_CLKCTRL	0x4a008920
#define CM_SDMA_CLKSTCTRL		0x4a008a00
#define CM_SDMA_STATICDEP		0x4a008a04
#define CM_SDMA_DYNAMICDEP		0x4a008a08
#define CM_SDMA_SDMA_CLKCTRL		0x4a008a20
#define CM_MEMIF_CLKSTCTRL		0x4a008b00
#define CM_MEMIF_DMM_CLKCTRL		0x4a008b20
#define CM_MEMIF_EMIF_FW_CLKCTRL	0x4a008b28
#define CM_MEMIF_EMIF_1_CLKCTRL		0x4a008b30
#define CM_MEMIF_EMIF_2_CLKCTRL		0x4a008b38
#define CM_MEMIF_DLL_CLKCTRL		0x4a008b40
#define CM_MEMIF_EMIF_H1_CLKCTRL	0x4a008b50
#define CM_MEMIF_EMIF_H2_CLKCTRL	0x4a008b58
#define CM_MEMIF_DLL_H_CLKCTRL		0x4a008b60
#define CM_D2D_CLKSTCTRL		0x4a008c00
#define CM_D2D_STATICDEP		0x4a008c04
#define CM_D2D_DYNAMICDEP		0x4a008c08
#define CM_D2D_SAD2D_CLKCTRL		0x4a008c20
#define CM_D2D_MODEM_ICR_CLKCTRL	0x4a008c28
#define CM_D2D_SAD2D_FW_CLKCTRL		0x4a008c30
#define CM_L4CFG_CLKSTCTRL		0x4a008d00
#define CM_L4CFG_DYNAMICDEP		0x4a008d08
#define CM_L4CFG_L4_CFG_CLKCTRL		0x4a008d20
#define CM_L4CFG_HW_SEM_CLKCTRL		0x4a008d28
#define CM_L4CFG_MAILBOX_CLKCTRL	0x4a008d30
#define CM_L4CFG_SAR_ROM_CLKCTRL	0x4a008d38
#define CM_L3INSTR_CLKSTCTRL		0x4a008e00
#define CM_L3INSTR_L3_3_CLKCTRL		0x4a008e20
#define CM_L3INSTR_L3_INSTR_CLKCTRL	0x4a008e28
#define CM_L3INSTR_OCP_WP1_CLKCTRL	0x4a008e40

// CM2 L4PER
#define CM_L4PER_CLKSTCTRL		0x4a009400
#define CM_L4PER_DYNAMICDEP		0x4a009408
#define CM_L4PER_ADC_CLKCTRL		0x4a009420
#define CM_L4PER_DMTIMER10_CLKCTRL	0x4a009428
#define CM_L4PER_DMTIMER11_CLKCTRL	0x4a009430
#define CM_L4PER_DMTIMER2_CLKCTRL	0x4a009438
#define CM_L4PER_DMTIMER3_CLKCTRL	0x4a009440
#define CM_L4PER_DMTIMER4_CLKCTRL	0x4a009448
#define CM_L4PER_DMTIMER9_CLKCTRL	0x4a009450
#define CM_L4PER_ELM_CLKCTRL		0x4a009458
#define CM_L4PER_GPIO2_CLKCTRL		0x4a009460
#define CM_L4PER_GPIO3_CLKCTRL		0x4a009468
#define CM_L4PER_GPIO4_CLKCTRL		0x4a009470
#define CM_L4PER_GPIO5_CLKCTRL		0x4a009478
#define CM_L4PER_GPIO6_CLKCTRL		0x4a009480
#define CM_L4PER_HDQ1W_CLKCTRL		0x4a009488
#define CM_L4PER_HECC1_CLKCTRL		0x4a009490
#define CM_L4PER_HECC2_CLKCTRL		0x4a009498
#define CM_L4PER_I2C1_CLKCTRL		0x4a0094a0
#define CM_L4PER_I2C2_CLKCTRL		0x4a0094a8
#define CM_L4PER_I2C3_CLKCTRL		0x4a0094b0
#define CM_L4PER_I2C4_CLKCTRL		0x4a0094b8
#define CM_L4PER_L4PER_CLKCTRL		0x4a0094c0
#define CM_L4PER_MCASP2_CLKCTRL		0x4a0094d0
#define CM_L4PER_MCASP3_CLKCTRL		0x4a0094d8
#define CM_L4PER_MCBSP4_CLKCTRL		0x4a0094e0
#define CM_L4PER_MGATE_CLKCTRL		0x4a0094e8
#define CM_L4PER_MCSPI1_CLKCTRL		0x4a0094f0
#define CM_L4PER_MCSPI2_CLKCTRL		0x4a0094f8
#define CM_L4PER_MCSPI3_CLKCTRL		0x4a009500
#define CM_L4PER_MCSPI4_CLKCTRL		0x4a009508
#define CM_L4PER_MMCSD3_CLKCTRL		0x4a009520
#define CM_L4PER_MMCSD4_CLKCTRL		0x4a009528
#define CM_L4PER_MSPROHG_CLKCTRL	0x4a009530
#define CM_L4PER_SLIMBUS2_CLKCTRL	0x4a009538
#define CM_L4PER_UART1_CLKCTRL		0x4a009540
#define CM_L4PER_UART2_CLKCTRL		0x4a009548
#define CM_L4PER_UART3_CLKCTRL		0x4a009550
#define CM_L4PER_UART4_CLKCTRL		0x4a009558
#define CM_L4PER_MMCSD5_CLKCTRL		0x4a009560
#define CM_L4PER_I2C5_CLKCTRL		0x4a009568
#define CM_L4SEC_CLKSTCTRL		0x4a009580
#define CM_L4SEC_STATICDEP		0x4a009584
#define CM_L4SEC_DYNAMICDEP		0x4a009588
#define CM_L4SEC_AES1_CLKCTRL		0x4a0095a0
#define CM_L4SEC_AES2_CLKCTRL		0x4a0095a8
#define CM_L4SEC_DES3DES_CLKCTRL	0x4a0095b0
#define CM_L4SEC_PKAEIP29_CLKCTRL	0x4a0095b8
#define CM_L4SEC_RNG_CLKCTRL		0x4a0095c0
#define CM_L4SEC_SHA2MD51_CLKCTRL	0x4a0095c8
#define CM_L4SEC_CRYPTODMA_CLKCTRL	0x4a0095d8

// CM2 L3INIT
#define CM_L3INIT_HSMMC1_CLKCTRL	0x4a009328
#define CM_L3INIT_HSMMC2_CLKCTRL	0x4a009330
#define CM_L3INIT_HSI_CLKCTRL           0x4a009338
#define CM_L3INIT_UNIPRO1_CLKCTRL       0x4a009340
#define CM_L3INIT_HSUSBHOST_CLKCTRL     0x4a009358
#define CM_L3INIT_HSUSBOTG_CLKCTRL      0x4a009360
#define CM_L3INIT_HSUSBTLL_CLKCTRL      0x4a009368
#define CM_L3INIT_P1500_CLKCTRL         0x4a009378
#define CM_L3INIT_FSUSB_CLKCTRL         0x4a0093d0
#define CM_L3INIT_USBPHY_CLKCTRL        0x4a0093e0

#define PLL_STOP       1
#define PLL_MP_BYPASS  4
#define PLL_LP_BYPASS  5
#define PLL_FR_BYPASS  6
#define PLL_LOCK       7

#define OMAP44XX_CTRL_PADCONF_CORE_BASE	0x4a100000

// FIXME!
#define PADCONF_UART1_TX   0x4800217C
#define PADCONF_UART1_CTS  0x48002180

#define PADCONF_UART3_RT    0x4800219E
#define PADCONF_UART3_TX    0x480021A0

#define PADCONF_GPMC_NBE1   0x480020C8
#define PADCONF_GPMC_NWE    0x480020C4
#define PADCONF_GPMC_NOE    0x480020C2
#define PADCONF_GPMC_NADV_ALE 0X480020C0

// PAD
#define PADCONF_UART3_CTS_RCTX		0x0140
#define PADCONF_UART3_RTS_SD		0x0142
#define PADCONF_UART3_RX_IRRX		0x0144
#define PADCONF_UART3_TX_IRTX		0x0146

#define IEN             (1 << 8)
#define IDIS            (0 << 8)
#define PTU             (3 << 3)
#define PTD             (1 << 3)
#define EN              (1 << 3)
#define DIS             (0 << 3)

#define PAD_WRITEW(reg, val) \
	writew(VA(OMAP44XX_CTRL_PADCONF_CORE_BASE + (reg)), (val))

// UART
#define OMAP4_UART1_BASE      0x4806a000
#define OMAP4_UART2_BASE      0x4806c000
#define OMAP4_UART3_BASE      0x48020000
#define OMAP4_UART4_BASE      0x4806E000

#if (CONFIG_UART_INDEX == 0)
#define UART_BASE  OMAP4_UART1_BASE
#elif (CONFIG_UART_INDEX == 1)
#define UART_BASE  OMAP4_UART2_BASE
#elif (CONFIG_UART_INDEX == 2)
#define UART_BASE  OMAP4_UART3_BASE
#else
#define UART_BASE  OMAP4_UART4_BASE
#endif

#define DLL_REG  0x000
#define RHR_REG  0x000
#define THR_REG  0x000
#define IER_REG  0x004
#define DLH_REG  0x004
#define FCR_REG  0x008
#define EFR_REG  0x008
#define MCR_REG  0x010
#define LSR_REG  0x014
#define MDR1_REG 0x020
#define SSR_REG  0x044
#define LCR_REG  0x00C
#define SYSC_REG 0x054
#define SYSS_REG 0x058

// GPIO
#define GPIO1_BASE        0x48310000
#define GPIO_BASE(i)    (0x49050000 + 0x2000 * (i - 2)) // i = 2 ~ 6
#define GPIO_OE            0x34
#define LEVELDETECT0     0x40
#define LEVELDETECT1     0x44
#define GPIO_IRQ_STATUS1(gpio_index) \
    (((gpio_index) == 0) ? 0x48310018 : 0x49050000 + ((gpio_index) - 1) * 0x2000 + 0x18)

#define GPIO_IRQ_ENABLE1(gpio_index) \
    (((gpio_index) == 0) ? 0x4831001c : 0x49050000 + ((gpio_index) - 1) * 0x2000 + 0x1c)

#define GPIO_IRQ_CLEENABLE1(gpio_index) \
    ((((gpio_index) == 0) < 2) ? 0x48310060 : 0x49050000 + ((gpio_index) - 1) * 0x2000 + 0x60)

#define GPIO_IRQ_SETENABLE1(gpio_index) \
    (((gpio_index) == 0) ? 0x48310064 : 0x49050000 + ((gpio_index) - 1) * 0x2000 + 0x64)

// GPMC
#define GPMC_BASE            0x6E000000
//#define    GPMC_REG_ADDR(reg)            (reg + GPMC_BASE)
#define GPMC_IRQ_STATUS         0x018
#define GPMC_SYSSTATUS             0x014
#define GPMC_CONFIG                 0x050
#define GPMC_STATUS                 0x054
#define GPMC_CONFIG1_0             0x060
#define GPMC_CONFIG7_0             0x078
#define GPMC_NAND_COMMAND_0         0x07C
#define GPMC_NAND_ADDRESS_0         0x080
#define GPMC_NAND_DATA_0         0x084

#define GPMC_CONFIG1(i) (0x6e000060 + 0x30 * (i))
#define GPMC_CONFIG7(i) (0x6e000078 + 0x30 * (i))

#define SYSCONFIG 0x010
#define IRQENABLE 0x01c
#define TIMEOUT   0x040
#define GPMC_CONFIG_CS0 0x60
#define GPMC_CONFIG_1 0x000
#define GPMC_CONFIG_2 0x004
#define GPMC_CONFIG_3 0x008
#define GPMC_CONFIG_4 0x00c
#define GPMC_CONFIG_5 0x010
#define GPMC_CONFIG_6 0x014
#define GPMC_CONFIG_7 0x018

#define GPMC_CS_BASE(x) ((128 * (x)) << 20)

// EMIF
#define EMIF1_BASE            0x4c000000
#define EMIF2_BASE            0x4d000000

#define EMIF_MOD_ID_REV            0x0000
#define EMIF_STATUS            0x0004
#define EMIF_SDRAM_CONFIG        0x0008
#define EMIF_LPDDR2_NVM_CONFIG        0x000C
#define EMIF_SDRAM_REF_CTRL        0x0010
#define EMIF_SDRAM_REF_CTRL_SHDW    0x0014
#define EMIF_SDRAM_TIM_1        0x0018
#define EMIF_SDRAM_TIM_1_SHDW        0x001C
#define EMIF_SDRAM_TIM_2        0x0020
#define EMIF_SDRAM_TIM_2_SHDW        0x0024
#define EMIF_SDRAM_TIM_3        0x0028
#define EMIF_SDRAM_TIM_3_SHDW        0x002C
#define EMIF_LPDDR2_NVM_TIM        0x0030
#define EMIF_LPDDR2_NVM_TIM_SHDW    0x0034
#define EMIF_PWR_MGMT_CTRL        0x0038
#define EMIF_PWR_MGMT_CTRL_SHDW        0x003C
#define EMIF_LPDDR2_MODE_REG_DATA    0x0040
#define EMIF_LPDDR2_MODE_REG_CFG    0x0050
#define EMIF_L3_CONFIG            0x0054
#define EMIF_L3_CFG_VAL_1        0x0058
#define EMIF_L3_CFG_VAL_2        0x005C
#define IODFT_TLGC            0x0060
#define EMIF_PERF_CNT_1            0x0080
#define EMIF_PERF_CNT_2            0x0084
#define EMIF_PERF_CNT_CFG        0x0088
#define EMIF_PERF_CNT_SEL        0x008C
#define EMIF_PERF_CNT_TIM        0x0090
#define EMIF_READ_IDLE_CTRL        0x0098
#define EMIF_READ_IDLE_CTRL_SHDW    0x009c
#define EMIF_ZQ_CONFIG            0x00C8
#define EMIF_DDR_PHY_CTRL_1        0x00E4
#define EMIF_DDR_PHY_CTRL_1_SHDW    0x00E8
#define EMIF_DDR_PHY_CTRL_2        0x00EC

//
#define MR0_ADDR            0
#define MR1_ADDR            1
#define MR2_ADDR            2
#define MR4_ADDR            4
#define MR10_ADDR           10
#define MR16_ADDR           16
#define REF_EN              0x40000000
#define MR10_ZQINIT         0xFF
#define READ_IDLE_CTRL      0x501FF

#define CS1_MR(mr)    ((mr) | 0x80000000)

// DMM
#define DMM_BASE               0x4e000000
#define DMM_LISA_MAP_0             0x0040
#define DMM_LISA_MAP_1             0x0044
#define DMM_LISA_MAP_2             0x0048
#define DMM_LISA_MAP_3             0x004C

// INTC
#define INTC_PINS            96
#define MAX_IRQ_NUM            (INTC_PINS + 32 * 6)
#define GPIO_IRQ(n)            (INTC_PINS + n)

#define INTCPS_BASE    0x48200000
#define INTCPS_SYSCONFIG    0x010
#define INTCPS_SIR_IRQ        0x040
#define INTCPS_CONTROL        0x048
#define INTCPS_IDLE            0x050
#define INTCPS_MIRN(n)        (0x084 + 0x20 * (n))
#define INTCPS_MIRN_CLEN(n)    (0x088 + 0x20 * (n))
#define INTCPS_MIRN_SETN(n)    (0x08c + 0x20 * (n))
#define INTCPS_ISR_CLEN(n)    (0x094 + 0x20 * (n))
#define INTCPS_ILRM(n)        (0x100 + 0x04 * (n))

// MMC
#define MMCHS1_BASE 0x4809c000
#define MMCHS2_BASE 0x480b4000
#define MMCHS3_BASE 0x480ad000

#define MMCHS_SYSCONFIG 0x10
#define MMCHS_SYSSTATUS 0x14
#define MMCHS_CSRE      0x24
#define MMCHS_SYSTEST   0x28
#define MMCHS_CON       0x2c
#define MMCHS_PWCNT     0x30
#define MMCHS_BLK       0x104
#define MMCHS_ARG       0x108
#define MMCHS_CMD       0x10c
#define MMCHS_RSP10     0x110
#define MMCHS_RSP32     0x114
#define MMCHS_RSP54     0x118
#define MMCHS_RSP76     0x11c
#define MMCHS_DATA      0x120
#define MMCHS_PSTATE    0x124
#define MMCHS_HCTL      0x128
#define MMCHS_SYSCTL    0x12c
#define MMCHS_STAT      0x130
#define MMCHS_IE        0x134
#define MMCHS_ISE       0x138
#define MMCHS_AC12      0x13c
#define MMCHS_CAPA      0x140
#define MMCHS_CUR_CAPA  0x148
#define MMCHS_REV       0x1fc

// WDT
#define WDTTIMER1 0x4830c000
#define WDTTIMER2 0x48314000
#define WDTTIMER3 0x49030000
#define WWPS      0x034
#define WSPR      0x048
#define WIER      0x01c

// reset
#define PRM_BASE        0x48307200
#define PRM_RSTCTRL        0x50
