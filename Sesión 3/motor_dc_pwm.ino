int entrada1 = 2; //Pin de salida del Arduino a la entrada del Puente H
int entrada2 = 3; //Pin de salida del Arduino a la entrada del Puente H
int enableA = 5;  //Pin de control para el PWM
 
void setup() {
  //Todos los pines se configuran de salida
  pinMode(entrada1, OUTPUT);
  pinMode(entrada2, OUTPUT);
  pinMode(enableA, OUTPUT);
}

void loop() {
  /*
  entrada1 y entrada2, controlan el giro del motor. SIEMPRE uno de los dos debe estar 
  en modo HIGH y el otro en modo LOW para que el motor gire. Si ambos están en el mismo 
  valor, el motor no girará.
  
  El analogWrite se usa para la señal PWM y se le pasa el valor del pin donde se encuentra el 
  ENABLE del puente H y el valor del PWM, que en Arduino va del 0 al 255.
  
  */
  
  digitalWrite(entrada1, HIGH);
  digitalWrite(entrada2, LOW);
  analogWrite(enableA, 128);
  delay(3000);

  digitalWrite(entrada1, HIGH);
  digitalWrite(entrada2, LOW);
  analogWrite(enableA, 255);
  delay(3000);
}
