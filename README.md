 WeActStudio RA4M1 → 41 GPIO + 17 ADC 100% compatible avec arduino ide 

Bonjour à tous !

Après des semaines de travail avec l’aide de Grok (xAI) pour la compréhension du code , voici la première version qui exploite VRAIMENT tout le potentiel de la WeAct RA4M1 sous Arduino IDE :

- 41 broches digitales (D0 à D40)
- 17 entrées analogiques (A0 à A16):
- A0=p500 ,
- A1=p501 ,
- A2=p502 ,
- A3=p015 ,
- A4=p014 ,
- A5=p013 ,
- A6=p012 ,
- A7=p011 ,
- A8=p004 ,
- A9=p003 ,
- A10=P002 ,
- A11=p001 ,
- A12=p000 ,
- A13=p100 ,
- A14=p101 ,
- A15=p102 ,
- A16=p103.
- Attention!!! pour profité de la pin A6=p012 vous devez désoudé la jolie led bleu et où la résistance juste a côté , je conseille de retiré uniquement la led cela suffit (risque de retiré bien plus si vous tentez la résistance laissé la elle ne fait pas de mal )
- pourquoi retiré la led bleu ? elle est montée en série avec une résistance qui a leurs tour est monté en parallèle sur la pin p012 ce qui provoquera une movaise lecture de la pin 012 
- copier coller pins_arduino.h et variant.cpp dans C:\Users\Yourname\AppData\Local\Arduino15\packages\arduino\hardware\renesas_uno\1.5.1\variants\MINIMA.
- ou bien créé un nouveau variant (je le ferai bientôt)
- bien entendu vous devez avoir flasher votre carte WeactStudio ra4m1 avec le firmware arduino uno r4 au préalable.

Merci à Grok pour l’aide précieuse !

Vos retours sont les bienvenus :
yoomui@outlook.be pour vos questions

André Gengoux.
