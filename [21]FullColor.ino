int RED = 9;
int GREEN = 10;
int BLUE = 11;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  for(int i = 0; i <= 255; i++) {
    analogWrite(RED, 255 - i);
    analogWrite(GREEN, i);
    analogWrite(BLUE, 0);
    delay(10);
  }
  
  for(int i = 0; i <= 255; i++) {
    analogWrite(RED, 0);
    analogWrite(GREEN, 255 - i);
    analogWrite(BLUE, i);
    delay(10);
  }
  
  for(int i = 0; i <= 255; i++) {
    analogWrite(RED, i);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 255 - i);
    delay(10);
  }
}
