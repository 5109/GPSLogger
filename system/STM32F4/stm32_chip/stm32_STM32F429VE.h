//Autogenerated file
//MCU name: STM32F429VE
//MCU  xml: STM32F429V(E-G-I)Tx.xml
//GPIO remap/alternate function xml: GPIO-STM32F427_gpio_v1_0_Modes.xml


#define VARIANT_PIN_LIST_DEFAULT \
   PIN(A,0), \
   PIN(A,1), \
   PIN(A,2), \
   PIN(A,3), \
   PIN(A,4), \
   PIN(A,5), \
   PIN(A,6), \
   PIN(A,7), \
   PIN(A,8), \
   PIN(A,9), \
   PIN(A,10), \
   PIN(A,11), \
   PIN(A,12), \
   PIN(A,13), \
   PIN(A,14), \
   PIN(A,15), \
   PIN(B,0), \
   PIN(B,1), \
   PIN(B,2), \
   PIN(B,3), \
   PIN(B,4), \
   PIN(B,5), \
   PIN(B,6), \
   PIN(B,7), \
   PIN(B,8), \
   PIN(B,9), \
   PIN(B,10), \
   PIN(B,11), \
   PIN(B,12), \
   PIN(B,13), \
   PIN(B,14), \
   PIN(B,15), \
   PIN(C,0), \
   PIN(C,1), \
   PIN(C,2), \
   PIN(C,3), \
   PIN(C,4), \
   PIN(C,5), \
   PIN(C,6), \
   PIN(C,7), \
   PIN(C,8), \
   PIN(C,9), \
   PIN(C,10), \
   PIN(C,11), \
   PIN(C,12), \
   PIN(C,13), \
   PIN(C,14), \
   PIN(C,15), \
   PIN(D,0), \
   PIN(D,1), \
   PIN(D,2), \
   PIN(D,3), \
   PIN(D,4), \
   PIN(D,5), \
   PIN(D,6), \
   PIN(D,7), \
   PIN(D,8), \
   PIN(D,9), \
   PIN(D,10), \
   PIN(D,11), \
   PIN(D,12), \
   PIN(D,13), \
   PIN(D,14), \
   PIN(D,15), \
   PIN(E,0), \
   PIN(E,1), \
   PIN(E,2), \
   PIN(E,3), \
   PIN(E,4), \
   PIN(E,5), \
   PIN(E,6), \
   PIN(E,7), \
   PIN(E,8), \
   PIN(E,9), \
   PIN(E,10), \
   PIN(E,11), \
   PIN(E,12), \
   PIN(E,13), \
   PIN(E,14), \
   PIN(E,15), \
   PIN(H,0), \
   PIN(H,1), \



// --------------------ADC--------------------

// --------------------I2C--------------------

const stm32_af_pin_list_type chip_af_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_6  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_8  , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_10 , GPIO_AF4_I2C2  }, 
//I2C3
    { I2C3  , GPIOA, GPIO_PIN_8  , GPIO_AF4_I2C3  }, 
}; 

const stm32_af_pin_list_type chip_af_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_7  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_9  , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_11 , GPIO_AF4_I2C2  }, 
//I2C3
    { I2C3  , GPIOC, GPIO_PIN_9  , GPIO_AF4_I2C3  }, 
}; 

// --------------------I2S--------------------
#define STM32_CHIP_HAS_I2S

