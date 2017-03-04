/* This file is part of the libopencm3 project.
 *
 * It was generated by the irq2nvic_h script.
 */

#ifndef LIBOPENCM3_STM32_F4_NVIC_H
#define LIBOPENCM3_STM32_F4_NVIC_H

#include <libopencm3/cm3/nvic.h>

/** @defgroup CM3_nvic_defines_STM32F4 User interrupts for STM32 F4 series
    @ingroup CM3_nvic_defines

    @{*/

#define NVIC_NVIC_WWDG_IRQ 0
#define NVIC_PVD_IRQ 1
#define NVIC_TAMP_STAMP_IRQ 2
#define NVIC_RTC_WKUP_IRQ 3
#define NVIC_FLASH_IRQ 4
#define NVIC_RCC_IRQ 5
#define NVIC_EXTI0_IRQ 6
#define NVIC_EXTI1_IRQ 7
#define NVIC_EXTI2_IRQ 8
#define NVIC_EXTI3_IRQ 9
#define NVIC_EXTI4_IRQ 10
#define NVIC_DMA1_STREAM0_IRQ 11
#define NVIC_DMA1_STREAM1_IRQ 12
#define NVIC_DMA1_STREAM2_IRQ 13
#define NVIC_DMA1_STREAM3_IRQ 14
#define NVIC_DMA1_STREAM4_IRQ 15
#define NVIC_DMA1_STREAM5_IRQ 16
#define NVIC_DMA1_STREAM6_IRQ 17
#define NVIC_ADC_IRQ 18
#define NVIC_CAN1_TX_IRQ 19
#define NVIC_CAN1_RX0_IRQ 20
#define NVIC_CAN1_RX1_IRQ 21
#define NVIC_CAN1_SCE_IRQ 22
#define NVIC_EXTI9_5_IRQ 23
#define NVIC_TIM1_BRK_TIM9_IRQ 24
#define NVIC_TIM1_UP_TIM10_IRQ 25
#define NVIC_TIM1_TRG_COM_TIM11_IRQ 26
#define NVIC_TIM1_CC_IRQ 27
#define NVIC_TIM2_IRQ 28
#define NVIC_TIM3_IRQ 29
#define NVIC_TIM4_IRQ 30
#define NVIC_I2C1_EV_IRQ 31
#define NVIC_I2C1_ER_IRQ 32
#define NVIC_I2C2_EV_IRQ 33
#define NVIC_I2C2_ER_IRQ 34
#define NVIC_SPI1_IRQ 35
#define NVIC_SPI2_IRQ 36
#define NVIC_USART1_IRQ 37
#define NVIC_USART2_IRQ 38
#define NVIC_USART3_IRQ 39
#define NVIC_EXTI15_10_IRQ 40
#define NVIC_RTC_ALARM_IRQ 41
#define NVIC_USB_FS_WKUP_IRQ 42
#define NVIC_TIM8_BRK_TIM12_IRQ 43
#define NVIC_TIM8_UP_TIM13_IRQ 44
#define NVIC_TIM8_TRG_COM_TIM14_IRQ 45
#define NVIC_TIM8_CC_IRQ 46
#define NVIC_DMA1_STREAM7_IRQ 47
#define NVIC_FSMC_IRQ 48
#define NVIC_SDIO_IRQ 49
#define NVIC_TIM5_IRQ 50
#define NVIC_SPI3_IRQ 51
#define NVIC_UART4_IRQ 52
#define NVIC_UART5_IRQ 53
#define NVIC_TIM6_DAC_IRQ 54
#define NVIC_TIM7_IRQ 55
#define NVIC_DMA2_STREAM0_IRQ 56
#define NVIC_DMA2_STREAM1_IRQ 57
#define NVIC_DMA2_STREAM2_IRQ 58
#define NVIC_DMA2_STREAM3_IRQ 59
#define NVIC_DMA2_STREAM4_IRQ 60
#define NVIC_ETH_IRQ 61
#define NVIC_ETH_WKUP_IRQ 62
#define NVIC_CAN2_TX_IRQ 63
#define NVIC_CAN2_RX0_IRQ 64
#define NVIC_CAN2_RX1_IRQ 65
#define NVIC_CAN2_SCE_IRQ 66
#define NVIC_OTG_FS_IRQ 67
#define NVIC_DMA2_STREAM5_IRQ 68
#define NVIC_DMA2_STREAM6_IRQ 69
#define NVIC_DMA2_STREAM7_IRQ 70
#define NVIC_USART6_IRQ 71
#define NVIC_I2C3_EV_IRQ 72
#define NVIC_I2C3_ER_IRQ 73
#define NVIC_OTG_HS_EP1_OUT_IRQ 74
#define NVIC_OTG_HS_EP1_IN_IRQ 75
#define NVIC_OTG_HS_WKUP_IRQ 76
#define NVIC_OTG_HS_IRQ 77
#define NVIC_DCMI_IRQ 78
#define NVIC_CRYP_IRQ 79
#define NVIC_HASH_RNG_IRQ 80
#define NVIC_FPU_IRQ 81
#define NVIC_UART7_IRQ 82
#define NVIC_UART8_IRQ 83
#define NVIC_SPI4_IRQ 84
#define NVIC_SPI5_IRQ 85
#define NVIC_SPI6_IRQ 86
#define NVIC_SAI1_IRQ 87
#define NVIC_LCD_TFT_IRQ 88
#define NVIC_LCD_TFT_ERR_IRQ 89
#define NVIC_DMA2D_IRQ 90

