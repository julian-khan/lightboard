// #include <Arduino.h>

// // put function declarations here:
// int myFunction(int, int);

// void setup() {
//   // put your setup code here, to run once:
//   int result = myFunction(2, 3);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
// }

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }

#include <Arduino.h>

void setup() {
  pinMode(1, OUTPUT);  // Digital pin 1 as output
}

void loop() {
  digitalWrite(1, HIGH);   // LED ON
  delay(100);             // Wait 1 second
  digitalWrite(1, LOW);    // LED OFF
  delay(100000000000);             // Wait 1 second
}
