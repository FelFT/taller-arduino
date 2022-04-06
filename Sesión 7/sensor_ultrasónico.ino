const int pinEcho = 2;
const int pinTrigger = 3;

int sensor(int pinTrigger, int pinEcho) 
{
  long duracionPulso, distancia;

  // Iniciamos el sensor enviando un pulso alto
  // al pin trigger por un lapso de 10uS

  // Prepara el sensor enviando un pulso bajo al trigger
  digitalWrite(pinTrigger, LOW);
  delayMicroseconds(5);

  // Envia el pulso de trigger por 10uS
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);

  // Finaliza el pulso de trigger
  digitalWrite(pinTrigger, LOW);

  // Tomamos medida del ancho del pulso en el pin echo
  duracionPulso = pulseIn(pinEcho, HIGH);

  // La lectura del pulso esta en microsegundos
  // Obtenemos lectura de distancia en centimetros
  distancia = duracionPulso / 58;  
    
  return distancia;
} 
void setup() 
{
  // Inicia la consola
  Serial.begin(9600);

  // Configura los pines de control del sensor
  pinMode(pinEcho, INPUT);
  pinMode(pinTrigger, OUTPUT);
}
 
void loop() 
{
  // Iniciamos lectura de la distancia
  int distancia = sensor(pinTrigger, pinEcho);

  // Presenta los resultados
  Serial.print("Lectura de Distancia: ");
  Serial.println(distancia);

  // Espera un segundo y vuelta a empezar
  delay(1000);
}
