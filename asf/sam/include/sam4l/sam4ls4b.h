/**
 * \file
 *
 * \brief Header file for SAM4LS4B
 *
 * Copyright (c) 2016 Atmel Corporation,
 *                    a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAM4LS4B_
#define _SAM4LS4B_

/**
 * \ingroup SAM4L_definitions
 * \addtogroup SAM4LS4B_definitions SAM4LS4B definitions
 * This file defines all structures and symbols for SAM4LS4B:
 *   - registers and bitfields
 *   - peripheral base address
 *   - peripheral ID
 *   - PIO definitions
*/
/*@{*/

#ifdef __cplusplus
 extern "C" {
#endif

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#include <stdint.h>
#ifndef __cplusplus
typedef volatile const uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile const uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile const uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#else
typedef volatile       uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile       uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile       uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#endif
typedef volatile       uint32_t WoReg;   /**< Write only 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t WoReg16; /**< Write only 16-bit register (volatile unsigned int) */
typedef volatile       uint32_t WoReg8;  /**< Write only  8-bit register (volatile unsigned int) */
typedef volatile       uint32_t RwReg;   /**< Read-Write 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t RwReg16; /**< Read-Write 16-bit register (volatile unsigned int) */
typedef volatile       uint8_t  RwReg8;  /**< Read-Write  8-bit register (volatile unsigned int) */
#if !defined(_UL)
#define _U_(x)          x ## U            /**< C code: Unsigned integer literal constant value */
#define _L_(x)          x ## L            /**< C code: Long integer literal constant value */
#define _UL_(x)         x ## UL           /**< C code: Unsigned Long integer literal constant value */
#endif
#else
#if !defined(_UL)
#define _U_(x)          x                 /**< Assembler: Unsigned integer literal constant value */
#define _L_(x)          x                 /**< Assembler: Long integer literal constant value */
#define _UL_(x)         x                 /**< Assembler: Unsigned Long integer literal constant value */
#endif
#endif

/* ************************************************************************** */
/**  CMSIS DEFINITIONS FOR SAM4LS4B */
/* ************************************************************************** */
/** \defgroup SAM4LS4B_cmsis CMSIS Definitions */
/*@{*/

/** Interrupt Number Definition */
typedef enum IRQn
{
  /******  Cortex-M4 Processor Exceptions Numbers ******************************/
  NonMaskableInt_IRQn      = -14,/**<  2 Non Maskable Interrupt                */
  HardFault_IRQn           = -13,/**<  3 Cortex-M4 Hard Fault Interrupt        */
  MemoryManagement_IRQn    = -12,/**<  4 Cortex-M4 Memory Management Interrupt */
  BusFault_IRQn            = -11,/**<  5 Cortex-M4 Bus Fault Interrupt         */
  UsageFault_IRQn          = -10,/**<  6 Cortex-M4 Usage Fault Interrupt       */
  SVCall_IRQn              = -5, /**< 11 Cortex-M4 SV Call Interrupt           */
  DebugMonitor_IRQn        = -4, /**< 12 Cortex-M4 Debug Monitor Interrupt     */
  PendSV_IRQn              = -2, /**< 14 Cortex-M4 Pend SV Interrupt           */
  SysTick_IRQn             = -1, /**< 15 Cortex-M4 System Tick Interrupt       */
  /******  SAM4LS4B-specific Interrupt Numbers ***********************/
  HFLASHC_IRQn             =  0, /**<  0 SAM4LS4B Flash Controller (HFLASHC) */
  PDCA_0_IRQn              =  1, /**<  1 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_0 */
  PDCA_1_IRQn              =  2, /**<  2 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_1 */
  PDCA_2_IRQn              =  3, /**<  3 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_2 */
  PDCA_3_IRQn              =  4, /**<  4 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_3 */
  PDCA_4_IRQn              =  5, /**<  5 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_4 */
  PDCA_5_IRQn              =  6, /**<  6 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_5 */
  PDCA_6_IRQn              =  7, /**<  7 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_6 */
  PDCA_7_IRQn              =  8, /**<  8 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_7 */
  PDCA_8_IRQn              =  9, /**<  9 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_8 */
  PDCA_9_IRQn              = 10, /**< 10 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_9 */
  PDCA_10_IRQn             = 11, /**< 11 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_10 */
  PDCA_11_IRQn             = 12, /**< 12 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_11 */
  PDCA_12_IRQn             = 13, /**< 13 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_12 */
  PDCA_13_IRQn             = 14, /**< 14 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_13 */
  PDCA_14_IRQn             = 15, /**< 15 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_14 */
  PDCA_15_IRQn             = 16, /**< 16 SAM4LS4B Peripheral DMA Controller (PDCA): PDCA_15 */
  CRCCU_IRQn               = 17, /**< 17 SAM4LS4B CRC Calculation Unit (CRCCU) */
  USBC_IRQn                = 18, /**< 18 SAM4LS4B USB 2.0 Interface (USBC) */
  PEVC_0_IRQn              = 19, /**< 19 SAM4LS4B Peripheral Event Controller (PEVC): PEVC_TR */
  PEVC_1_IRQn              = 20, /**< 20 SAM4LS4B Peripheral Event Controller (PEVC): PEVC_OV */
  PM_IRQn                  = 22, /**< 22 SAM4LS4B Power Manager (PM) */
  SCIF_IRQn                = 23, /**< 23 SAM4LS4B System Control Interface (SCIF) */
  FREQM_IRQn               = 24, /**< 24 SAM4LS4B Frequency Meter (FREQM) */
  GPIO_0_IRQn              = 25, /**< 25 SAM4LS4B General-Purpose Input/Output Controller (GPIO): GPIO_0 */
  GPIO_1_IRQn              = 26, /**< 26 SAM4LS4B General-Purpose Input/Output Controller (GPIO): GPIO_1 */
  GPIO_2_IRQn              = 27, /**< 27 SAM4LS4B General-Purpose Input/Output Controller (GPIO): GPIO_2 */
  GPIO_3_IRQn              = 28, /**< 28 SAM4LS4B General-Purpose Input/Output Controller (GPIO): GPIO_3 */
  GPIO_4_IRQn              = 29, /**< 29 SAM4LS4B General-Purpose Input/Output Controller (GPIO): GPIO_4 */
  GPIO_5_IRQn              = 30, /**< 30 SAM4LS4B General-Purpose Input/Output Controller (GPIO): GPIO_5 */
  GPIO_6_IRQn              = 31, /**< 31 SAM4LS4B General-Purpose Input/Output Controller (GPIO): GPIO_6 */
  GPIO_7_IRQn              = 32, /**< 32 SAM4LS4B General-Purpose Input/Output Controller (GPIO): GPIO_7 */
  GPIO_8_IRQn              = 33, /**< 33 SAM4LS4B General-Purpose Input/Output Controller (GPIO): GPIO_8 */
  GPIO_9_IRQn              = 34, /**< 34 SAM4LS4B General-Purpose Input/Output Controller (GPIO): GPIO_9 */
  GPIO_10_IRQn             = 35, /**< 35 SAM4LS4B General-Purpose Input/Output Controller (GPIO): GPIO_10 */
  GPIO_11_IRQn             = 36, /**< 36 SAM4LS4B General-Purpose Input/Output Controller (GPIO): GPIO_11 */
  BPM_IRQn                 = 37, /**< 37 SAM4LS4B Backup Power Manager (BPM) */
  BSCIF_IRQn               = 38, /**< 38 SAM4LS4B Backup System Control Interface (BSCIF) */
  AST_0_IRQn               = 39, /**< 39 SAM4LS4B Asynchronous Timer (AST): AST_ALARM */
  AST_1_IRQn               = 40, /**< 40 SAM4LS4B Asynchronous Timer (AST): AST_PER */
  AST_2_IRQn               = 41, /**< 41 SAM4LS4B Asynchronous Timer (AST): AST_OVF */
  AST_3_IRQn               = 42, /**< 42 SAM4LS4B Asynchronous Timer (AST): AST_READY */
  AST_4_IRQn               = 43, /**< 43 SAM4LS4B Asynchronous Timer (AST): AST_CLKREADY */
  WDT_IRQn                 = 44, /**< 44 SAM4LS4B Watchdog Timer (WDT) */
  EIC_0_IRQn               = 45, /**< 45 SAM4LS4B External Interrupt Controller (EIC): EIC_1 */
  EIC_1_IRQn               = 46, /**< 46 SAM4LS4B External Interrupt Controller (EIC): EIC_2 */
  EIC_2_IRQn               = 47, /**< 47 SAM4LS4B External Interrupt Controller (EIC): EIC_3 */
  EIC_3_IRQn               = 48, /**< 48 SAM4LS4B External Interrupt Controller (EIC): EIC_4 */
  EIC_4_IRQn               = 49, /**< 49 SAM4LS4B External Interrupt Controller (EIC): EIC_5 */
  EIC_5_IRQn               = 50, /**< 50 SAM4LS4B External Interrupt Controller (EIC): EIC_6 */
  EIC_6_IRQn               = 51, /**< 51 SAM4LS4B External Interrupt Controller (EIC): EIC_7 */
  EIC_7_IRQn               = 52, /**< 52 SAM4LS4B External Interrupt Controller (EIC): EIC_8 */
  IISC_IRQn                = 53, /**< 53 SAM4LS4B Inter-IC Sound (I2S) Controller (IISC) */
  SPI_IRQn                 = 54, /**< 54 SAM4LS4B Serial Peripheral Interface (SPI) */
  TC0_0_IRQn               = 55, /**< 55 SAM4LS4B Timer/Counter 0 (TC0): TC00 */
  TC0_1_IRQn               = 56, /**< 56 SAM4LS4B Timer/Counter 0 (TC0): TC01 */
  TC0_2_IRQn               = 57, /**< 57 SAM4LS4B Timer/Counter 0 (TC0): TC02 */
  TC1_0_IRQn               = 58, /**< 58 SAM4LS4B Timer/Counter 1 (TC1): TC10 */
  TC1_1_IRQn               = 59, /**< 59 SAM4LS4B Timer/Counter 1 (TC1): TC11 */
  TC1_2_IRQn               = 60, /**< 60 SAM4LS4B Timer/Counter 1 (TC1): TC12 */
  TWIM0_IRQn               = 61, /**< 61 SAM4LS4B Two-wire Master Interface 0 (TWIM0) */
  TWIS0_IRQn               = 62, /**< 62 SAM4LS4B Two-wire Slave Interface 0 (TWIS0) */
  TWIM1_IRQn               = 63, /**< 63 SAM4LS4B Two-wire Master Interface 1 (TWIM1) */
  TWIS1_IRQn               = 64, /**< 64 SAM4LS4B Two-wire Slave Interface 1 (TWIS1) */
  USART0_IRQn              = 65, /**< 65 SAM4LS4B Universal Synchronous Asynchronous Receiver Transmitter 0 (USART0) */
  USART1_IRQn              = 66, /**< 66 SAM4LS4B Universal Synchronous Asynchronous Receiver Transmitter 1 (USART1) */
  USART2_IRQn              = 67, /**< 67 SAM4LS4B Universal Synchronous Asynchronous Receiver Transmitter 2 (USART2) */
  USART3_IRQn              = 68, /**< 68 SAM4LS4B Universal Synchronous Asynchronous Receiver Transmitter 3 (USART3) */
  ADCIFE_IRQn              = 69, /**< 69 SAM4LS4B ADC controller interface (ADCIFE) */
  DACC_IRQn                = 70, /**< 70 SAM4LS4B DAC Controller (DACC) */
  ACIFC_IRQn               = 71, /**< 71 SAM4LS4B Analog Comparator Interface (ACIFC) */
  ABDACB_IRQn              = 72, /**< 72 SAM4LS4B Audio Bitstream DAC (ABDACB) */
  TRNG_IRQn                = 73, /**< 73 SAM4LS4B True Random Number Generator (TRNG) */
  PARC_IRQn                = 74, /**< 74 SAM4LS4B Parallel Capture (PARC) */
  CATB_IRQn                = 75, /**< 75 SAM4LS4B Capacitive Touch Module B (CATB) */
  TWIM2_IRQn               = 77, /**< 77 SAM4LS4B Two-wire Master Interface 2 (TWIM2) */
  TWIM3_IRQn               = 78, /**< 78 SAM4LS4B Two-wire Master Interface 3 (TWIM3) */

  PERIPH_COUNT_IRQn        = 80  /**< Number of peripheral IDs */
} IRQn_Type;

typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;

  /* Cortex-M handlers */
  void* pfnReset_Handler;
  void* pfnNMI_Handler;
  void* pfnHardFault_Handler;
  void* pfnMemManage_Handler;
  void* pfnBusFault_Handler;
  void* pfnUsageFault_Handler;
  void* pvReservedM9;
  void* pvReservedM8;
  void* pvReservedM7;
  void* pvReservedM6;
  void* pfnSVC_Handler;
  void* pfnDebugMon_Handler;
  void* pvReservedM3;
  void* pfnPendSV_Handler;
  void* pfnSysTick_Handler;

  /* Peripheral handlers */
  void* pfnHFLASHC_Handler;               /*  0 Flash Controller */
  void* pfnPDCA_0_Handler;                /*  1 Peripheral DMA Controller IRQ 0 */
  void* pfnPDCA_1_Handler;                /*  2 Peripheral DMA Controller IRQ 1 */
  void* pfnPDCA_2_Handler;                /*  3 Peripheral DMA Controller IRQ 2 */
  void* pfnPDCA_3_Handler;                /*  4 Peripheral DMA Controller IRQ 3 */
  void* pfnPDCA_4_Handler;                /*  5 Peripheral DMA Controller IRQ 4 */
  void* pfnPDCA_5_Handler;                /*  6 Peripheral DMA Controller IRQ 5 */
  void* pfnPDCA_6_Handler;                /*  7 Peripheral DMA Controller IRQ 6 */
  void* pfnPDCA_7_Handler;                /*  8 Peripheral DMA Controller IRQ 7 */
  void* pfnPDCA_8_Handler;                /*  9 Peripheral DMA Controller IRQ 8 */
  void* pfnPDCA_9_Handler;                /* 10 Peripheral DMA Controller IRQ 9 */
  void* pfnPDCA_10_Handler;               /* 11 Peripheral DMA Controller IRQ 10 */
  void* pfnPDCA_11_Handler;               /* 12 Peripheral DMA Controller IRQ 11 */
  void* pfnPDCA_12_Handler;               /* 13 Peripheral DMA Controller IRQ 12 */
  void* pfnPDCA_13_Handler;               /* 14 Peripheral DMA Controller IRQ 13 */
  void* pfnPDCA_14_Handler;               /* 15 Peripheral DMA Controller IRQ 14 */
  void* pfnPDCA_15_Handler;               /* 16 Peripheral DMA Controller IRQ 15 */
  void* pfnCRCCU_Handler;                 /* 17 CRC Calculation Unit */
  void* pfnUSBC_Handler;                  /* 18 USB 2.0 Interface */
  void* pfnPEVC_0_Handler;                /* 19 Peripheral Event Controller IRQ 0 */
  void* pfnPEVC_1_Handler;                /* 20 Peripheral Event Controller IRQ 1 */
  void* pvReserved21;
  void* pfnPM_Handler;                    /* 22 Power Manager */
  void* pfnSCIF_Handler;                  /* 23 System Control Interface */
  void* pfnFREQM_Handler;                 /* 24 Frequency Meter */
  void* pfnGPIO_0_Handler;                /* 25 General-Purpose Input/Output Controller IRQ 0 */
  void* pfnGPIO_1_Handler;                /* 26 General-Purpose Input/Output Controller IRQ 1 */
  void* pfnGPIO_2_Handler;                /* 27 General-Purpose Input/Output Controller IRQ 2 */
  void* pfnGPIO_3_Handler;                /* 28 General-Purpose Input/Output Controller IRQ 3 */
  void* pfnGPIO_4_Handler;                /* 29 General-Purpose Input/Output Controller IRQ 4 */
  void* pfnGPIO_5_Handler;                /* 30 General-Purpose Input/Output Controller IRQ 5 */
  void* pfnGPIO_6_Handler;                /* 31 General-Purpose Input/Output Controller IRQ 6 */
  void* pfnGPIO_7_Handler;                /* 32 General-Purpose Input/Output Controller IRQ 7 */
  void* pfnGPIO_8_Handler;                /* 33 General-Purpose Input/Output Controller IRQ 8 */
  void* pfnGPIO_9_Handler;                /* 34 General-Purpose Input/Output Controller IRQ 9 */
  void* pfnGPIO_10_Handler;               /* 35 General-Purpose Input/Output Controller IRQ 10 */
  void* pfnGPIO_11_Handler;               /* 36 General-Purpose Input/Output Controller IRQ 11 */
  void* pfnBPM_Handler;                   /* 37 Backup Power Manager */
  void* pfnBSCIF_Handler;                 /* 38 Backup System Control Interface */
  void* pfnAST_0_Handler;                 /* 39 Asynchronous Timer IRQ 0 */
  void* pfnAST_1_Handler;                 /* 40 Asynchronous Timer IRQ 1 */
  void* pfnAST_2_Handler;                 /* 41 Asynchronous Timer IRQ 2 */
  void* pfnAST_3_Handler;                 /* 42 Asynchronous Timer IRQ 3 */
  void* pfnAST_4_Handler;                 /* 43 Asynchronous Timer IRQ 4 */
  void* pfnWDT_Handler;                   /* 44 Watchdog Timer */
  void* pfnEIC_0_Handler;                 /* 45 External Interrupt Controller IRQ 0 */
  void* pfnEIC_1_Handler;                 /* 46 External Interrupt Controller IRQ 1 */
  void* pfnEIC_2_Handler;                 /* 47 External Interrupt Controller IRQ 2 */
  void* pfnEIC_3_Handler;                 /* 48 External Interrupt Controller IRQ 3 */
  void* pfnEIC_4_Handler;                 /* 49 External Interrupt Controller IRQ 4 */
  void* pfnEIC_5_Handler;                 /* 50 External Interrupt Controller IRQ 5 */
  void* pfnEIC_6_Handler;                 /* 51 External Interrupt Controller IRQ 6 */
  void* pfnEIC_7_Handler;                 /* 52 External Interrupt Controller IRQ 7 */
  void* pfnIISC_Handler;                  /* 53 Inter-IC Sound (I2S) Controller */
  void* pfnSPI_Handler;                   /* 54 Serial Peripheral Interface */
  void* pfnTC0_0_Handler;                 /* 55 Timer/Counter 0 IRQ 0 */
  void* pfnTC0_1_Handler;                 /* 56 Timer/Counter 0 IRQ 1 */
  void* pfnTC0_2_Handler;                 /* 57 Timer/Counter 0 IRQ 2 */
  void* pfnTC1_0_Handler;                 /* 58 Timer/Counter 1 IRQ 0 */
  void* pfnTC1_1_Handler;                 /* 59 Timer/Counter 1 IRQ 1 */
  void* pfnTC1_2_Handler;                 /* 60 Timer/Counter 1 IRQ 2 */
  void* pfnTWIM0_Handler;                 /* 61 Two-wire Master Interface 0 */
  void* pfnTWIS0_Handler;                 /* 62 Two-wire Slave Interface 0 */
  void* pfnTWIM1_Handler;                 /* 63 Two-wire Master Interface 1 */
  void* pfnTWIS1_Handler;                 /* 64 Two-wire Slave Interface 1 */
  void* pfnUSART0_Handler;                /* 65 Universal Synchronous Asynchronous Receiver Transmitter 0 */
  void* pfnUSART1_Handler;                /* 66 Universal Synchronous Asynchronous Receiver Transmitter 1 */
  void* pfnUSART2_Handler;                /* 67 Universal Synchronous Asynchronous Receiver Transmitter 2 */
  void* pfnUSART3_Handler;                /* 68 Universal Synchronous Asynchronous Receiver Transmitter 3 */
  void* pfnADCIFE_Handler;                /* 69 ADC controller interface */
  void* pfnDACC_Handler;                  /* 70 DAC Controller */
  void* pfnACIFC_Handler;                 /* 71 Analog Comparator Interface */
  void* pfnABDACB_Handler;                /* 72 Audio Bitstream DAC */
  void* pfnTRNG_Handler;                  /* 73 True Random Number Generator */
  void* pfnPARC_Handler;                  /* 74 Parallel Capture */
  void* pfnCATB_Handler;                  /* 75 Capacitive Touch Module B */
  void* pvReserved76;
  void* pfnTWIM2_Handler;                 /* 77 Two-wire Master Interface 2 */
  void* pfnTWIM3_Handler;                 /* 78 Two-wire Master Interface 3 */
  void* pvReserved79;
} DeviceVectors;

