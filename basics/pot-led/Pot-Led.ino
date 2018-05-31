#define led 3
#define pot A0

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int value = analogRead(pot);
  value = map(value, 0, 1023, 0, 255);

  analogWrite(led, value);

} 
