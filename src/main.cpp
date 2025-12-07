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

// int leds[3] = {LED_PIN_1, LED_PIN_2, LED_PIN_3};

// int gameLedSequence[] = {LED_PIN_1, LED_PIN_3, LED_PIN_5};
// int currentGameIndex = 0;

// // todo - fix the total game steps calculation
// int totalGameSteps = sizeof(gameLedSequence);

void setup() {



  Serial.begin(9600);
  Serial.println("Lightboard Testm123");
  pinMode(SWITCH_PIN, INPUT);  // Switch with internal pull-up

    for (int i = 0; i < (int)(sizeof(leds) / sizeof(leds[0])); i++) {
         pinMode(leds[i], OUTPUT);
  }
    // pinMode(5, OUTPUT);  // LED pin as output
    // pinMode(8, OUTPUT);  // LED pin as output
  digitalWrite(5, HIGH);   // LED ON


    // int targetLedPin = gameLedSequence[currentGameIndex];
    //   Serial.println("Lightboard Testm123");
}

// void loop() {
//   int switchState = digitalRead(SWITCH_PIN);  // Read switch (LOW when pressed)
//   int targetLedPin = gameLedSequence[currentGameIndex];
//       Serial.println("current pin - led: ");
//       Serial.println(targetLedPin);

//   // int ledState = digitalRead(targetLedPin);  // Read current bulb state

//   digitalWrite(targetLedPin, HIGH);         // Bulb ON initially



//   // Serial.print("Switch State: ");
//   // Serial.print(switchState);
//   // Serial.print(" targetledpin: ");
//   // Serial.print(targetLedPin);
//   // Serial.print(" ledstate: ");
//   // // Serial.println(ledState);

//   // // int ledState = digitalRead(LED_PIN_3);  // Read current bulb state
//   // Serial.print(" test 1234: ");
  


//   if (switchState == HIGH) {                   // Button pressed
//       Serial.print(" test 99999: ");
//     digitalWrite(targetLedPin, LOW);              // Turn bulb ON
//       delay(3000); // wait for 5 seconds

//     // digitalWrite(LED_PIN_3, LOW);              // Turn bulb ON
//     // delay(1000);                          // Debounce delay
//     // digitalWrite(LED_PIN_3, HIGH);              // Turn bulb ON



//       Serial.print(" current index: ");
//             Serial.print(currentGameIndex);


//     currentGameIndex++;
//             Serial.print(currentGameIndex);


//   } 

// }


// PIN 1 LIGHT HIGH


// PIN 2 SWITCH - LOW -> PRESS -> HIGH 

// PIN 1 -> HIGH FORM PIN 2 -> PIN 1 LOW



void loop() {

  int switchState = digitalRead(SWITCH_PIN);
    if (switchState == HIGH) {                   // Button pressed
      Serial.print("SWITCH STATE HIGH");
      // delay(1000); // wait for 5 seconds
    digitalWrite(5, LOW);              // Turn bulb ON
          // delay(1000); // wait for 5 seconds
    digitalWrite(8, HIGH);              // Turn bulb ON
    }

  // digitalWrite(5, HIGH);   // LED ON
  // delay(1000);             // Wait 1 second
  // digitalWrite(5, LOW);    // LED OFF
  // delay(1000);             // Wait 1 second

  //   digitalWrite(8, HIGH);   // LED ON
  // delay(1000);             // Wait 1 second
  // digitalWrite(8, LOW);    // LED OFF
  // delay(1000);             // Wait 1 second
}
