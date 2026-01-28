# WeAct RA4M1 – Mapping complet 100 % compatible Arduino IDE  
**41 broches digitales (D0–D40) + 17 entrées analogiques (A0–A16)+ 28 pin pwm possible don 16 en même temp**

![WeAct RA4M1 Pinout Arduino IDE](https://github.com/yoomui2-byte/WeAct-RA4M1-maping-complet-arduino-ide-17pins-analogique-pour-41pins-digitale-par-Gengoux-Andre/raw/main/weactstudio%20ra4m1%20arduino%20ide%20pinout.PNG)
## Description
Cette variante exploite **toutes** les broches disponibles sur la WeAct Studio RA4M1 (basée sur Renesas R7FA4M1AB3CFM), identique au MCU de l'Arduino UNO R4 Minima.  
Elle étend le mapping standard limité de l'UNO R4 pour offrir :
- 41 broches digitales utilisables
- 17 canaux ADC (analogRead)
- 28 pwm potentiel don 16 en même temps 

## Fonctionnalités principales
- **Digital** : D0 à D40
- **Analog** : A0 à A16, :
  | nom arduino | Pin Renesas |
  |-------|--------------|
  | A0    | P500        |
  | A1    | P501        |
  | A2    | P502        |
  | A3    | P015        |
  | A4    | P014        |
  | A5    | P013        |
  | A6    | P012        |
  | A7    | P011        |
  | A8    | P004        |
  | A9    | P003        |
  | A10   | P002        |
  | A11   | P001        |
  | A12   | P000        |
  | A13   | P100        |
  | A14   | P101        |
  | A15   | P102        |
  | A16   | P103        |
- **Pwm**
  | chan  |   a   |   b   |
  |-------|-------|-------|
  | 0     |  D27  |  D26  |
  | 1     |  D25  |  D24  |
  | 2     |  D23  |  D22  |
  | 3     |  D30  |  D29  |
  | 4     |  D39  |  D38  |
  | 5     |  D18  |  D19  |
  | 6     |  D16  |  D17  |
  | 7     |  D36  |  D35  |
- **Pwm alternative**
  | chan  |   a   |   b   |
  |-------|-------|-------|
  | 1     |  D32  |  D31  |
  | 2     |  D0   |  D1   |
  | 2     |  D28  |  na   |
  | 3     |  na   |  D2   |
  | 4     |  D34  |  D33  |
  | 5     |  D21  |  D20  |
  | 6     |  D13  |  D14  |

**Attention !!!, vous pouvez activé les Pwm et ou Pwm alternative au choix MAIS ne pas activé les PWM et PWM alternative qui partage le même chan en même temp**

vous avez 28 pin capable d'être pwm 
mais certaines pin partage le même chan donc en pratique vous avez 16 pin (8 chan a et b) qui peuvent être activée en même temps. 
et franchement 16 pwm ca fait 10 de plus qu une arduino uno r4 , c'est pas mal 🤯
  
## Prérequis
1. Flashez le **bootloader Arduino UNO R4 Minima** sur votre WeAct RA4M1 (via Renesas Flash Programmer ou mode DFU).
2. Installez le core **Renesas UNO** dans l'IDE Arduino (via Gestionnaire de cartes → arduino:renesas_uno, version recommandée ≥ 1.5.1).

## Installation (méthode temporaire – sera écrasée par mises à jour uno r4)
1. Copiez les fichiers `pins_arduino.h` et `variant.cpp` fournis dans :  
   `C:\Users\<VotreNom>\AppData\Local\Arduino15\packages\arduino\hardware\renesas_uno\<version>\variants\MINIMA`  
   (remplacez les fichiers existants).

## Méthode recommandée qui sera indépendant et donc non écrasée par les mises à jour uno r4 (bientôt disponible)** : 

## Avertissement matériel important
Pour utiliser **A6 (P012)** correctement en entrée analogique :  
- **Désoudez la LED bleue et ou la résistance qui va avec**,
  La LED + résistance interfèrent avec les lectures ADC (diviseur de tension parasite).  
  Retirer seulement la LED suffit ; la résistance est plus compliquée car risque de retiré autre chose a proximité.

## Crédits
Développé par **Gengoux André** avec l'assistance de Grok (xAI) pour l'analyse et la compréhension du core Renesas.

## Contact & Retours
Questions, bugs, suggestions : yoomui@outlook.be  
Discussion dédiée : [Thread Arduino Forum](https://forum.arduino.cc/t/weactstudio-ra4m1-maping-complet-a-100-compatible-arduino-ide-17-pins-analogue-41-pins-digitale-par-gengoux-andre/1426407)

Merci pour vos retours !
