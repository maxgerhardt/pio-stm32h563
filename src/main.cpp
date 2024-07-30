#include <Arduino.h>

// Adjust Blinky LED here
#define LED PC13

void setup() {
    Serial.begin(9600); // TX: PA0, RX:PA1
    pinMode(LED, OUTPUT);
}

void loop() {
    Serial.println("Blinky!");
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(LED, HIGH);
    delay(1000);
}