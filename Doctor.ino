int leds[3];



void setup() {
  // put your setup code here, to run once:
  leds[0] = 5;
  leds[1] = 6;
  leds[2] = 9;
  pinMode(leds[0], OUTPUT);
  pinMode(leds[1], OUTPUT);
  pinMode(leds[2], OUTPUT);

  Serial.begin(9600);

}

void loop() {
  //overdue
  for(int i = 0; i < 2; i ++){
    digitalWrite(leds[0], HIGH);
    delay(200);
    digitalWrite(leds[0], LOW);
    delay(100);
  }
  digitalWrite(leds[0], HIGH);
    delay(500);
    digitalWrite(leds[0], LOW);
    delay(200);
 }
