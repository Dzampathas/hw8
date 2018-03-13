int ledGreen = 5;
int ledYellow = 6;
int ledRed = 9;

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
  int potVal = analogRead(A0);
  
  Serial.print("Pot Value is: ");
  Serial.println(potVal);
  // put your main code here, to run repeatedly:
  if(potVal < 511 && potVal > 255){
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], LOW);
    delay(constrain(map(potVal, 256, 511, 0, 20),0,20));
    digitalWrite(leds[0], LOW);
    delay(constrain(map(potVal, 256, 511, 20, 0),0,20));
  }
  if(potVal > 511 && potVal < 766){
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], LOW);
    delay(constrain(map(potVal, 512, 766, 0, 20),0,20));
    digitalWrite(leds[1], LOW);
    delay(constrain(map(potVal, 512, 766, 20, 0),0,20));
  }
    if(potVal > 766){
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], HIGH);
    delay(constrain(map(potVal, 767, 1023, 0, 20),0,20));
    digitalWrite(leds[2], LOW);
    delay(constrain(map(potVal, 767, 1023, 20, 0),0,20));
  }
 }
