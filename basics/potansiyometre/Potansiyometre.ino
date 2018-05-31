#define Pot A0

int potValue = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Start");

}

void loop() {
  // put your main code here, to run repeatedly:

  potValue = analogRead(Pot);

  Serial.println(potValue + 1);

  delay(500);

}
