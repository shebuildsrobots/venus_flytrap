#import "Servo.h"

#define CLOSED 180
#define OPEN 90
// Tune me based on readings from the Serial Monitor!
#define LIGHT_THRESHOLD 20

Servo servo;
int lightVal = 0;

void setup() {
  servo.attach(9);
  servo.write(90);
  Serial.begin(9600);
}

void loop() {
  lightVal = analogRead(A0);
  Serial.println(lightVal);
  if (lightVal < LIGHT_THRESHOLD){
    servo.write(CLOSED);
    delay(2000);
  }
  else {
    servo.write(OPEN);
  }
}
