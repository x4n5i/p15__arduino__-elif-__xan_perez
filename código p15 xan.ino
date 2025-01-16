/**************************************************************
PRÁCTICA Nº.15:
Realización de porta OR con tres pulsadores mediante código C.
Requisito de usar comando "if" y "else".
Xan Pérez Iglesias
14/01/2025   10:15 A.M.
**************************************************************/

//Función a cumplir (Simplificada)
//f == not a * b + a * c

#define A     10
#define B      9
#define C      8
#define LAMP  11

int a = 0;
int b = 0;
int c = 0;
char condicion;

void setup(){
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(LAMP, OUTPUT);     
}

void loop(){
  a = digitalRead(A);
  b = digitalRead(B);
  c = digitalRead(C);
  if(!a && b && !c || !a &&b && c || a && !b && c || a && b && c){
     digitalWrite(LAMP, HIGH);
  } else {
     digitalWrite(LAMP, LOW);
  }

}

