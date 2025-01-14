/**************************************************************
PRÁCTICA Nº.15:
Realización de porta OR con tres pulsadores mediante código C.
Requisito de usar comando "if" y "else".
Xan Pérez Iglesias
14/01/2025   10:15 A.M.
**************************************************************/

//C++ code
//

#define botonA = 10;
#define botonB = 9;
#define botonC = 8;
#define ledPin_1 = 13;
#define ledPin_2 = 12;

void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  int A = digitalRead(10); 
  int B = digitalRead(9);
  int C = digitalRead(8);

  if (A == LOW || B == LOW || C == LOW) {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    delay(4000);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(4000);
  } else if (A == LOW || B == LOW || C == HIGH){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    delay(4000);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(4000);
  } else if (A == LOW || B == HIGH || C == LOW){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    delay(4000);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(4000);
  } else if (A == LOW || B == HIGH || C == HIGH){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    delay(4000);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(4000);
  } else if (A == HIGH || B == LOW || C == LOW){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    delay(4000);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(4000);
  } else if (A == HIGH || B == LOW || C == HIGH){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    delay(4000);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(4000);
  } else if (A == HIGH || B == HIGH || C == LOW){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    delay(4000);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(4000);
  } else if (A == HIGH || B == HIGH || C == HIGH){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    delay(4000);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(4000);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }
}
