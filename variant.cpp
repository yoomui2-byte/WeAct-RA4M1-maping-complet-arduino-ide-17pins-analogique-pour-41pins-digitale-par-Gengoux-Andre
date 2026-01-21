// WeAct RA4M1 / UNO R4 Minima Custom – Décembre 2025 par Gengoux André

#include "Arduino.h"
#include "pinmux.inc"

extern "C" const PinMuxCfg_t g_pin_cfg[] = { 
  { BSP_IO_PORT_05_PIN_00,    P500   }, /* (0)  A0  et D0  AN016                                                         PWM_CH2_A         */
  { BSP_IO_PORT_05_PIN_01,    P501   }, /* (1)  A1  et D1  AN017 UART TXD1 MOSI1 SDA1                                    PWM_CH2_B IRQ11   */
  { BSP_IO_PORT_05_PIN_02,    P502   }, /* (2)  A2  et D2  AN018 UART RXD1 MISO1 SCL1                                    PWM_CH3_B IRQ12   */
  { BSP_IO_PORT_00_PIN_15,    P015   }, /* (3)  A3  et D3  AN010                                                                   IRQ7    */
  { BSP_IO_PORT_00_PIN_14,    P014   }, /* (4)  A4  et D4  AN009 DAC0                                                                      */
  { BSP_IO_PORT_00_PIN_13,    P013   }, /* (5)  A5  et D5  AN008 AMP1+                                                                     */
  { BSP_IO_PORT_00_PIN_12,    P012   }, /* (6)  A6  et D6  AN007 AMP1-                                                                     */
  { BSP_IO_PORT_00_PIN_11,    P011   }, /* (7)  A7  et D7  AN006 AMP2+                                                             IRQ15   */
  { BSP_IO_PORT_00_PIN_04,    P004   }, /* (8)  A8  et D8  AN004 AMP2O                                                             IRQ3    */
  { BSP_IO_PORT_00_PIN_03,    P003   }, /* (9)  A9  et D9  AN003 AMP1O                                                                     */
  { BSP_IO_PORT_00_PIN_02,    P002   }, /* (10) A10 et D10 AN002 AMP0O                                                             IRQ2    */
  { BSP_IO_PORT_00_PIN_01,    P001   }, /* (11) A11 et D11 AN001 AMP0-                                                             IRQ7    */
  { BSP_IO_PORT_00_PIN_00,    P000   }, /* (12) A12 et D12 AN000 AMP0+                                                             IRQ6    */
  { BSP_IO_PORT_04_PIN_00,    P400   }, /* (13) D13 UART SCK0 SCK1/I2C SCL0                                              PWM_CH6_A IRQ0    */
  { BSP_IO_PORT_04_PIN_01,    P401   }, /* (14) D14 UART TXD1 MOSI1 SDA1/CTS0 RTS0/SS0/I2C SDA0                          PWM_CH6_B IRQ5    */
  { BSP_IO_PORT_04_PIN_02,    P402   }, /* (15) D15 UART RXD1 MISO1 SCL1                                                           IRQ4    */
  { BSP_IO_PORT_04_PIN_11,    P411   }, /* (16) D16 UART TXD0 MOSI0 SDA0/SPI MOSIA                                       PWM_CH6_A IRQ4    */
  { BSP_IO_PORT_04_PIN_10,    P410   }, /* (17) D17 UART RXD0 MISO0 SCL0/SPI MISOA                                       PWM_CH6_B IRQ5    */
  { BSP_IO_PORT_04_PIN_09,    P409   }, /* (18) D18 UART TXD9 MOSI9 SDA9                                                 PWM_CH5_A IRQ6    */
  { BSP_IO_PORT_04_PIN_08,    P408   }, /* (19) D19 UART RXD9 MISO9 SCL9/CTS1 RTS1/SS1/I2C SCL0                          PWM_CH5_B IRQ7    */
  { BSP_IO_PORT_01_PIN_00,    P100   }, /* (20) A13 et D20 AN022 UART RXD0 MISO0 SCL0 SCK1/SPI MISOA/I2C SCL1            PWM_CH5_B IRQ2    */
  { BSP_IO_PORT_01_PIN_01,    P101   }, /* (21) A14 et D21 AN021 UART TXD0 MOSI0 SDA0/CTS1 RTS1/SS1/SPI MOSIA/I2C SDA1   PWM_CH5_A IRQ1    */
  { BSP_IO_PORT_01_PIN_02,    P102   }, /* (22) A15 et D22 AN020 CAN RX0/UART TXD2 MOSI2 SDA2 SCK0/SPI NATIF RSPCKA      PWM_CH2_B         */
  { BSP_IO_PORT_01_PIN_03,    P103   }, /* (23) A16 et D23 AN019 CAN TX0/UART CTS0 RTS0/SS0/SPI SSLA0                    PWM_CH2_A         */
  { BSP_IO_PORT_01_PIN_04,    P104   }, /* (24) D24 UART RXD0 MISO0 SCL0/SPI SSLA1                                       PWM_CH1_B IRQ1    */
  { BSP_IO_PORT_01_PIN_05,    P105   }, /* (25) D25 SPI SSLA2                                                            PWM_CH1_A IRQ0    */
  { BSP_IO_PORT_01_PIN_06,    P106   }, /* (26) D26 SPI SSLA3                                                            PWM_CH0_B         */
  { BSP_IO_PORT_01_PIN_07,    P107   }, /* (27) D27 RIEN                                                                 PWM_CH0_A         */
  { BSP_IO_PORT_01_PIN_13,    P113   }, /* (28) D28 RIEN                                                                 PWM_CH2_A         */
  { BSP_IO_PORT_01_PIN_12,    P112   }, /* (29) D29 UART TXD2 MOSI2 SDA2 SCK1/SPI SSLB0                                  PWM_CH3_B         */
  { BSP_IO_PORT_01_PIN_11,    P111   }, /* (30) D30 UART SCK2 SCK9/SPI NATIF RSPCKB                                      PWM_CH3_A IRQ4    */
  { BSP_IO_PORT_01_PIN_10,    P110   }, /* (31) D31 CAN RX0 UART RXD9 MISO9 SCL9/CTS2 RTS2/SS2/SPI MISOB                 PWM_CH1_B IRQ3    */
  { BSP_IO_PORT_01_PIN_09,    P109   }, /* (32) D32 CAN TX0 UART TXD9 MOSI9 SDA9/SPI MOSIB                               PWM_CH1_A         */
  { BSP_IO_PORT_03_PIN_01,    P301   }, /* (33) D33 UART RXD2 MISO2 SCL2/CTS9 RTS9/SS9/SPI SSLB2 (RX D0 SUR UNO R4)      PWM_CH4_B IRQ6    */
  { BSP_IO_PORT_03_PIN_02,    P302   }, /* (34) D34 UART TXD2 MOSI2 SDA2/SPI SSLB3               (TX D1 SUR UNO R4)      PWM_CH4_A IRQ5    */
  { BSP_IO_PORT_03_PIN_03,    P303   }, /* (35) D35 RIEN                                                                 PWM_CH7_B         */
  { BSP_IO_PORT_03_PIN_04,    P304   }, /* (36) D36 RIEN                                                                 PWM_CH7_A IRQ9    */
  { BSP_IO_PORT_02_PIN_00,    P200   }, /* (37) D37 P200 DIGITAL INPUT only                                                                */
  { BSP_IO_PORT_02_PIN_04,    P204   }, /* (38) D38 UART SCK0 SCK9/SPI NATIF RSPCKB/I2C SCL0                             PWM_CH4_B         */
  { BSP_IO_PORT_02_PIN_05,    P205   }, /* (39) D39 UART TXD0 MOSI0 SDA0/CTS9 RTS9/SS9/SPI SSLB0/I2C SCL1                PWM_CH4_A IRQ1    */
  { BSP_IO_PORT_02_PIN_06,    P206   }, /* (40) D40 UART RXD0 MISO0 SCL0/SPI SSLB1/I2C SDA1                                        IRQ0    */

  { BSP_IO_PORT_01_PIN_08,    P108   }, /* (41) NE PAS TOUCHER                                                                             */ //NE PAS TOUCHER
  { BSP_IO_PORT_03_PIN_00,    P300   }, /* (42) NE PAS TOUCHER                                                                             */ //NE PAS TOUCHER

};