/* Cortex-M4 processor handlers */
void Reset_Handler               ( void );
void NMI_Handler                 ( void );
void HardFault_Handler           ( void );
void MemManage_Handler           ( void );
void BusFault_Handler            ( void );
void UsageFault_Handler          ( void );
void SVC_Handler                 ( void );
void DebugMon_Handler            ( void );
void PendSV_Handler              ( void );
void SysTick_Handler             ( void );

/* Peripherals handlers */
void HFLASHC_Handler             ( void );
void PDCA_0_Handler              ( void );
void PDCA_1_Handler              ( void );
void PDCA_2_Handler              ( void );
void PDCA_3_Handler              ( void );
void PDCA_4_Handler              ( void );
void PDCA_5_Handler              ( void );
void PDCA_6_Handler              ( void );
void PDCA_7_Handler              ( void );
void PDCA_8_Handler              ( void );
void PDCA_9_Handler              ( void );
void PDCA_10_Handler             ( void );
void PDCA_11_Handler             ( void );
void PDCA_12_Handler             ( void );
void PDCA_13_Handler             ( void );
void PDCA_14_Handler             ( void );
void PDCA_15_Handler             ( void );
void CRCCU_Handler               ( void );
void USBC_Handler                ( void );
void PEVC_0_Handler              ( void );
void PEVC_1_Handler              ( void );
void PM_Handler                  ( void );
void SCIF_Handler                ( void );
void FREQM_Handler               ( void );
void GPIO_0_Handler              ( void );
void GPIO_1_Handler              ( void );
void GPIO_2_Handler              ( void );
void GPIO_3_Handler              ( void );
void GPIO_4_Handler              ( void );
void GPIO_5_Handler              ( void );
void GPIO_6_Handler              ( void );
void GPIO_7_Handler              ( void );
void GPIO_8_Handler              ( void );
void GPIO_9_Handler              ( void );
void GPIO_10_Handler             ( void );
void GPIO_11_Handler             ( void );
void BPM_Handler                 ( void );
void BSCIF_Handler               ( void );
void AST_0_Handler               ( void );
void AST_1_Handler               ( void );
void AST_2_Handler               ( void );
void AST_3_Handler               ( void );
void AST_4_Handler               ( void );
void WDT_Handler                 ( void );
void EIC_0_Handler               ( void );
void EIC_1_Handler               ( void );
void EIC_2_Handler               ( void );
void EIC_3_Handler               ( void );
void EIC_4_Handler               ( void );
void EIC_5_Handler               ( void );
void EIC_6_Handler               ( void );
void EIC_7_Handler               ( void );
void IISC_Handler                ( void );
void SPI_Handler                 ( void );
void TC0_0_Handler               ( void );
void TC0_1_Handler               ( void );
void TC0_2_Handler               ( void );
void TC1_0_Handler               ( void );
void TC1_1_Handler               ( void );
void TC1_2_Handler               ( void );
void TWIM0_Handler               ( void );
void TWIS0_Handler               ( void );
void TWIM1_Handler               ( void );
void TWIS1_Handler               ( void );
void USART0_Handler              ( void );
void USART1_Handler              ( void );
void USART2_Handler              ( void );
void USART3_Handler              ( void );
void ADCIFE_Handler              ( void );
void DACC_Handler                ( void );
void ACIFC_Handler               ( void );
void ABDACB_Handler              ( void );
void TRNG_Handler                ( void );
void PARC_Handler                ( void );
void CATB_Handler                ( void );
void TWIM2_Handler               ( void );
void TWIM3_Handler               ( void );

