#include <toneAC.h>
int red = 9;
int yellow = 8;
int green = 7;
int buzzerPin = 6; // Replace 6 with the actual pin number you connect the buzzer to

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Red light
  digitalWrite(red, HIGH);
  delay(15000);
  digitalWrite(red, LOW);

  // Function to play a tone for the specified duration
  playTone(buzzerPin, 1000, 1500);

  // Yellow light
  for (int i = 0; i < 6; i++) {
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    delay(500);
  }

  // Green light
  digitalWrite(green, HIGH);
  delay(20000);
  digitalWrite(green, LOW);

  // Function to play a tone for the specified duration
  playTone(buzzerPin, 1500, 1500);

  // Yellow light
  for (int i = 0; i < 5; i++) {
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    delay(500);
  }
}

void playTone(int pin, int frequency, int duration) {
  tone(pin, frequency);
  delay(duration);
  noTone(pin);
}
