#define Buton 8
#define Led 10

int button_durum = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(Buton, INPUT);
  pinMode(Led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  button_durum = digitalRead(Buton);

  if (button_durum == 1) {
    digitalWrite(Led, HIGH);
  } else {
    digitalWrite(Led,LOW);
  }
}
