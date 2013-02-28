
// Greg Paton
// 9 Feb 2013
// SevenNationArmy.ino
// Arduino example that plays 
// 7 Nation Army

const int out = 13;
int freq = 100;


void setup() {
  pinMode(out, OUTPUT);
  randomSeed(1234);
}

void loop() {
  for (int i = 0; i < 4; ++i) {
    tone(out, 494);
    delay(700);
    noTone(out);
    delay(28);
    tone(out, 494);
    delay(243);
    tone(out, 587);
    delay(364);
    tone(out, 494);
    delay(364);
    tone(out, 440);
    delay(243);
    tone(out, 392);
    delay(970);
    tone(out, 370);
    delay(970);
  }
  
  for (int i = 0; i < 8; ++i) {
    tone(out, 330);
    delay(200);
    noTone(out);
    delay(43);
  }
  for (int i = 0; i < 8; ++i) {
    tone(out, 370);
    delay(200);
    noTone(out);
    delay(43);
  }
}
