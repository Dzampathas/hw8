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
  digitalWrite(leds[2], HIGH);
  delay(100);
  digitalWrite(leds[2], LOW);
  delay(100);
 }
