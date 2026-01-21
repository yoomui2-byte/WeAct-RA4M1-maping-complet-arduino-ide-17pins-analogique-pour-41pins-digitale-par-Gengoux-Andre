// WeAct RA4M1 / UNO R4 Minima Custom – Décembre 2025 par Gengoux André

#pragma once 

#define PIN(X,Y) (X * 16 + Y)

// Pin count
// ----
#ifdef __cplusplus
extern "C" unsigned int PINCOUNT_fn();
#endif
#define PINS_COUNT           (PINCOUNT_fn())
#define NUM_DIGITAL_PINS     (41u)
#define NUM_ANALOG_INPUTS    (17u)
#define NUM_ANALOG_OUTPUTS   (1u)

#define PIN_A0   (0u)
#define PIN_A1   (1u)
#define PIN_A2   (2u)
#define PIN_A3   (3u)
#define PIN_A4   (4u)
#define PIN_A5   (5u)
#define PIN_A6   (6u) // NEW PIN ANALOG   
#define PIN_A7   (7u) // NEW PIN ANALOG
#define PIN_A8   (8u) // NEW PIN ANALOG
#define PIN_A9   (9u) // NEW PIN ANALOG
#define PIN_A10  (10u) // NEW PIN ANALOG
#define PIN_A11  (11u) // NEW PIN ANALOG
#define PIN_A12  (12u) // NEW PIN ANALOG
#define PIN_A13  (20u) // NEW PIN ANALOG
#define PIN_A14  (21u) // NEW PIN ANALOG
#define PIN_A15  (22u)  // NEW PIN ANALOG
#define PIN_A16  (23u)  // NEW PIN ANALOG

#define DAC8_HOWMANY (0)
#define DAC12_HOWMANY (1)
#define DAC        PIN_A4
#define IS_DAC(x)   (x == DAC ? true : false)
#define DAC_ADDRESS_12_CH0          R_DAC_BASE

#undef A0
#undef A1
#undef A2
#undef A3
#undef A4
#undef A5
#undef A6 //NEW PIN
#undef A8 //NEW PIN
#undef A9 //NEW PIN
#undef A10 //NEW PIN
#undef A11 //NEW PIN
#undef A12 //NEW PIN
#undef A13 //NEW PIN
#undef A14 //NEW PIN
#undef A15 //NEW PIN
#undef A16 //NEW PIN

static const uint8_t   A0 = PIN_A0;
static const uint8_t   A1 = PIN_A1;
static const uint8_t   A2 = PIN_A2;
static const uint8_t   A3 = PIN_A3;
static const uint8_t   A4 = PIN_A4;
static const uint8_t   A5 = PIN_A5;
static const uint8_t   A6 = PIN_A6;   // NEW PIN ANALOG
static const uint8_t   A7 = PIN_A7;   // NEW PIN ANALOG
static const uint8_t   A8 = PIN_A8;   // NEW PIN ANALOG
static const uint8_t   A9 = PIN_A9;   // NEW PIN ANALOG
static const uint8_t A10 = PIN_A10;   // NEW PIN ANALOG
static const uint8_t A11 = PIN_A11;   // NEW PIN ANALOG
static const uint8_t A12 = PIN_A12;   // NEW PIN ANALOG
static const uint8_t A13 = PIN_A13;   // NEW PIN ANALOG
static const uint8_t A14 = PIN_A14;   // NEW PIN ANALOG
static const uint8_t A15 = PIN_A15;   // NEW PIN ANALOG
static const uint8_t A16 = PIN_A16;   // NEW PIN ANALOG

