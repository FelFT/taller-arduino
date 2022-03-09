#include <Keypad.h>
 
const byte filas = 4;
const byte columnas = 4;
 
char teclas[filas][columnas] = {
 { '1','2','3', 'A' },
 { '4','5','6', 'B' },
 { '7','8','9', 'C' },
 { '#','0','*', 'D' }
};

const byte filasPines[pines] = { 11, 10, 9, 8 };
const byte columnasPines[columnas] = { 7, 6, 5, 4 };
 
Keypad keypad = Keypad(makeKeymap(teclas), filasPines, columnasPines, filas, columnas);
 
void setup() {
 Serial.begin(9600);
}
 
void loop() {
 char tecla = keypad.getKey();
 if (tecla) {
 Serial.println(tecla);
 }
}
