const int trig = 2;
const int echo = 3; 
int duration = 0;
int distance = 0;
int i;
void setup()
{
  //ultrasonic sensor
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  //LEDS
  for (i = 4; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);
  duration = pulseIn(echo , HIGH);
  distance = (duration / 2) / 29.1;
  Serial.println(distance);
  delay(500);
  if (distance >= 10) {     //change the value for distance measuring
    digitalWrite(13, HIGH);
  }
  else{
  digitalWrite(13, LOW);
  }
  if (distance >= 13) {
    digitalWrite(12, HIGH);
  }
  else{
  digitalWrite(12, LOW);
  }
  if (distance >= 15) 
  {
    digitalWrite(11, HIGH);
  }
  else{
  digitalWrite(11, LOW);
  }
  if (distance >= 18) {
    digitalWrite(10, HIGH);
  }
  else{
  digitalWrite(10, LOW);
  }
  if (distance >= 21) {
    digitalWrite(9, HIGH);
  }
  else{
  digitalWrite(9, LOW);
  }
  if (distance >= 24) {
    digitalWrite(8, HIGH);
  }
  else{
  digitalWrite(8, LOW);
  }
  if (distance >= 27) {
    digitalWrite(7, HIGH);
  }
  else{
  digitalWrite(7, LOW);
  }
  if (distance >= 30) {
    digitalWrite(6, HIGH);
  }
  else{
  digitalWrite(6, LOW);
  }
  if (distance >= 33) {
    digitalWrite(5, HIGH);
  }
  else{
  digitalWrite(5, LOW);
  }
  if (distance >= 36) {
    digitalWrite(4, HIGH);
  }else{
  digitalWrite(4, LOW);
  }
}