// Digital pins
// -----------
#define PIN_D0    (0u)    // D0 = A0
#define PIN_D1    (1u)    // D1 = A1
#define PIN_D2    (2u)    // D2 = A2
#define PIN_D3    (3u)    // D3 = A3
#define PIN_D4    (4u)    // D4 = A4
#define PIN_D5    (5u)    // D5 = A5
#define PIN_D6    (6u)    // D6 = A6
#define PIN_D7    (7u)    // D7 = A7
#define PIN_D8    (8u)    // D8 = A8
#define PIN_D9    (9u)    // D9 = A9
#define PIN_D10   (10u)   // D10 = A10
#define PIN_D11   (11u)   // D11 = A11
#define PIN_D12   (12u)   // D12 = A12
#define PIN_D13   (13u)   //digital only
#define PIN_D14   (14u)   //digital only
#define PIN_D15   (15u)   //digital only
#define PIN_D16   (16u)   //digital only
#define PIN_D17   (17u)   //digital only
#define PIN_D18   (18u)   //digital only
#define PIN_D19   (19u)   //digital only
#define PIN_D20   (20u)   // D20 = A13
#define PIN_D21   (21u)   // D21 = A14 
#define PIN_D22   (22u)   // D22 = A15
#define PIN_D23   (23u)   // D23 = A16
#define PIN_D24   (24u)   //digital only
#define PIN_D25   (25u)   //digital only
#define PIN_D26   (26u)   //digital only
#define PIN_D27   (27u)   //digital only
#define PIN_D28   (28u)   //digital only
#define PIN_D29   (29u)   //digital only
#define PIN_D30   (30u)   //digital only
#define PIN_D31   (31u)   //digital only
#define PIN_D32   (32u)   //digital only
#define PIN_D33   (33u)   //digital only
#define PIN_D34   (34u)   //digital only
#define PIN_D35   (35u)   //digital only
#define PIN_D36   (36u)   //digital only
#define PIN_D37   (37u)   //digital only
#define PIN_D38   (38u)   //digital only
#define PIN_D39   (39u)   //digital only
#define PIN_D40   (40u)   //digital only


#undef D0
#undef D1
#undef D2
#undef D3
#undef D4
#undef D5
#undef D6
#undef D7
#undef D8
#undef D9
#undef D10
#undef D11
#undef D12
#undef D13
#undef D14    // NEW PIN DIGITAL
#undef D15    // NEW PIN DIGITAL
#undef D16    // NEW PIN DIGITAL
#undef D17    // NEW PIN DIGITAL
#undef D18    // NEW PIN DIGITAL
#undef D19    // NEW PIN DIGITAL
#undef D20    // NEW PIN DIGITAL
#undef D21    // NEW PIN DIGITAL
#undef D22    // NEW PIN DIGITAL
#undef D23    // NEW PIN DIGITAL
#undef D24    // NEW PIN DIGITAL
#undef D25    // NEW PIN DIGITAL
#undef D26    // NEW PIN DIGITAL
#undef D27    // NEW PIN DIGITAL
#undef D28    // NEW PIN DIGITAL
#undef D29    // NEW PIN DIGITAL
#undef D30    // NEW PIN DIGITAL
#undef D31    // NEW PIN DIGITAL
#undef D32    // NEW PIN DIGITAL
#undef D33    // NEW PIN DIGITAL
#undef D34    // NEW PIN DIGITAL
#undef D35    // NEW PIN DIGITAL
#undef D36    // NEW PIN DIGITAL
#undef D37    // NEW PIN DIGITAL
#undef D38    // NEW PIN DIGITAL
#undef D39    // NEW PIN DIGITAL
#undef D40    // NEW PIN DIGITAL

static const uint8_t D0 = PIN_D0;
static const uint8_t D1 = PIN_D1;
static const uint8_t D2 = PIN_D2;
static const uint8_t D3 = PIN_D3;
static const uint8_t D4 = PIN_D4;
static const uint8_t D5 = PIN_D5;
static const uint8_t D6 = PIN_D6;
static const uint8_t D7 = PIN_D7;
static const uint8_t D8 = PIN_D8;
static const uint8_t D9 = PIN_D9;
static const uint8_t D10 = PIN_D10;
static const uint8_t D11 = PIN_D11;
static const uint8_t D12 = PIN_D12;
static const uint8_t D13 = PIN_D13;
static const uint8_t D14 = PIN_D14;    // NEW PIN DIGITAL
static const uint8_t D15 = PIN_D15;    // NEW PIN DIGITAL
static const uint8_t D16 = PIN_D16;    // NEW PIN DIGITAL
static const uint8_t D17 = PIN_D17;    // NEW PIN DIGITAL
static const uint8_t D18 = PIN_D18;    // NEW PIN DIGITAL
static const uint8_t D19 = PIN_D19;    // NEW PIN DIGITAL
static const uint8_t D20 = PIN_D20;    // NEW PIN DIGITAL
static const uint8_t D21 = PIN_D21;    // NEW PIN DIGITAL
static const uint8_t D22 = PIN_D22;    // NEW PIN DIGITAL
static const uint8_t D23 = PIN_D23;    // NEW PIN DIGITAL
static const uint8_t D24 = PIN_D24;    // NEW PIN DIGITAL
static const uint8_t D25 = PIN_D25;    // NEW PIN DIGITAL
static const uint8_t D26 = PIN_D26;    // NEW PIN DIGITAL
static const uint8_t D27 = PIN_D27;    // NEW PIN DIGITAL
static const uint8_t D28 = PIN_D28;    // NEW PIN DIGITAL
static const uint8_t D29 = PIN_D29;    // NEW PIN DIGITAL
static const uint8_t D30 = PIN_D30;    // NEW PIN DIGITAL
static const uint8_t D31 = PIN_D31;    // NEW PIN DIGITAL
static const uint8_t D32 = PIN_D32;    // NEW PIN DIGITAL
static const uint8_t D33 = PIN_D33;    // NEW PIN DIGITAL
static const uint8_t D34 = PIN_D34;    // NEW PIN DIGITAL
static const uint8_t D35 = PIN_D35;    // NEW PIN DIGITAL
static const uint8_t D36 = PIN_D36;    // NEW PIN DIGITAL
static const uint8_t D37 = PIN_D37;    // NEW PIN DIGITAL
static const uint8_t D38 = PIN_D38;    // NEW PIN DIGITAL
static const uint8_t D39 = PIN_D39;    // NEW PIN DIGITAL
static const uint8_t D40 = PIN_D40;    // NEW PIN DIGITAL