/*
 * \brief Configuration of the Cortex-M4 Processor and Core Peripherals
 */

#define LITTLE_ENDIAN          1        
#define __BB_PRESENT           0         /*!< BIT_BANDING present or not */
#define __CLKGATE_PRESENT      1         /*!< CLKGATE present or not */
#define __CM4_REV              1         /*!< Core revision r0p1 */
#define __DEBUG_LVL            3         /*!< Full debug plus DWT data matching */
#define __FPU_PRESENT          0         /*!< FPU present or not */
#define __JTAG_PRESENT         1         /*!< JTAG present or not */
#define __MPU_PRESENT          1         /*!< MPU present or not */
#define __NVIC_PRIO_BITS       4         /*!< Number of bits used for Priority Levels */
#define __TRACE_LVL            1         /*!< Standard trace: ITM and DWT triggers and counters, but no ETM */
#define __Vendor_SysTickConfig 0         /*!< Set to 1 if different SysTick Config is used */
#define __WIC_PRESENT          0         /*!< WIC present or not */

/**
 * \brief CMSIS includes
 */

#include <core_cm4.h>
#if !defined DONT_USE_CMSIS_INIT
#include "system_sam4l.h"
#endif /* DONT_USE_CMSIS_INIT */

/*@}*/

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAM4LS4B */
/* ************************************************************************** */
/** \defgroup SAM4LS4B_api Peripheral Software API */
/*@{*/