extern "C" {
    unsigned int PINCOUNT_fn() {
        return (sizeof(g_pin_cfg) / sizeof(g_pin_cfg[0]));
    }
}

int32_t getPinIndex(bsp_io_port_pin_t p) {
  int max_index = PINS_COUNT;
  int rv = -1;
  for(int i = 0; i < max_index; i++) {
    if(g_pin_cfg[i].pin == p) {
      rv = i;
      break;
    }
  }
  return rv;
}

#include "FspTimer.h"

void usb_post_initialization() {
  ((R_USB_FS0_Type*)R_USB_FS0_BASE)->USBMC_b.VDCEN = 1;
}

void enableSubclockInputPins() {
  R_BSP_RegisterProtectDisable(BSP_REG_PROTECT_CGC);
  R_SYSTEM->SOSCCR_b.SOSTP = 1;
  R_BSP_RegisterProtectEnable(BSP_REG_PROTECT_CGC);
}

void initVariant() {
  // bootloader configures LED_BUILTIN as PWM output, deconfigure it to avoid spurious signals
  // pinMode(LED_BUILTIN, OUTPUT);
  // digitalWrite(LED_BUILTIN, LOW);
  FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(3, PIN_CFG_REQ_PWM)[0]));
  FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(5, PIN_CFG_REQ_PWM)[0]));
  FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(6, PIN_CFG_REQ_PWM)[0]));
  FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(9, PIN_CFG_REQ_PWM)[0]));
  FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(10, PIN_CFG_REQ_PWM)[0]));
  FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(11, PIN_CFG_REQ_PWM)[0]));
}