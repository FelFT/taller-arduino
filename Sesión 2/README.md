# Pines y pulsadores
La placa Arduino UNO puede tanto enviar como recibir señales, esta última acción con dos propósitos principales: leer datos de sensores y recibir mensajes de otros dispositivos.

Esta placa, a su vez, cuenta con dos tipos de pines de entrada y salida: pines analógicos y pines digitales.

## Pines analógicos
Se caracterizan por leer valores de tensión de 0 a 5 volts con una resolución de 10 bits. Si dividimos los 5 volts entre los 10 bits, se puede saber las variaciones del nivel de señal de entrada o salida. Para almacenar los datos de un pin analógico en una variable llamada ```lectura``` se utiliza la siguiente función:

```
lectura = analogRead(pinentrada);
```

Devuelve un valor entre 0 y 1023

## Pines digitales
Se diferencian de las analógicas porque éstas sólo pueden procesar dos niveles de señal, ```LOW``` o valores cercanos a 0 V y ```HIGH``` o valores cercanos a 5 V. Es capaz de leer señales de pulsos digitales. Esto significa que puede **comunicarse**.

Aunque los pines digitales por defecto vienen configurados como entradas, si queremos hacerlo manualmente escribimos en nuestro código:
```
pinMode(pinentrada,INPUT);
```

Para almacenar los dos valores posibles LOW o HIGH en una variable llamada ```lectura``` escribimos:
```
lectura = digitalRead(pinentrada)
```