#include "component/abdacb.h"
#include "component/acifc.h"
#include "component/adcife.h"
#include "component/ast.h"
#include "component/bpm.h"
#include "component/bscif.h"
#include "component/catb.h"
#include "component/chipid.h"
#include "component/crccu.h"
#include "component/dacc.h"
#include "component/eic.h"
#include "component/flashcalw.h"
#include "component/freqm.h"
#include "component/gloc.h"
#include "component/gpio.h"
#include "component/hcache.h"
#include "component/hmatrixb.h"
#include "component/iisc.h"
#include "component/parc.h"
#include "component/pdca.h"
#include "component/pevc.h"
#include "component/picouart.h"
#include "component/pm.h"
#include "component/scif.h"
#include "component/smap.h"
#include "component/spi.h"
#include "component/tc.h"
#include "component/trng.h"
#include "component/twim.h"
#include "component/twis.h"
#include "component/usart.h"
#include "component/usbc.h"
#include "component/wdt.h"
/*@}*/

/* ************************************************************************** */
/**  REGISTERS ACCESS DEFINITIONS FOR SAM4LS4B */
/* ************************************************************************** */
/** \defgroup SAM4LS4B_reg Registers Access Definitions */
/*@{*/

#include "instance/abdacb.h"
#include "instance/acifc.h"
#include "instance/adcife.h"
#include "instance/ast.h"
#include "instance/bpm.h"
#include "instance/bscif.h"
#include "instance/catb.h"
#include "instance/chipid.h"
#include "instance/crccu.h"
#include "instance/dacc.h"
#include "instance/eic.h"
#include "instance/hflashc.h"
#include "instance/freqm.h"
#include "instance/gloc.h"
#include "instance/gpio.h"
#include "instance/hcache.h"
#include "instance/hmatrix.h"
#include "instance/iisc.h"
#include "instance/parc.h"
#include "instance/pdca.h"
#include "instance/pevc.h"
#include "instance/picouart.h"
#include "instance/pm.h"
#include "instance/scif.h"
#include "instance/smap.h"
#include "instance/spi.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/trng.h"
#include "instance/twim0.h"
#include "instance/twim1.h"
#include "instance/twim2.h"
#include "instance/twim3.h"
#include "instance/twis0.h"
#include "instance/twis1.h"
#include "instance/usart0.h"
#include "instance/usart1.h"
#include "instance/usart2.h"
#include "instance/usart3.h"
#include "instance/usbc.h"
#include "instance/wdt.h"
/*@}*/

/* ************************************************************************** */
/**  PERIPHERAL ID DEFINITIONS FOR SAM4LS4B */
/* ************************************************************************** */
/** \defgroup SAM4LS4B_id Peripheral Ids Definitions */
/*@{*/

