#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);

  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, 1);
  delay(500);
  digitalWrite(12, 0);
  delay(500);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + 2 * y;
}