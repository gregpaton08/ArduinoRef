// Greg Paton
// 4 Feb 2013
// videoGameNoise.ino
// Arduino example that produces a video game type noise
// by hooking up a head phone speaker to pin 13

const int led = 13;
int brightness = 0;
int inc = 5;
int cnt = 0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, brightness);
  brightness = brightness + inc;
  if (brightness > 255) {
    brightness = 0;
  }
  cnt = cnt + 1;
  if (cnt > 1000) {
    inc = inc + 5;
    if (inc > 75) {
      inc = 0;
    }
    cnt = 0;
  }
}
