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


  /*
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledRed, HIGH);

  delay(300);

  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledRed, LOW);

  */

}

void loop() {
  int potVal = round(map(analogRead(A0),0,1023, -1, 2));
  Serial.print("Pot Value is: ");
  Serial.println(potVal);
  // put your main code here, to run repeatedly:
  if(potVal == -1){
    digitalWrite(leds[0], LOW);
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], LOW);
   }
   if(potVal == 0){
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], LOW);
   }
   if(potVal == 1){
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], LOW);
   }
   if(potVal == 2){
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], HIGH);
   }
 }
