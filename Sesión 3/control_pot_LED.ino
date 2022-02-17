//Programa para controlar un LED con un potenciómetro

int led_pin = 6;  //Pin digital (PWM) de salida del LED
int pot_pin = A0; //Pin análógico de entrada o de lectura del potenciómetro
int output;       //Variable que almacenará la lectura del potenciómetro
int led_value;    //Variable que almacenará el cálculo de PWM

void setup() {
  //Por defecto, los pines están configurados como entradas
  pinMode(led_pin, OUTPUT); //Se configura el pin del LED como salida
}

void loop() {
  output = analogRead(pot_pin); //Se almacena la lectura del potenciómetro
  led_value = output/4.01176;    //Se calcula el valor del PWM
  
  /* 
  Para calcular el valor del PWM, recordemos que Arduino en los pines 
  analógicos devuelve un valor entre 0 y 1023, este valor proviene del 
  potenciómetro. 
  
  Por otro lado, el PWM en Arduino va de 0 a 255, por lo que se debe 
  convertir el valor del potenciómetro a un valor que el PWM pueda procesar.
  
  De este modo, la operación quedaría de la siguiente manera:
  
  led_value = output * 255 / 1023
  
  O que es lo mismo:
  
  led_value = output / 4.01176
  */
  
  analogWrite(led_pin, led_value);  //Se escribe el valor calculado en el 
                                    //pin del LED
}
