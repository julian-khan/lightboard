#include <Arduino.h>

#define SWITCH_PIN 13

#define LED_PIN_1 1      // Output pin for light bulb
#define LED_PIN_2 2 
#define LED_PIN_3 3
#define LED_PIN_4 4
#define LED_PIN_5 5
#define LED_PIN_6 6
#define LED_PIN_8 8

int leds[2] = {LED_PIN_5, LED_PIN_8};
int gameLedSequence[3] = {LED_PIN_5, LED_PIN_8, LED_PIN_5};
int currentGameIndex = 0;

void setup() {
  Serial.begin(9600);
  pinMode(SWITCH_PIN, INPUT);  // Switch with internal pull-up

    for (int i = 0; i < (int)(sizeof(leds) / sizeof(leds[0])); i++) {
         pinMode(leds[i], OUTPUT);
  }

  int currentGameLedPin = gameLedSequence[currentGameIndex];
  digitalWrite(currentGameLedPin, HIGH);   // LED ON
}

void loop() {
    int switchState = digitalRead(SWITCH_PIN);  // Read switch (LOW when pressed)
  int targetLedPin = gameLedSequence[currentGameIndex];
      Serial.println("current pin - led: ");
      Serial.println(targetLedPin);

  // int ledState = digitalRead(targetLedPin);  // Read current bulb state

  digitalWrite(targetLedPin, HIGH);         // Bulb ON initially

  // int switchState = digitalRead(SWITCH_PIN);
    if (switchState == HIGH) {                   // Button pressed
      Serial.print("SWITCH STATE HIGH");
      digitalWrite(targetLedPin, LOW); 
    currentGameIndex++;
      Serial.print(currentGameIndex);

    }


}