// Peripheral instances on HTOP0 bridge
#define ID_IISC           0 /**< \brief Inter-IC Sound (I2S) Controller (IISC) */
#define ID_SPI            1 /**< \brief Serial Peripheral Interface (SPI) */
#define ID_TC0            2 /**< \brief Timer/Counter 0 (TC0) */
#define ID_TC1            3 /**< \brief Timer/Counter 1 (TC1) */
#define ID_TWIM0          4 /**< \brief Two-wire Master Interface 0 (TWIM0) */
#define ID_TWIS0          5 /**< \brief Two-wire Slave Interface 0 (TWIS0) */
#define ID_TWIM1          6 /**< \brief Two-wire Master Interface 1 (TWIM1) */
#define ID_TWIS1          7 /**< \brief Two-wire Slave Interface 1 (TWIS1) */
#define ID_USART0         8 /**< \brief Universal Synchronous Asynchronous Receiver Transmitter 0 (USART0) */
#define ID_USART1         9 /**< \brief Universal Synchronous Asynchronous Receiver Transmitter 1 (USART1) */
#define ID_USART2        10 /**< \brief Universal Synchronous Asynchronous Receiver Transmitter 2 (USART2) */
#define ID_USART3        11 /**< \brief Universal Synchronous Asynchronous Receiver Transmitter 3 (USART3) */
#define ID_ADCIFE        12 /**< \brief ADC controller interface (ADCIFE) */
#define ID_DACC          13 /**< \brief DAC Controller (DACC) */
#define ID_ACIFC         14 /**< \brief Analog Comparator Interface (ACIFC) */
#define ID_GLOC          15 /**< \brief Glue Logic Controller (GLOC) */
#define ID_ABDACB        16 /**< \brief Audio Bitstream DAC (ABDACB) */
#define ID_TRNG          17 /**< \brief True Random Number Generator (TRNG) */
#define ID_PARC          18 /**< \brief Parallel Capture (PARC) */
#define ID_CATB          19 /**< \brief Capacitive Touch Module B (CATB) */
#define ID_TWIM2         21 /**< \brief Two-wire Master Interface 2 (TWIM2) */
#define ID_TWIM3         22 /**< \brief Two-wire Master Interface 3 (TWIM3) */

// Peripheral instances on HTOP1 bridge
#define ID_HFLASHC       32 /**< \brief Flash Controller (HFLASHC) */
#define ID_HCACHE        33 /**< \brief Cortex M I&D Cache Controller (HCACHE) */
#define ID_HMATRIX       34 /**< \brief HSB Matrix (HMATRIX) */
#define ID_PDCA          35 /**< \brief Peripheral DMA Controller (PDCA) */
#define ID_SMAP          36 /**< \brief System Manager Access Port (SMAP) */
#define ID_CRCCU         37 /**< \brief CRC Calculation Unit (CRCCU) */
#define ID_USBC          38 /**< \brief USB 2.0 Interface (USBC) */
#define ID_PEVC          39 /**< \brief Peripheral Event Controller (PEVC) */

// Peripheral instances on HTOP2 bridge
#define ID_PM            64 /**< \brief Power Manager (PM) */
#define ID_CHIPID        65 /**< \brief Chip ID Registers (CHIPID) */
#define ID_SCIF          66 /**< \brief System Control Interface (SCIF) */
#define ID_FREQM         67 /**< \brief Frequency Meter (FREQM) */
#define ID_GPIO          68 /**< \brief General-Purpose Input/Output Controller (GPIO) */

// Peripheral instances on HTOP3 bridge
#define ID_BPM           96 /**< \brief Backup Power Manager (BPM) */
#define ID_BSCIF         97 /**< \brief Backup System Control Interface (BSCIF) */
#define ID_AST           98 /**< \brief Asynchronous Timer (AST) */
#define ID_WDT           99 /**< \brief Watchdog Timer (WDT) */
#define ID_EIC          100 /**< \brief External Interrupt Controller (EIC) */
#define ID_PICOUART     101 /**< \brief Pico UART (PICOUART) */

#define ID_PERIPH_COUNT 102 /**< \brief Max number of peripheral IDs */
/*@}*/

/* ************************************************************************** */
/**  BASE ADDRESS DEFINITIONS FOR SAM4LS4B */
/* ************************************************************************** */
/** \defgroup SAM4LS4B_base Peripheral Base Address Definitions */
/*@{*/

#if defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)
#define ABDACB                        (0x40064000) /**< \brief (ABDACB) APB Base Address */
#define ACIFC                         (0x40040000) /**< \brief (ACIFC) APB Base Address */
#define ADCIFE                        (0x40038000) /**< \brief (ADCIFE) APB Base Address */
#define AST                           (0x400F0800) /**< \brief (AST) APB Base Address */
#define BPM                           (0x400F0000) /**< \brief (BPM) APB Base Address */
#define BSCIF                         (0x400F0400) /**< \brief (BSCIF) APB Base Address */
#define CATB                          (0x40070000) /**< \brief (CATB) APB Base Address */
#define CHIPID                        (0x400E0400) /**< \brief (CHIPID) APB Base Address */
#define CRCCU                         (0x400A4000) /**< \brief (CRCCU) APB Base Address */
#define DACC                          (0x4003C000) /**< \brief (DACC) APB Base Address */
#define EIC                           (0x400F1000) /**< \brief (EIC) APB Base Address */
#define HFLASHC                       (0x400A0000) /**< \brief (HFLASHC) APB Base Address */
#define HFLASHC_FROW                  (0x00800200) /**< \brief (HFLASHC) FROW Base Address */
#define HFLASHC_USER                  (0x00800000) /**< \brief (HFLASHC) USER Base Address */
#define FREQM                         (0x400E0C00) /**< \brief (FREQM) APB Base Address */
#define GLOC                          (0x40060000) /**< \brief (GLOC) APB Base Address */
#define GPIO                          (0x400E1000) /**< \brief (GPIO) APB Base Address */
#define HCACHE                        (0x400A0400) /**< \brief (HCACHE) APB Base Address */
#define HMATRIX                       (0x400A1000) /**< \brief (HMATRIX) APB Base Address */
#define IISC                          (0x40004000) /**< \brief (IISC) APB Base Address */
#define PARC                          (0x4006C000) /**< \brief (PARC) APB Base Address */
#define PDCA                          (0x400A2000) /**< \brief (PDCA) APB Base Address */
#define PEVC                          (0x400A6000) /**< \brief (PEVC) APB Base Address */
#define PICOUART                      (0x400F1400) /**< \brief (PICOUART) APB Base Address */
#define PM                            (0x400E0000) /**< \brief (PM) APB Base Address */
#define SCIF                          (0x400E0800) /**< \brief (SCIF) APB Base Address */
#define SMAP                          (0x400A3000) /**< \brief (SMAP) APB Base Address */
#define SPI                           (0x40008000) /**< \brief (SPI) APB Base Address */
#define TC0                           (0x40010000) /**< \brief (TC0) APB Base Address */
#define TC1                           (0x40014000) /**< \brief (TC1) APB Base Address */
#define TRNG                          (0x40068000) /**< \brief (TRNG) APB Base Address */
#define TWIM0                         (0x40018000) /**< \brief (TWIM0) APB Base Address */
#define TWIM1                         (0x4001C000) /**< \brief (TWIM1) APB Base Address */
#define TWIM2                         (0x40078000) /**< \brief (TWIM2) APB Base Address */
#define TWIM3                         (0x4007C000) /**< \brief (TWIM3) APB Base Address */
#define TWIS0                         (0x40018400) /**< \brief (TWIS0) APB Base Address */
#define TWIS1                         (0x4001C400) /**< \brief (TWIS1) APB Base Address */
#define USART0                        (0x40024000) /**< \brief (USART0) APB Base Address */
#define USART1                        (0x40028000) /**< \brief (USART1) APB Base Address */
#define USART2                        (0x4002C000) /**< \brief (USART2) APB Base Address */
#define USART3                        (0x40030000) /**< \brief (USART3) APB Base Address */
#define USBC                          (0x400A5000) /**< \brief (USBC) APB Base Address */
#define WDT                           (0x400F0C00) /**< \brief (WDT) APB Base Address */
#else
#define ABDACB            ((Abdacb   *)0x40064000UL) /**< \brief (ABDACB) APB Base Address */
#define ABDACB_ADDR                   (0x40064000UL) /**< \brief (ABDACB) APB Base Address */
#define ABDACB_INST_NUM   1                          /**< \brief (ABDACB) Number of instances */
#define ABDACB_INSTS      { ABDACB }                 /**< \brief (ABDACB) Instances List */