#define NVIC_IRQ_COUNT 91

/**@}*/

/** @defgroup CM3_nvic_isrprototypes_STM32F4 User interrupt service routines (ISR) prototypes for STM32 F4 series
    @ingroup CM3_nvic_isrprototypes

    @{*/

BEGIN_DECLS

void WEAK nvic_wwdg_isr(void);
void WEAK pvd_isr(void);
void WEAK tamp_stamp_isr(void);
void WEAK rtc_wkup_isr(void);
void WEAK flash_isr(void);
void WEAK rcc_isr(void);
void WEAK exti0_isr(void);
void WEAK exti1_isr(void);
void WEAK exti2_isr(void);
void WEAK exti3_isr(void);
void WEAK exti4_isr(void);
void WEAK dma1_stream0_isr(void);
void WEAK dma1_stream1_isr(void);
void WEAK dma1_stream2_isr(void);
void WEAK dma1_stream3_isr(void);
void WEAK dma1_stream4_isr(void);
void WEAK dma1_stream5_isr(void);
void WEAK dma1_stream6_isr(void);
void WEAK adc_isr(void);
void WEAK can1_tx_isr(void);
void WEAK can1_rx0_isr(void);
void WEAK can1_rx1_isr(void);
void WEAK can1_sce_isr(void);
void WEAK exti9_5_isr(void);
void WEAK tim1_brk_tim9_isr(void);
void WEAK tim1_up_tim10_isr(void);
void WEAK tim1_trg_com_tim11_isr(void);
void WEAK tim1_cc_isr(void);
void WEAK tim2_isr(void);
void WEAK tim3_isr(void);
void WEAK tim4_isr(void);
void WEAK i2c1_ev_isr(void);
void WEAK i2c1_er_isr(void);
void WEAK i2c2_ev_isr(void);
void WEAK i2c2_er_isr(void);
void WEAK spi1_isr(void);
void WEAK spi2_isr(void);
void WEAK usart1_isr(void);
void WEAK usart2_isr(void);
void WEAK usart3_isr(void);
void WEAK exti15_10_isr(void);
void WEAK rtc_alarm_isr(void);
void WEAK usb_fs_wkup_isr(void);
void WEAK tim8_brk_tim12_isr(void);
void WEAK tim8_up_tim13_isr(void);
void WEAK tim8_trg_com_tim14_isr(void);
void WEAK tim8_cc_isr(void);
void WEAK dma1_stream7_isr(void);
void WEAK fsmc_isr(void);
void WEAK sdio_isr(void);
void WEAK tim5_isr(void);
void WEAK spi3_isr(void);
void WEAK uart4_isr(void);
void WEAK uart5_isr(void);
void WEAK tim6_dac_isr(void);
void WEAK tim7_isr(void);
void WEAK dma2_stream0_isr(void);
void WEAK dma2_stream1_isr(void);
void WEAK dma2_stream2_isr(void);
void WEAK dma2_stream3_isr(void);
void WEAK dma2_stream4_isr(void);
void WEAK eth_isr(void);
void WEAK eth_wkup_isr(void);
void WEAK can2_tx_isr(void);
void WEAK can2_rx0_isr(void);
void WEAK can2_rx1_isr(void);
void WEAK can2_sce_isr(void);
void WEAK otg_fs_isr(void);
void WEAK dma2_stream5_isr(void);
void WEAK dma2_stream6_isr(void);
void WEAK dma2_stream7_isr(void);
void WEAK usart6_isr(void);
void WEAK i2c3_ev_isr(void);
void WEAK i2c3_er_isr(void);
void WEAK otg_hs_ep1_out_isr(void);
void WEAK otg_hs_ep1_in_isr(void);
void WEAK otg_hs_wkup_isr(void);
void WEAK otg_hs_isr(void);
void WEAK dcmi_isr(void);
void WEAK cryp_isr(void);
void WEAK hash_rng_isr(void);
void WEAK fpu_isr(void);
void WEAK uart7_isr(void);
void WEAK uart8_isr(void);
void WEAK spi4_isr(void);
void WEAK spi5_isr(void);
void WEAK spi6_isr(void);
void WEAK sai1_isr(void);
void WEAK lcd_tft_isr(void);
void WEAK lcd_tft_err_isr(void);
void WEAK dma2d_isr(void);

END_DECLS

/**@}*/

#endif /* LIBOPENCM3_STM32_F4_NVIC_H */