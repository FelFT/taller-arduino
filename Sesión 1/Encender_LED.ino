/*
  Parpadeo

  Enciende el LED por un segundo, después se apaga por un segundo, iindefinidamente.

  La mayoría de los Arduinos tienen un LED integrado en la placa. En la placa UNO
  está localizada en el pin digital 13. LED_BUILTIN está configurado en el pin del
  LED independientemente de que tarjeta se está usando.
  Si quiere saber que pin está conectado al LED en su modelo de Arduino, verifica
  las Especificaciones Técnicas de tu tarjeta en:
  https://www.arduino.cc/en/Main/Products

  Este ejemplo es de dominio público.
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink

*/

// La función setup se ejecuta una vez que se presiona el botón reset o power de la tarjeta
void setup() {
  // Inicializa el pin digital LED_BUILTIN como una salida
  pinMode(LED_BUILTIN, OUTPUT);
}

// La función loop se ejecuta una y otra vez indefinidamente
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Enciende el LED (HIGH es el nivel de voltaje)
  delay(1000);                       // Espera un segundo
  digitalWrite(LED_BUILTIN, LOW);    // Apaga el LED estableciendo el voltaje como LOW
  delay(1000);                       // Espera un segundo
}

// Para usar este programa en un LED externo, basta con cambiar el LED_BUILTIN por 
// el pin que se quiera utilizar (por ejemplo, 8)
