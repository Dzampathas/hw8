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
  for(int i = 0 ; i < 10; i++){
    digitalWrite(leds[0], HIGH);
    delay(i * 10);
    digitalWrite(leds[0], LOW);
    delay(i * 10);
  }
  for(int i = 10 ; i > 0; i--){
    digitalWrite(leds[0], HIGH);
    delay(10 + i * 10);
    digitalWrite(leds[0], LOW);
    delay(i * 10); 
  }
 }
