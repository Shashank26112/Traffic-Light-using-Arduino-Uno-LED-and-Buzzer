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
  // Red light - Stop
  digitalWrite(red, HIGH);
  playTone(buzzerPin, 1000, 1500); // Voice: "Stop"
  digitalWrite(red, LOW);

  // Yellow light
  for (int i = 0; i < 6; i++) {
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    delay(500);
  }

  // Green light - Go
  digitalWrite(green, HIGH);
  playTone(buzzerPin, 1500, 1500); // Voice: "Go"
  digitalWrite(green, LOW);

  // Yellow light
  for (int i = 0; i < 5; i++) {
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    delay(500);
  }
}

void playTone(int pin, int frequency, int duration) {
  toneAC(pin, frequency);
  delay(duration);
  noTone(pin);
}
