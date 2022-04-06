int salida = 0; //declaracion de puerto y nombre
int potenciometro = A0; // declaracion de puerto y nombre (ADC)
float lectura; // se utiliza la variable flotante para tener una mejor lectura de numero probenientes del potenciometro
int FreqMin = 100; // frecuencias a las que quieres osile el sonido
int FreqMax = 1000;

void setup() {
pinMode(salida, OUTPUT); // declaracion de la variable
pinMode(potenciometro, INPUT); // declaracion de la variable
}

void loop() {
lectura = analogRead(potenciometro);
float frecuencia = map(lectura, 0, 1023, FreqMin, FreqMax);
tone (salida, frecuencia, 300); //De aquí borrar el "300" si se quiere un tono continuo
delay(500); // Borrar esta línea completa si se quiere un tono continuo
}
