int ledPin[4] = {5,6,7,8};

const int buttonPin = 11;
int buttonState = HIGH;
int pushCounter = 0;
int numberOfLED = 4;
void setup() {
  pinMode(buttonPin, INPUT);
  for (int i = 0; i <= 3; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
    for (int i = 0; i < numberOfLED; i++) {
      if (pushCounter % numberOfLED == i) {
        digitalWrite(ledPin[i], HIGH);
      }
      else {
        digitalWrite(ledPin[i], LOW);
      }
    }
    pushCounter++;
    delay(50);
  }
}