#define ACIFC             ((Acifc    *)0x40040000UL) /**< \brief (ACIFC) APB Base Address */
#define ACIFC_ADDR                    (0x40040000UL) /**< \brief (ACIFC) APB Base Address */
#define ACIFC_INST_NUM    1                          /**< \brief (ACIFC) Number of instances */
#define ACIFC_INSTS       { ACIFC }                  /**< \brief (ACIFC) Instances List */

#define ADCIFE            ((Adcife   *)0x40038000UL) /**< \brief (ADCIFE) APB Base Address */
#define ADCIFE_ADDR                   (0x40038000UL) /**< \brief (ADCIFE) APB Base Address */
#define ADCIFE_INST_NUM   1                          /**< \brief (ADCIFE) Number of instances */
#define ADCIFE_INSTS      { ADCIFE }                 /**< \brief (ADCIFE) Instances List */

#define AST               ((Ast      *)0x400F0800UL) /**< \brief (AST) APB Base Address */
#define AST_ADDR                      (0x400F0800UL) /**< \brief (AST) APB Base Address */
#define AST_INST_NUM      1                          /**< \brief (AST) Number of instances */
#define AST_INSTS         { AST }                    /**< \brief (AST) Instances List */

#define BPM               ((Bpm      *)0x400F0000UL) /**< \brief (BPM) APB Base Address */
#define BPM_ADDR                      (0x400F0000UL) /**< \brief (BPM) APB Base Address */
#define BPM_INST_NUM      1                          /**< \brief (BPM) Number of instances */
#define BPM_INSTS         { BPM }                    /**< \brief (BPM) Instances List */

#define BSCIF             ((Bscif    *)0x400F0400UL) /**< \brief (BSCIF) APB Base Address */
#define BSCIF_ADDR                    (0x400F0400UL) /**< \brief (BSCIF) APB Base Address */
#define BSCIF_INST_NUM    1                          /**< \brief (BSCIF) Number of instances */
#define BSCIF_INSTS       { BSCIF }                  /**< \brief (BSCIF) Instances List */

#define CATB              ((Catb     *)0x40070000UL) /**< \brief (CATB) APB Base Address */
#define CATB_ADDR                     (0x40070000UL) /**< \brief (CATB) APB Base Address */
#define CATB_INST_NUM     1                          /**< \brief (CATB) Number of instances */
#define CATB_INSTS        { CATB }                   /**< \brief (CATB) Instances List */

#define CHIPID            ((Chipid   *)0x400E0400UL) /**< \brief (CHIPID) APB Base Address */
#define CHIPID_ADDR                   (0x400E0400UL) /**< \brief (CHIPID) APB Base Address */
#define CHIPID_INST_NUM   1                          /**< \brief (CHIPID) Number of instances */
#define CHIPID_INSTS      { CHIPID }                 /**< \brief (CHIPID) Instances List */

#define CRCCU             ((Crccu    *)0x400A4000UL) /**< \brief (CRCCU) APB Base Address */
#define CRCCU_ADDR                    (0x400A4000UL) /**< \brief (CRCCU) APB Base Address */
#define CRCCU_INST_NUM    1                          /**< \brief (CRCCU) Number of instances */
#define CRCCU_INSTS       { CRCCU }                  /**< \brief (CRCCU) Instances List */

#define DACC              ((Dacc     *)0x4003C000UL) /**< \brief (DACC) APB Base Address */
#define DACC_ADDR                     (0x4003C000UL) /**< \brief (DACC) APB Base Address */
#define DACC_INST_NUM     1                          /**< \brief (DACC) Number of instances */
#define DACC_INSTS        { DACC }                   /**< \brief (DACC) Instances List */

#define EIC               ((Eic      *)0x400F1000UL) /**< \brief (EIC) APB Base Address */
#define EIC_ADDR                      (0x400F1000UL) /**< \brief (EIC) APB Base Address */
#define EIC_INST_NUM      1                          /**< \brief (EIC) Number of instances */
#define EIC_INSTS         { EIC }                    /**< \brief (EIC) Instances List */

#define HFLASHC           ((Flashcalw *)0x400A0000UL) /**< \brief (HFLASHC) APB Base Address */
#define HFLASHC_ADDR                  (0x400A0000UL) /**< \brief (HFLASHC) APB Base Address */
#define HFLASHC_FROW                  (0x00800200UL) /**< \brief (HFLASHC) FROW Base Address */
#define HFLASHC_FROW_ADDR             (0x00800200UL) /**< \brief (HFLASHC) FROW Base Address */
#define HFLASHC_USER                  (0x00800000UL) /**< \brief (HFLASHC) USER Base Address */
#define HFLASHC_USER_ADDR             (0x00800000UL) /**< \brief (HFLASHC) USER Base Address */
#define FLASHCALW_INST_NUM 1                          /**< \brief (FLASHCALW) Number of instances */
#define FLASHCALW_INSTS   { HFLASHC }                /**< \brief (FLASHCALW) Instances List */

#define FREQM             ((Freqm    *)0x400E0C00UL) /**< \brief (FREQM) APB Base Address */
#define FREQM_ADDR                    (0x400E0C00UL) /**< \brief (FREQM) APB Base Address */
#define FREQM_INST_NUM    1                          /**< \brief (FREQM) Number of instances */
#define FREQM_INSTS       { FREQM }                  /**< \brief (FREQM) Instances List */

#define GLOC              ((Gloc     *)0x40060000UL) /**< \brief (GLOC) APB Base Address */
#define GLOC_ADDR                     (0x40060000UL) /**< \brief (GLOC) APB Base Address */
#define GLOC_INST_NUM     1                          /**< \brief (GLOC) Number of instances */
#define GLOC_INSTS        { GLOC }                   /**< \brief (GLOC) Instances List */

#define GPIO              ((Gpio     *)0x400E1000UL) /**< \brief (GPIO) APB Base Address */
#define GPIO_ADDR                     (0x400E1000UL) /**< \brief (GPIO) APB Base Address */
#define GPIO_INST_NUM     1                          /**< \brief (GPIO) Number of instances */
#define GPIO_INSTS        { GPIO }                   /**< \brief (GPIO) Instances List */

#define HCACHE            ((Hcache   *)0x400A0400UL) /**< \brief (HCACHE) APB Base Address */
#define HCACHE_ADDR                   (0x400A0400UL) /**< \brief (HCACHE) APB Base Address */
#define HCACHE_INST_NUM   1                          /**< \brief (HCACHE) Number of instances */
#define HCACHE_INSTS      { HCACHE }                 /**< \brief (HCACHE) Instances List */

