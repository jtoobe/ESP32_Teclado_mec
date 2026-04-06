// Galo D'Elia y Facundo Sanca


#include <Keypad.h>



const byte FILAS = 4;
const byte COLUMNAS = 4;

char teclas[FILAS][COLUMNAS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pinesFilas[FILAS] = {23, 22, 21, 19};
byte pinesColumnas[COLUMNAS] = {5, 4, 33, 32};

Keypad teclado = Keypad(makeKeymap(teclas), pinesFilas, pinesColumnas, FILAS, COLUMNAS);

void setup(){
  Serial.begin(115200);
}

void loop(){
  char tecla = teclado.getKey();
  if (tecla){
    Serial.print("Tecla: ");
    Serial.println(tecla);
  }
}
