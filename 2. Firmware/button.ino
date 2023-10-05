#include "Keyboard.h"

// Define the button pins
#define BUTTON_W_PIN 2
#define BUTTON_E_PIN 3
#define BUTTON_D_PIN 4
#define BUTTON_C_PIN 5
#define BUTTON_X_PIN 6
#define BUTTON_Z_PIN 7
#define BUTTON_A_PIN 8
#define BUTTON_Q_PIN 9

void setup() {
  // Initialize buttons as input with internal pullup resistor
  pinMode(BUTTON_W_PIN, INPUT_PULLUP);
  pinMode(BUTTON_E_PIN, INPUT_PULLUP);
  pinMode(BUTTON_D_PIN, INPUT_PULLUP);
  pinMode(BUTTON_C_PIN, INPUT_PULLUP);
  pinMode(BUTTON_X_PIN, INPUT_PULLUP);
  pinMode(BUTTON_Z_PIN, INPUT_PULLUP);
  pinMode(BUTTON_A_PIN, INPUT_PULLUP);
  pinMode(BUTTON_Q_PIN, INPUT_PULLUP);

  // Begin keyboard emulation
  Keyboard.begin();
}

void loop() {
  // If a button is pressed (LOW), emulate the corresponding key press
  if(digitalRead(BUTTON_W_PIN) == LOW) Keyboard.write('w');
  if(digitalRead(BUTTON_E_PIN) == LOW) Keyboard.write('e');
  if(digitalRead(BUTTON_D_PIN) == LOW) Keyboard.write('d');
  if(digitalRead(BUTTON_C_PIN) == LOW) Keyboard.write('c');
  if(digitalRead(BUTTON_X_PIN) == LOW) Keyboard.write('x');
  if(digitalRead(BUTTON_Z_PIN) == LOW) Keyboard.write('z');
  if(digitalRead(BUTTON_A_PIN) == LOW) Keyboard.write('a');
  if(digitalRead(BUTTON_Q_PIN) == LOW) Keyboard.write('q');

  // Add a small delay to prevent button bouncing
  delay(20);
}
