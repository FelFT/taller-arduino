String data //Cadena de caracteres que almacena la lectura del puerto serie

void setup() 
{
  //Inicializamos el puerto serial con un baud rate de 9600
  Serial.begin(9600);
}

void loop() 
{
  data = Serial.readString(); //Leemos la cadena de caracteres y la almacenamos en data 
  parte1 = getValue(data,',',0).toInt(); //Utilizamos la función para obtener el primer valor 
                                         //de la cadena que estamos leyendo
  Serial.print(parte1);  //Imprimimos en el puerto serie el primer valor de la lectura
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
