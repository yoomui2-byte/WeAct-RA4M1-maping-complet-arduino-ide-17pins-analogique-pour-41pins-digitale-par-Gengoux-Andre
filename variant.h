#pragma once

// WeAct RA4M1 – 35 GPIO + 17 entrées analogiques
#define PINS_COUNT             (35u)
#define NUM_DIGITAL_PINS       (35u)
#define NUM_ANALOG_INPUTS      (17u)   // ← 17 entrées analogiques !

// === Broches digitales ===
#define PIN_D0   (0u)
#define PIN_D1   (1u)
#define PIN_D2   (2u)
#define PIN_D3   (3u)
#define PIN_D4   (4u)
#define PIN_D5   (5u)
#define PIN_D6   (6u)
#define PIN_D7   (7u)
#define PIN_D8   (8u)
#define PIN_D9   (9u)
#define PIN_D10  (10u)
#define PIN_D11  (11u)
#define PIN_D12  (12u)
#define PIN_D13  (13u)
#define PIN_D14  (14u)  // P400  → aussi A15
#define PIN_D15  (15u)
#define PIN_D16  (16u)
#define PIN_D17  (17u)
#define PIN_D18  (18u)
#define PIN_D19  (19u)
#define PIN_D20  (20u)
#define PIN_D21  (21u)
#define PIN_D22  (22u)
#define PIN_D23  (23u)
#define PIN_D24  (24u)
#define PIN_D25  (25u)
#define PIN_D26  (26u)
#define PIN_D27  (27u)  // P500 → aussi A16
#define PIN_D28  (28u)  // P015 → aussi A8
#define PIN_D29  (29u)  // P013 → aussi A14
#define PIN_D30  (30u)  // P012 → aussi A13
#define PIN_D31  (31u)  // P011 → aussi A12
#define PIN_D32  (32u)  // P010 → aussi A11
#define PIN_D33  (33u)  // P004 → aussi A10
#define PIN_D34  (34u)  // P003 → aussi A9

// === Broches analogiques A0 à A16 ===
#define PIN_A0   (14u)   // P014 (DAC + AN009)
#define PIN_A1   (15u)   // P000
#define PIN_A2   (16u)   // P001
#define PIN_A3   (17u)   // P002
#define PIN_A4   (18u)   // P101
#define PIN_A5   (19u)   // P100
#define PIN_A8   (28u)   // P015
#define PIN_A9   (34u)   // P003
#define PIN_A10  (33u)   // P004
#define PIN_A11  (32u)   // P010
#define PIN_A12  (31u)   // P011
#define PIN_A13  (30u)   // P012
#define PIN_A14  (29u)   // P013
#define PIN_A15  (14u)   // P400  ← AN000
#define PIN_A16  (27u)   // P500  ← AN016

#define LED_BUILTIN 13
#define PIN_LED     PIN_D13

// Compatibilité avec les anciens sketches
#define A0 PIN_A0
#define A1 PIN_A1
#define A2 PIN_A2
#define A3 PIN_A3
#define A4 PIN_A4
#define A5 PIN_A5