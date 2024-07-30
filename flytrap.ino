#import "Servo.h"

#define CLOSED 180
#define OPEN 90
// The drop in lighting compared to the room average at setup that will trigger the flytrap.
// Tune me based on readings from the Serial Monitor!
#define LIGHT_DELTA_THRESHOLD 40

Servo servo;
int lightVal = 0;
int avg = 0;

void setup() {
  servo.attach(9);
  servo.write(90);
  Serial.begin(9600);

  // Take the average light reading of the room over 100 measurements
  for (int i=0; i < 100; i++) {
    avg += analogRead(A0);
  }
  avg = avg/100;
}

void loop() {
  // You could add some smoothing/averaging here to prevent random spikes.
  lightVal = analogRead(A0);
  Serial.println(lightVal);
  if (lightVal < (avg - LIGHT_DELTA_THRESHOLD)){
    servo.write(CLOSED);
    delay(1000);
  }
  else {
    servo.write(OPEN);
  }
}
