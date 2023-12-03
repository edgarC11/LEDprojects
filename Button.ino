const int buttonPin = 11;
const int ledPin = 12;
int currentState = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  currentState = digitalRead(buttonPin);
  if(currentState == LOW)
  {
    Serial.print("OFF\n");
    digitalWrite(ledPin, LOW);
  }
  else 
  {
    digitalWrite(ledPin, HIGH);
    Serial.print("ON\n");
  }
  delay(500);
}
