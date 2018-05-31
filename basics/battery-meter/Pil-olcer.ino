#define pil A1

int min_deger = 246;
int gerilim = 0;
float yuzde = 0;
float deger = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Start");

}

void loop() {

  gerilim = analogRead(pil);

  if (gerilim >= 338)
    gerilim = 338;

    if (gerilim <= 246)
    gerilim = 246;

    yuzde = gerilim - min_deger;
    deger = (100.00/92.00) * yuzde;
    
    Serial.println(gerilim);
    Serial.println(deger);

    delay(500);

}
