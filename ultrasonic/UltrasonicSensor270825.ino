#include "NewPing.h"

#define TRIGGER_PIN 9
#define ECHO_PIN 10
#define MAX_DISTANCE 400

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

long distance;

void setup() {
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  distance = sonar.ping_cm();

  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(500);

  noTone(8);
  tone(8, 220, 500);
  delay(500);
}
