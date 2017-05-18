#ifndef VARIANT_H
#define VARIANT_H

//On-board LED pin number           PIN  // Arduino Pin Number         
#define LED_BUILTIN                 PD12 // 18
#define LED_GREEN                   LED_BUILTIN
#define LED_BLUE                    PD15 // 58
#define LED_RED                     PD14 // 19
#define LED_ORANGE                  PD13 // 57
#define LED_RED_OTG_OVERCURRENT     PD5 // be careful with this led. When using it configure the output as PULL_UP.

//On-board user button
#define USER_BTN                    PA0  // 2


// Connected to on board LIS3DSH accelerometer, CS: PE3
#define MOSI                        PA7
#define MISO                        PA6
#define SCK                         PA5
#define SS                          PA4

// Connected to on board CS43L22 audio
#define SDA                         PB9
#define SCL                         PB6

enum {
   PA0 ,
   PA1 ,
   PA2 ,
   PA3 ,
   PA4 ,
   PA5 ,
   PA6 ,
   PA7 ,
   PA8 ,
   PA9 ,
   PA10,
   PA11,
   PA12,
   PA13,
   PA14,
   PA15,
   PB0 ,
   PB1 ,
   PB2 ,
   PB3 ,
   PB4 ,
   PB5 ,
   PB6 ,
   PB7 ,
   PB8 ,
   PB9 ,
   PB10,
   PB11,
   PB12,
   PB13,
   PB14,
   PB15,
   PC0 ,
   PC1 ,
   PC2 ,
   PC3 ,
   PC4 ,
   PC5 ,
   PC6 ,
   PC7 ,
   PC8 ,
   PC9 ,
   PC10,
   PC11,
   PC12,
   PC13,
   PC14,
   PC15,
   PD0 ,
   PD1 ,
   PD2 ,
   PD3 ,
   PD4 ,
   PD5 ,
   PD6 ,
   PD7 ,
   PD8 ,
   PD9 ,
   PD10,
   PD11,
   PD12,
   PD13,
   PD14,
   PD15,
   PE0 ,
   PE1 ,
   PE2 ,
   PE3 ,
   PE4 ,
   PE5 ,
   PE6 ,
   PE7 ,
   PE8 ,
   PE9 ,
   PE10,
   PE11,
   PE12,
   PE13,
   PE14,
   PE15,
   PH0 ,
   PH1 ,
NUM_PINS,
};

#endif