#define digitalPinHasPWM(p) (IS_PIN_PWM(getPinCfgs(p, PIN_CFG_REQ_PWM)[0]))
// LEDs
// ----
#define LED_BUILTIN  (255u)
#define LED_TX       (255u)
// LED_RX n’existe plus → on la supprime purement et simplement

/****** RTC CORE DEFINES *******/
#define RTC_HOWMANY     1


/****** UART CORE DEFINES ******/

#define SERIAL_HOWMANY		   1          
#define UART1_TX_PIN           34 /* P302 D34 SCI2_TXD2 (Sur UNO R4 = D1 TX) */
#define UART1_RX_PIN           33 /* P301 D33 SCI2_RXD2 (Sur UNO R4 = D0 RX) */


/****** WIRE CORE DEFINES ******/

#define WIRE_HOWMANY            1
#define WIRE_INTERFACES_COUNT   WIRE_HOWMANY
#define WIRE_SDA_PIN            21 /* P101 A14 et D21 AN021 I2C SDA1 (Sur UNO R4 = SDA) */
#define WIRE_SCL_PIN            20 /* P100 A13 et D20 AN022 I2C SCL1 (Sur UNO R4 = SCL) */

static const uint8_t SDA = WIRE_SDA_PIN;
static const uint8_t SCL = WIRE_SCL_PIN;

/****** SPI CORE DEFINES ******/

#define SPI_HOWMANY       1

#define PIN_SPI_MOSI  (32)
#define PIN_SPI_MISO  (31)
#define PIN_SPI_SCK   (30)
#define PIN_SPI_CS    (29)
#define FORCE_SPI_MODE  (MODE_SPI)

static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;
static const uint8_t CS  =  PIN_SPI_CS;
static const uint8_t SS  =  PIN_SPI_CS;

/****** GTP CORE DEFINES *******/

#define GTP32_HOWMANY     2
#define GTP16_HOWMANY     6
#define GPT_HOWMANY       8

/****** AGT CORE DEFINES *******/
#define AGT_HOWMANY       2


/****** CAN CORE DEFINES ******/

#define CAN_HOWMANY       1

#define PIN_CAN0_TX       (23)   // P103 A16 et D23 AN019 CAN TX (Sur UNO R4 = D4) */
#define PIN_CAN0_RX       (22)   // P102 A15 et D22 AN020 CAN RX (Sur UNO R4 = D5) */
#define PIN_CAN0_STBY     (-1)

#define EXT_INTERRUPTS_HOWMANY 2

#define AVCC_MEASURE_PIN        20
#define AVCC_MULTIPLY_FACTOR    8.33

#define AR_INTERNAL_VOLTAGE     1.43f

#define USB_VID           (0x2341)
#define USB_PID           (0x0069)
#define USB_NAME          "Weact studio Ra4m1"

#define VUSB_LDO_ENABLE     1

/* EEPROM DEFINES */

#define ARDUINO_FLASH_TYPE  LP_FLASH
#define FLASH_BASE_ADDRESS  0x40100000
#define FLASH_TOTAL_SIZE    0x2000
#define FLASH_BLOCK_SIZE    0x400

// TODO: removeme
#ifdef __cplusplus
extern "C" {
#endif
void iic_slave_tei_isr(void);
void iic_slave_eri_isr(void);
#ifdef __cplusplus
}
#endif
