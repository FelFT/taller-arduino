void setup() { 
  pinMode(6, OUTPUT); // Led - pin de salida 
  pinMode(2, INPUT); // pulsador - pin de entrada 
} 

void loop() { // bucle infinito 
  if(digitalRead(2)){ // si el pulsado se presiona 
    digitalWrite(6, HIGH); // se enciende el led 
    delay(1000); // se mantiene 1 segundo encendido 
    digitalWrite(6, LOW); // se apaga el led 
}
 }