#define HMATRIX           ((Hmatrixb *)0x400A1000UL) /**< \brief (HMATRIX) APB Base Address */
#define HMATRIX_ADDR                  (0x400A1000UL) /**< \brief (HMATRIX) APB Base Address */
#define HMATRIXB_INST_NUM 1                          /**< \brief (HMATRIXB) Number of instances */
#define HMATRIXB_INSTS    { HMATRIX }                /**< \brief (HMATRIXB) Instances List */

#define IISC              ((Iisc     *)0x40004000UL) /**< \brief (IISC) APB Base Address */
#define IISC_ADDR                     (0x40004000UL) /**< \brief (IISC) APB Base Address */
#define IISC_INST_NUM     1                          /**< \brief (IISC) Number of instances */
#define IISC_INSTS        { IISC }                   /**< \brief (IISC) Instances List */

#define PARC              ((Parc     *)0x4006C000UL) /**< \brief (PARC) APB Base Address */
#define PARC_ADDR                     (0x4006C000UL) /**< \brief (PARC) APB Base Address */
#define PARC_INST_NUM     1                          /**< \brief (PARC) Number of instances */
#define PARC_INSTS        { PARC }                   /**< \brief (PARC) Instances List */

#define PDCA              ((Pdca     *)0x400A2000UL) /**< \brief (PDCA) APB Base Address */
#define PDCA_ADDR                     (0x400A2000UL) /**< \brief (PDCA) APB Base Address */
#define PDCA_INST_NUM     1                          /**< \brief (PDCA) Number of instances */
#define PDCA_INSTS        { PDCA }                   /**< \brief (PDCA) Instances List */

#define PEVC              ((Pevc     *)0x400A6000UL) /**< \brief (PEVC) APB Base Address */
#define PEVC_ADDR                     (0x400A6000UL) /**< \brief (PEVC) APB Base Address */
#define PEVC_INST_NUM     1                          /**< \brief (PEVC) Number of instances */
#define PEVC_INSTS        { PEVC }                   /**< \brief (PEVC) Instances List */

#define PICOUART          ((Picouart *)0x400F1400UL) /**< \brief (PICOUART) APB Base Address */
#define PICOUART_ADDR                 (0x400F1400UL) /**< \brief (PICOUART) APB Base Address */
#define PICOUART_INST_NUM 1                          /**< \brief (PICOUART) Number of instances */
#define PICOUART_INSTS    { PICOUART }               /**< \brief (PICOUART) Instances List */

#define PM                ((Pm       *)0x400E0000UL) /**< \brief (PM) APB Base Address */
#define PM_ADDR                       (0x400E0000UL) /**< \brief (PM) APB Base Address */
#define PM_INST_NUM       1                          /**< \brief (PM) Number of instances */
#define PM_INSTS          { PM }                     /**< \brief (PM) Instances List */

#define SCIF              ((Scif     *)0x400E0800UL) /**< \brief (SCIF) APB Base Address */
#define SCIF_ADDR                     (0x400E0800UL) /**< \brief (SCIF) APB Base Address */
#define SCIF_INST_NUM     1                          /**< \brief (SCIF) Number of instances */
#define SCIF_INSTS        { SCIF }                   /**< \brief (SCIF) Instances List */

#define SMAP              ((Smap     *)0x400A3000UL) /**< \brief (SMAP) APB Base Address */
#define SMAP_ADDR                     (0x400A3000UL) /**< \brief (SMAP) APB Base Address */
#define SMAP_INST_NUM     1                          /**< \brief (SMAP) Number of instances */
#define SMAP_INSTS        { SMAP }                   /**< \brief (SMAP) Instances List */

#define SPI               ((Spi      *)0x40008000UL) /**< \brief (SPI) APB Base Address */
#define SPI_ADDR                      (0x40008000UL) /**< \brief (SPI) APB Base Address */
#define SPI_INST_NUM      1                          /**< \brief (SPI) Number of instances */
#define SPI_INSTS         { SPI }                    /**< \brief (SPI) Instances List */

#define TC0               ((Tc       *)0x40010000UL) /**< \brief (TC0) APB Base Address */
#define TC0_ADDR                      (0x40010000UL) /**< \brief (TC0) APB Base Address */
#define TC1               ((Tc       *)0x40014000UL) /**< \brief (TC1) APB Base Address */
#define TC1_ADDR                      (0x40014000UL) /**< \brief (TC1) APB Base Address */
#define TC_INST_NUM       2                          /**< \brief (TC) Number of instances */
#define TC_INSTS          { TC0, TC1 }               /**< \brief (TC) Instances List */

#define TRNG              ((Trng     *)0x40068000UL) /**< \brief (TRNG) APB Base Address */
#define TRNG_ADDR                     (0x40068000UL) /**< \brief (TRNG) APB Base Address */
#define TRNG_INST_NUM     1                          /**< \brief (TRNG) Number of instances */
#define TRNG_INSTS        { TRNG }                   /**< \brief (TRNG) Instances List */

#define TWIM0             ((Twim     *)0x40018000UL) /**< \brief (TWIM0) APB Base Address */
#define TWIM0_ADDR                    (0x40018000UL) /**< \brief (TWIM0) APB Base Address */
#define TWIM1             ((Twim     *)0x4001C000UL) /**< \brief (TWIM1) APB Base Address */
#define TWIM1_ADDR                    (0x4001C000UL) /**< \brief (TWIM1) APB Base Address */
#define TWIM2             ((Twim     *)0x40078000UL) /**< \brief (TWIM2) APB Base Address */
#define TWIM2_ADDR                    (0x40078000UL) /**< \brief (TWIM2) APB Base Address */
#define TWIM3             ((Twim     *)0x4007C000UL) /**< \brief (TWIM3) APB Base Address */
#define TWIM3_ADDR                    (0x4007C000UL) /**< \brief (TWIM3) APB Base Address */
#define TWIM_INST_NUM     4                          /**< \brief (TWIM) Number of instances */
#define TWIM_INSTS        { TWIM0, TWIM1, TWIM2, TWIM3 } /**< \brief (TWIM) Instances List */

#define TWIS0             ((Twis     *)0x40018400UL) /**< \brief (TWIS0) APB Base Address */
#define TWIS0_ADDR                    (0x40018400UL) /**< \brief (TWIS0) APB Base Address */
#define TWIS1             ((Twis     *)0x4001C400UL) /**< \brief (TWIS1) APB Base Address */
#define TWIS1_ADDR                    (0x4001C400UL) /**< \brief (TWIS1) APB Base Address */
#define TWIS_INST_NUM     2                          /**< \brief (TWIS) Number of instances */
#define TWIS_INSTS        { TWIS0, TWIS1 }           /**< \brief (TWIS) Instances List */

#define USART0            ((Usart    *)0x40024000UL) /**< \brief (USART0) APB Base Address */
#define USART0_ADDR                   (0x40024000UL) /**< \brief (USART0) APB Base Address */
#define USART1            ((Usart    *)0x40028000UL) /**< \brief (USART1) APB Base Address */
#define USART1_ADDR                   (0x40028000UL) /**< \brief (USART1) APB Base Address */
#define USART2            ((Usart    *)0x4002C000UL) /**< \brief (USART2) APB Base Address */
#define USART2_ADDR                   (0x4002C000UL) /**< \brief (USART2) APB Base Address */
#define USART3            ((Usart    *)0x40030000UL) /**< \brief (USART3) APB Base Address */
#define USART3_ADDR                   (0x40030000UL) /**< \brief (USART3) APB Base Address */
#define USART_INST_NUM    4                          /**< \brief (USART) Number of instances */
#define USART_INSTS       { USART0, USART1, USART2, USART3 } /**< \brief (USART) Instances List */

