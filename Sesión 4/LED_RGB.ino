//Definimos las salidas digitales
#define PIN_ROJO = 9
#define PIN_VERDE = 10
#define PIN_AZUL = 11


void setup()
{
  //Definimos los pines digitales del 9 al 11 como salidas
  for (int i =9 ; i<12 ; i++)
       pinMode(i, OUTPUT);
  //Lo anterior equivale a lo siguiente
  /*
  pinMode(PIN_ROJO, OUTPUT);
  pinMode(PIN_VERDE, OUTPUT);
  pinMode(PIN_AZUL, OUTPUT);
  */
}

void loop()
{
  //Utilizamos una función que llamaremos Color, la cual le pasamos 
  //el código RGB del color que queremos ver
  Color(255 ,0 ,0); //Rojo: (255,0,0)
  delay(1000); 
  
  Color(0,255 ,0); //Verde: (0,255,0)
  delay(1000);
        
  Color(0 ,0 ,255); //Azul: (0,0,255) 
  delay(1000);
        
  Color(255,255,255);//Blanco: (255,255,255)
  delay(1000);
}

//Definimos la función color, que recibe como parámetros la cantidad de cada color
//en el siguiente orden: rojo, verde y azul. Los tres valores son enteros
//entre el 0 y 255, que son los valores del PWM del arduino.
void Color(int R, int G, int B)
{   
  analogWrite(9 , R);  // Pin del LED RGB del color rojo
  analogWrite(10, G);  // Pin del LED RGB del color verde
  analogWrite(11, B);  // Pin del LED RGB del color azul
}
