#ifndef _NID27_STM32F103xx_RCC_
#define _NID27_STM32F103xx_RCC_

#include "nidsint.h"
#include "placeholder.h"

#define RCC_CR_OFFSET_VALUE 0x00U
/*Reset val = 0x0000XX83 XX assumed 00*/
#define RCC_CR_RESET_VALUE 0x00000083U
typedef struct RCC_CR{
    volatile uint32_t HSION : 1;
    volatile uint32_t HSIRDY : 1;
    volatile uint32_t RESERVED_1 : 1;
    volatile uint32_t HSITRIM : 5;
    volatile uint32_t HSICAL : 8;
    volatile uint32_t HSEON : 1;
    volatile uint32_t HSERDY : 1;
    volatile uint32_t HSEBYP : 1;
    volatile uint32_t CSSON : 1;
    volatile uint32_t RESERVED_2 : 4;
    volatile uint32_t PLLON : 1;
    volatile uint32_t PLLRDY : 1;
    volatile uint32_t RESERVED_3 : 6;
}RCC_CR_ST;

#define RCC_CFGR_OFFSET_VALUE 0x04U
#define RCC_CFGR_RESET_VALUE 0x00000000U
typedef struct RCC_CFGR{
    volatile uint32_t SW : 2;
    volatile uint32_t SWS : 2;
    volatile uint32_t HPRE : 4;
    volatile uint32_t PPRE1 : 3;
    volatile uint32_t PPRE2 : 3;
    volatile uint32_t ADCPRE : 2;
    volatile uint32_t PLLSRC : 1;
    volatile uint32_t PLLXTPRE : 1;
    volatile uint32_t PLLMUL : 4;
    volatile uint32_t USBPRE : 1;
    volatile uint32_t RESERVED_1 : 1;
    volatile uint32_t MCO : 3;
    volatile uint32_t RESERVED_2 : 5;
}RCC_CFGR_ST;

typedef struct RCC_CIR{
    PLACEHOLDER32_ST placeholder;
}RCC_CIR_ST;

typedef struct RCC_APB2RSTR{
    PLACEHOLDER32_ST placeholder;
}RCC_APB2RSTR_ST;

typedef struct RCC_APB1RSTR{
    PLACEHOLDER32_ST placeholder;
}RCC_APB1RSTR_ST;

#define RCC_AHBENR_OFFSET_VALUE 0x14U
#define RCC_AHBENR_RESET_VALUE 0x00000014U
typedef struct RCC_AHBENR{
    volatile uint32_t DMA1EN : 1;
    volatile uint32_t DMA2EN : 1;
    volatile uint32_t SRAMEN : 1;
    volatile uint32_t RESERVED_1 : 1;
    volatile uint32_t FLITFEN : 1;
    volatile uint32_t RESERVED_2 : 1;
    volatile uint32_t CRCEN : 1;
    volatile uint32_t RESERVED_3 : 1;
    volatile uint32_t FSMCEN : 1;
    volatile uint32_t RESERVED_4 : 1;
    volatile uint32_t SDIOEN : 1;
    volatile uint32_t RESERVED_5 : 21;
}RCC_AHBENR_ST;

#define RCC_APB2ENR_OFFSET_VALUE 0x18U
#define RCC_APB2ENR_RESET_VALUE 0x00000000U
typedef struct RCC_APB2ENR{
    volatile uint32_t AFIOEN : 1;
    volatile uint32_t RESERVED_1 : 1;
    volatile uint32_t IOPAEN : 1;
    volatile uint32_t IOPBEN : 1;
    volatile uint32_t IOPCEN : 1;
    volatile uint32_t IOPDEN : 1;
    volatile uint32_t IOPEEN : 1;
    volatile uint32_t IOPFEN : 1;
    volatile uint32_t IOPGEN : 1;
    volatile uint32_t ADC1EN : 1;
    volatile uint32_t ADC2EN : 1;
    volatile uint32_t TIM1EN : 1;
    volatile uint32_t SPI1EN : 1;
    volatile uint32_t TIM8EN : 1;
    volatile uint32_t USART1EN : 1;
    volatile uint32_t ADC3EN : 1;
    volatile uint32_t RESERVED_2 : 3;
    volatile uint32_t TIM9EN : 1;
    volatile uint32_t TIM10EN : 1;
    volatile uint32_t TIM11EN : 1;
    volatile uint32_t RESERVED_3 : 10;
}RCC_APB2ENR_ST;

#define RCC_APB1ENR_OFFSET_VALUE 0x1cU
#define RCC_APB1ENR_RESET_VALUE 0x00000000U
typedef struct RCC_APB1ENR{
    volatile uint32_t TIM2EN : 1;
    volatile uint32_t TIM3EN : 1;
    volatile uint32_t TIM4EN : 1;
    volatile uint32_t TIM5EN : 1;
    volatile uint32_t TIM6EN : 1;
    volatile uint32_t TIM7EN : 1;
    volatile uint32_t TIM12EN : 1;
    volatile uint32_t TIM13EN : 1;
    volatile uint32_t TIM14EN : 1;
    volatile uint32_t RESERVED_1 : 2;
    volatile uint32_t WWDGEN : 1;
    volatile uint32_t RESERVED_2 : 2;
    volatile uint32_t SPI2EN : 1;
    volatile uint32_t SPI3EN : 1;
    volatile uint32_t RESERVED_3 : 1;
    volatile uint32_t USART2EN : 1;
    volatile uint32_t USART3EN : 1;
    volatile uint32_t UART4EN : 1;
    volatile uint32_t UART5EN : 1;
    volatile uint32_t I2C1EN : 1;
    volatile uint32_t I2C2EN : 1;
    volatile uint32_t USBEN : 1;
    volatile uint32_t RESERVED_4 : 1;
    volatile uint32_t CANEN : 1;
    volatile uint32_t RESERVED_5 : 1;
    volatile uint32_t BKPEN : 1;
    volatile uint32_t PWREN : 1;
    volatile uint32_t DACEN : 1;
    volatile uint32_t RESERVED_6 : 2;
}RCC_APB1ENR_ST;

typedef struct RCC_BDCR{
    PLACEHOLDER32_ST placeholder;
}RCC_BDCR_ST;

typedef struct RCC_CSR{
    PLACEHOLDER32_ST placeholder;
}RCC_CSR_ST;

#endif