#define USBC              ((Usbc     *)0x400A5000UL) /**< \brief (USBC) APB Base Address */
#define USBC_ADDR                     (0x400A5000UL) /**< \brief (USBC) APB Base Address */
#define USBC_INST_NUM     1                          /**< \brief (USBC) Number of instances */
#define USBC_INSTS        { USBC }                   /**< \brief (USBC) Instances List */

#define WDT               ((Wdt      *)0x400F0C00UL) /**< \brief (WDT) APB Base Address */
#define WDT_ADDR                      (0x400F0C00UL) /**< \brief (WDT) APB Base Address */
#define WDT_INST_NUM      1                          /**< \brief (WDT) Number of instances */
#define WDT_INSTS         { WDT }                    /**< \brief (WDT) Instances List */

#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/*@}*/

/* ************************************************************************** */
/**  GPIO DEFINITIONS FOR SAM4LS4B */
/* ************************************************************************** */
/** \defgroup SAM4LS4B_gpio GPIO Definitions */
/*@{*/

#include "pio/sam4ls4b.h"
/*@}*/

/* ************************************************************************** */
/**  ADDITIONAL DEFINITIONS FOR COMPATIBILITY */
/* ************************************************************************** */
/** \addtogroup SAM4LS4B_compat Definitions */
/*@{*/
// These defines are used to keep compatibility with existing 
// sam/drivers/usart implementation from SAM3/4 products with SAM4L product.
#define US_MR_USART_MODE_HW_HANDSHAKING  US_MR_USART_MODE_HARDWARE
#define US_MR_USART_MODE_IS07816_T_0     US_MR_USART_MODE_ISO7816_T0
#define US_MR_USART_MODE_IS07816_T_1     US_MR_USART_MODE_ISO7816_T1
#define US_MR_NBSTOP_2_BIT    US_MR_NBSTOP_2
#define US_MR_NBSTOP_1_5_BIT  US_MR_NBSTOP_1_5
#define US_MR_NBSTOP_1_BIT    US_MR_NBSTOP_1
#define US_MR_CHRL_5_BIT      US_MR_CHRL_5
#define US_MR_CHRL_6_BIT      US_MR_CHRL_6
#define US_MR_CHRL_7_BIT      US_MR_CHRL_7
#define US_MR_CHRL_8_BIT      US_MR_CHRL_8
#define US_MR_PAR_NO          US_MR_PAR_NONE
#define US_MR_PAR_MULTIDROP   US_MR_PAR_MULTI
#define US_IF                 US_IFR
#define US_WPSR_WPVS          US_WPSR_WPV_1

#define USBC_UPCFG0_PBK_Msk   (0x1u << USBC_UPCFG0_PBK_Pos)

// These defines for homogeneity with other SAM header files.
#define CHIP_FREQ_FWS_0       (18000000UL) /**< \brief Maximum operating frequency when FWS is 0 */
#define CHIP_FREQ_FWS_1       (36000000UL) /**< \brief Maximum operating frequency when FWS is 1 */
// WARNING NOTE: these are preliminary values.
#define CHIP_FREQ_FLASH_HSEN_FWS_0 (18000000UL) /**< \brief Maximum operating frequency when FWS is 0 and the FLASH HS mode is enabled */
#define CHIP_FREQ_FLASH_HSEN_FWS_1 (36000000UL) /**< \brief Maximum operating frequency when FWS is 1 and the FLASH HS mode is enabled */

// These defines are used to keep compatibility with existing 
// sam/drivers/tc implementation from SAM3/4 products with SAM4L product. 
#define TC_CMR_LDRA_RISING    TC_CMR_LDRA_POS_EDGE_TIOA
#define TC_CMR_LDRB_FALLING   TC_CMR_LDRB_NEG_EDGE_TIOA
#define TC_CMR_ETRGEDG_FALLING TC_CMR_ETRGEDG_NEG_EDGE

// These defines are used to keep compatibility with existing 
// sam/drivers/spi implementation from SAM3/4 products with SAM4L product. 
#define SPI_CSR_BITS_8_BIT    SPI_CSR_BITS_8_BPT
#define SPI_WPCR_SPIWPKEY_VALUE SPI_WPCR_WPKEY_VALUE
#define SPI_WPCR_SPIWPEN      SPI_WPCR_WPEN

// These defines are used to keep compatibility with existing 
// sam/drivers/crccu implementation from SAM3/4 products with SAM4L product. 
#define CRCCU_DMA_EN          CRCCU_DMAEN
#define CRCCU_DMA_DIS         CRCCU_DMADIS
#define CRCCU_DMA_SR          CRCCU_DMASR
#define CRCCU_DMA_IER         CRCCU_DMAIER
#define CRCCU_DMA_IDR         CRCCU_DMAIDR
#define CRCCU_DMA_IMR         CRCCU_DMAIMR
#define CRCCU_DMA_ISR         CRCCU_DMAISR
#define CRCCU_DMA_EN_DMAEN    CRCCU_DMAEN_DMAEN
#define CRCCU_DMA_DIS_DMADIS  CRCCU_DMADIS_DMADIS
#define CRCCU_DMA_SR_DMASR    CRCCU_DMASR_DMASR
#define CRCCU_DMA_IER_DMAIER  CRCCU_DMAIER_DMAIER
#define CRCCU_DMA_IDR_DMAIDR  CRCCU_DMAIDR_DMAIDR
#define CRCCU_DMA_IMR_DMAIMR  CRCCU_DMAIMR_DMAIMR
#define CRCCU_DMA_ISR_DMAISR  CRCCU_DMAISR_DMAISR
/*@}*/

/* ************************************************************************** */
/**  MEMORY MAPPING DEFINITIONS FOR SAM4LS4B */
/* ************************************************************************** */

#define FLASH_SIZE            _UL_(0x00040000) /* 256 kB */
#define FLASH_PAGE_SIZE       512
#define FLASH_NB_OF_PAGES     512
#define FLASH_USER_PAGE_SIZE  512
#define HRAMC0_SIZE           _UL_(0x00008000) /* 32 kB */
#define HRAMC1_SIZE           _UL_(0x00000800) /* 2 kB */

#define FLASH_ADDR            _UL_(0x00000000) /**< FLASH base address */
#define FLASH_USER_PAGE_ADDR  _UL_(0x00800000) /**< FLASH_USER_PAGE base address */
#define HRAMC0_ADDR           _UL_(0x20000000) /**< HRAMC0 base address */
#define HRAMC1_ADDR           _UL_(0x21000000) /**< HRAMC1 base address */
#define HTOP0_ADDR            _UL_(0x40000000) /**< HTOP0 base address */
#define HTOP1_ADDR            _UL_(0x400A0000) /**< HTOP1 base address */
#define HTOP2_ADDR            _UL_(0x400E0000) /**< HTOP2 base address */
#define HTOP3_ADDR            _UL_(0x400F0000) /**< HTOP3 base address */

#define DSU_DID_RESETVALUE    _UL_(0xAB0A09E0)

/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR SAM4LS4B */
/* ************************************************************************** */


#ifdef __cplusplus
}
#endif

/*@}*/

#endif /* SAM4LS4B_H */
