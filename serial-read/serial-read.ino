/*
   USAGE
   cat < /dev/ttyUSB0 > /dev/null &
   echo "0" > /dev/ttyUSB0
*/

char val;

void setup()
{
  Serial.begin(9600);
}

void loop ()
{
  if (Serial.available() > 0)
  {
    if (Serial.read() == '0')
    {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    if (val == '1')
    {
      digitalWrite(LED_BUILTIN, LOW);
    }
  }
}
