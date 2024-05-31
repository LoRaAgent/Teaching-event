#define RELAY_PIN  13 // Example pin, choose the appropriate GPIO pin
#include <esp32-hal-gpio.h>

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  // Turn the relay ON
  digitalWrite(RELAY_PIN, LOW);
  delay(1000); // Wait for 1 second
  
  // Turn the relay OFF
  digitalWrite(RELAY_PIN, HIGH);
  delay(1000); // Wait for 1 second
}
