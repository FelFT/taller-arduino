String rojo //Cadena de caracteres que almacena el valor de rojo del puerto serie
String verde //Cadena de caracteres que almacena el valor de verde del puerto serie
String azul //Cadena de caracteres que almacena el valor de azul del puerto serie

void setup() 
{
  //Inicializamos el puerto serial con un baud rate de 9600
  Serial.begin(9600);
}

void loop() 
{
  data = Serial.readString(); //Leemos la cadena de caracteres y la almacenamos en data 
  rojo = getValue(data,',',0).toInt(); //Utilizamos la función para obtener el primer valor 
                                         //de la cadena que estamos leyendo
  verde = getValue(data,',',1).toInt(); //Utilizamos la función para obtener el segundo valor 
                                         //de la cadena que estamos leyendo
  azul = getValue(data,',',2).toInt(); //Utilizamos la función para obtener el primer valor 
                                         //de la cadena que estamos leyendo
  Serial.print("Rojo: " + rojo);  //Imprimimos en el puerto serie el primer valor de la lectura
  Serial.print("Verde: " + verde);  //Imprimimos en el puerto serie el segundo valor de la lectura
  Serial.print("Azul: " + azul);  //Imprimimos en el puerto serie el tercer valor de la lectura

  delay(1000); //Esperamos un segundo
}
/*
Definimos una función para separar las cadenas. 
data es la cadena que queremos dividir
separator es el separador o el símbolo que separa lo que queremos dividir
index es el valor que queremos obtener 
*/
String getValue(String data, char separator, int index)
{
  int found = 0;
  int strIndex[] = {0, -1};
  int maxIndex = data.length()-1;

  for(int i=0; i<=maxIndex && found<=index; i++){
    if(data.charAt(i)==separator || i==maxIndex){
        found++;
        strIndex[0] = strIndex[1]+1;
        strIndex[1] = (i == maxIndex) ? i+1 : i;
    }
  }

  return found>index ? data.substring(strIndex[0], strIndex[1]) : "";
}