const stm32_af_pin_list_type chip_af_i2s_ck [] = {
//I2S2
    { SPI2  , GPIOB, GPIO_PIN_10 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOB, GPIO_PIN_13 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOD, GPIO_PIN_3  , GPIO_AF5_SPI2  }, 
//I2S3
    { SPI3  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_10 , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_i2s_mck [] = {
//I2S2
    { SPI2  , GPIOC, GPIO_PIN_6  , GPIO_AF5_SPI2  }, 
//I2S3
    { SPI3  , GPIOC, GPIO_PIN_7  , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_i2s_sd [] = {
//I2S2
    { SPI2  , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOC, GPIO_PIN_3  , GPIO_AF5_SPI2  }, 
//I2S3
    { SPI3  , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_12 , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOD, GPIO_PIN_6  , GPIO_AF5_SPI1  }, 
}; 

const stm32_af_pin_list_type chip_af_i2s_ws [] = {
//I2S2
    { SPI2  , GPIOB, GPIO_PIN_9  , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOB, GPIO_PIN_12 , GPIO_AF5_SPI2  }, 
//I2S3
    { SPI3  , GPIOA, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOA, GPIO_PIN_15 , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_i2s_ext_sd [] = {
//I2S2
    { SPI2  , GPIOB, GPIO_PIN_14 , GPIO_AF6_I2S2ext}, 
    { SPI2  , GPIOC, GPIO_PIN_2  , GPIO_AF6_I2S2ext}, 
//I2S3
    { SPI3  , GPIOB, GPIO_PIN_4  , GPIO_AF7_I2S3ext}, 
    { SPI3  , GPIOC, GPIO_PIN_11 , GPIO_AF5_I2S3ext}, 
}; 

// --------------------SDIO--------------------
#define STM32_CHIP_HAS_SDIO

const stm32_af_pin_list_type chip_af_sdio_ck [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_12 , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_cmd [] = {
//SDIO
    { SDIO  , GPIOD, GPIO_PIN_2  , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d0 [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_8  , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d1 [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_9  , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d2 [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_10 , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d3 [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_11 , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d4 [] = {
//SDIO
    { SDIO  , GPIOB, GPIO_PIN_8  , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d5 [] = {
//SDIO
    { SDIO  , GPIOB, GPIO_PIN_9  , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d6 [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_6  , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d7 [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_7  , GPIO_AF12_SDIO }, 
}; 

// --------------------SPI--------------------

const stm32_af_pin_list_type chip_af_spi_miso [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_6  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_4  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_14 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOC, GPIO_PIN_2  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_11 , GPIO_AF6_SPI3  }, 
//SPI4
    { SPI4  , GPIOE, GPIO_PIN_5  , GPIO_AF5_SPI4  }, 
    { SPI4  , GPIOE, GPIO_PIN_13 , GPIO_AF5_SPI4  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_mosi [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_7  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_5  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOC, GPIO_PIN_3  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_12 , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOD, GPIO_PIN_6  , GPIO_AF5_SPI1  }, 
//SPI4
    { SPI4  , GPIOE, GPIO_PIN_6  , GPIO_AF5_SPI4  }, 
    { SPI4  , GPIOE, GPIO_PIN_14 , GPIO_AF5_SPI4  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_nss [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_4  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOA, GPIO_PIN_15 , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_9  , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOB, GPIO_PIN_12 , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOA, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOA, GPIO_PIN_15 , GPIO_AF6_SPI3  }, 
//SPI4
    { SPI4  , GPIOE, GPIO_PIN_4  , GPIO_AF5_SPI4  }, 
    { SPI4  , GPIOE, GPIO_PIN_11 , GPIO_AF5_SPI4  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_sck [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_5  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_3  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_10 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOB, GPIO_PIN_13 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOD, GPIO_PIN_3  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_10 , GPIO_AF6_SPI3  }, 
//SPI4
    { SPI4  , GPIOE, GPIO_PIN_2  , GPIO_AF5_SPI4  }, 
    { SPI4  , GPIOE, GPIO_PIN_12 , GPIO_AF5_SPI4  }, 
}; 

// --------------------TIM--------------------

// --------------------TIM1--------------------

// --------------------USART--------------------

const stm32_af_pin_list_type chip_af_usart_rx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_10 , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_7  , GPIO_AF7_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_3  , GPIO_AF7_USART2}, 
    { USART2, GPIOD, GPIO_PIN_6  , GPIO_AF7_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_11 , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_11 , GPIO_AF7_USART3}, 
    { USART3, GPIOD, GPIO_PIN_9  , GPIO_AF7_USART3}, 
//USART6
    { USART6, GPIOC, GPIO_PIN_7  , GPIO_AF8_USART6}, 
}; 

const stm32_af_pin_list_type chip_af_usart_tx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_9  , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_6  , GPIO_AF7_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_2  , GPIO_AF7_USART2}, 
    { USART2, GPIOD, GPIO_PIN_5  , GPIO_AF7_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_10 , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_10 , GPIO_AF7_USART3}, 
    { USART3, GPIOD, GPIO_PIN_8  , GPIO_AF7_USART3}, 
//USART6
    { USART6, GPIOC, GPIO_PIN_6  , GPIO_AF8_USART6}, 
}; 

const stm32_chip_adc1_channel_type chip_adc1_channel[] = {
    { GPIOA, GPIO_PIN_0  , ADC_CHANNEL_0  }, 
    { GPIOA, GPIO_PIN_1  , ADC_CHANNEL_1  }, 
    { GPIOA, GPIO_PIN_2  , ADC_CHANNEL_2  }, 
    { GPIOA, GPIO_PIN_3  , ADC_CHANNEL_3  }, 
    { GPIOA, GPIO_PIN_4  , ADC_CHANNEL_4  }, 
    { GPIOA, GPIO_PIN_5  , ADC_CHANNEL_5  }, 
    { GPIOA, GPIO_PIN_6  , ADC_CHANNEL_6  }, 
    { GPIOA, GPIO_PIN_7  , ADC_CHANNEL_7  }, 
    { GPIOB, GPIO_PIN_0  , ADC_CHANNEL_8  }, 
    { GPIOB, GPIO_PIN_1  , ADC_CHANNEL_9  }, 
    { GPIOC, GPIO_PIN_0  , ADC_CHANNEL_10 }, 
    { GPIOC, GPIO_PIN_1  , ADC_CHANNEL_11 }, 
    { GPIOC, GPIO_PIN_2  , ADC_CHANNEL_12 }, 
    { GPIOC, GPIO_PIN_3  , ADC_CHANNEL_13 }, 
    { GPIOC, GPIO_PIN_4  , ADC_CHANNEL_14 }, 
    { GPIOC, GPIO_PIN_5  , ADC_CHANNEL_15 }, 
};

const stm32_clock_freq_list_type chip_clock_freq_list[] = {
    {I2C1  , HAL_RCC_GetPCLK1Freq },  
    {I2C2  , HAL_RCC_GetPCLK1Freq },  
    {I2C3  , HAL_RCC_GetPCLK1Freq },  
    {SPI2  , HAL_RCC_GetPCLK1Freq },  
    {SPI3  , HAL_RCC_GetPCLK1Freq },  
    {USART2, HAL_RCC_GetPCLK1Freq },  
    {USART3, HAL_RCC_GetPCLK1Freq },  

    {SPI1  , HAL_RCC_GetPCLK2Freq },  
    {SPI4  , HAL_RCC_GetPCLK2Freq },  
    {USART1, HAL_RCC_GetPCLK2Freq },  
    {USART6, HAL_RCC_GetPCLK2Freq },  
};

