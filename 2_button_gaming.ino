const int upbutton = 12;
const int downbutton = 11;

void setup() {
Serial.begin(9600);
pinMode(upbutton, INPUT);
pinMode(downbutton, INPUT);
}

void loop() {
if (digitalRead(upbutton)== HIGH)
{
  Serial.println("up:");
  delay(100);
}
if(digitalRead(downbutton)== HIGH)
{
  Serial.println("down:");
  delay(100);
}
}
