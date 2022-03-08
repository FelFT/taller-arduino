//Definición de los dígitos
/*ÁNODO COMÚN*/
const int DIGITOS[10][7] = {
/*0*/ {0,0,0,0,0,0,1},
/*1*/ {1,0,0,1,1,1,1},
/*2*/ {0,0,1,0,0,1,0},
/*3*/ {0,0,0,0,1,1,0},
/*4*/ {1,0,0,1,1,0,0},
/*5*/ {0,1,0,0,1,0,0},
/*6*/ {0,1,0,0,0,0,0},
/*7*/ {0,0,0,1,1,1,1},
/*8*/ {0,0,0,0,0,0,0},
/*9*/ {0,0,0,0,1,0,0}
};
const int OFF = HIGH;

/*CÁTODO COMÚN*/
const int DIGITOS[10][7] = {
/*0*/ {1,1,1,1,1,1,0},
/*1*/ {0,1,1,0,0,0,0},
/*2*/ {1,1,0,1,1,0,1},
/*3*/ {1,1,1,1,0,0,1},
/*4*/ {0,1,1,0,0,1,1},
/*5*/ {1,0,1,1,0,1,1},
/*6*/ {1,0,1,1,1,1,1},
/*7*/ {1,1,1,0,0,0,0},
/*8*/ {1,1,1,1,1,1,1},
/*9*/ {1,1,1,1,0,1,1}
};
const int OFF = LOW;

//Definición de los pines
const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;
 
//Segmentos y número de pines
const int N = 7;
const int SEGMENTOS[N] = {A,B,C,D,E,F,G};

//Configuración de los pines digitales como salidas y apagar los 7 segementos
void setup()
{
  for (int i=0; i<N; i++){
    pinMode(SEGMENTOS[i], OUTPUT);
    digitalWrite(SEGMENTOS[i], OFF);//apagar
  }
}

//Cada segundo se imprime un dígito, hasta que llega a 9 se reinicia 0
void loop()
{
  for(int i=0; i<10; i++){
      print(i);
      delay(1000);// esperar 1 segundo
  }
}

//Función de impresión de los dígitos
void print(int d){
  for (int i=0; i<N; i++){
    digitalWrite(SEGMENTOS[i], DIGITOS[d][i]);
  }
}
