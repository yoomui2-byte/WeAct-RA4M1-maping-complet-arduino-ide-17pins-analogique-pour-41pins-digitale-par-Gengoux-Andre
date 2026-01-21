 WeAct Studio RA4M1 → 41 GPIO + 17 ADC 100% compatible avec arduino ide 

Bonjour à tous !

Après des semaines de travail avec l’aide de Grok (xAI), voici la première version qui exploite VRAIMENT tout le potentiel de la WeAct RA4M1 sous Arduino IDE :

- 41 broches digitales (D0 à D40)
- 17 entrées analogiques 14 bits (A0 à A16) → oui, même P400 et P500 sont en analogRead() 
- copier coller pins_arduino.h et variant.cpp dans C:\Users\Yourname\AppData\Local\Arduino15\packages\arduino\hardware\renesas_uno\1.5.1\variants\MINIMA
Merci à Grok pour l’aide précieuse !

Vos retours sont les bienvenus  
André Gengoux
