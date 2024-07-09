#include <Arduino.h>

const int LED_PIN = 2;
void setup() {
  // put your setup code here, to run once:

Serial.begin(115200);

//initialize LED
pinMode(LED_PIN, OUTPUT);

//turn the led off
 digitalWrite(LED_PIN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
   if (Serial.available() > 0) {
    // Read the incoming byte
    char command = Serial.read();
    
    // Turn the LED on or off based on the command
    if (command == '1') {
      digitalWrite(LED_PIN, HIGH);
      Serial.println("LED is ON");
    } else if (command == '2') {
      digitalWrite(LED_PIN, LOW);
      Serial.println("LED is OFF");
    }
    else if(command = '3'){
  
for (int i = 0; i < 10; i++) {
        digitalWrite(LED_PIN, HIGH);
        delay(500); // Wait for 500 milliseconds
        digitalWrite(LED_PIN, LOW);
        delay(500); // Wait for 500 milliseconds
      }
      
    }
    else{
      Serial.println("Wrong number, press 1 or 2");
    }
  }
}

