#define t   30
#define t1  20
#define t2  100
#define t3  50

void setup() {
  // set up pins 4 to 13 as outputs
  for (int i = 4; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

//left to right and right to left
void effect_1()
{
for(int i=4; i<13; i++){
digitalWrite(i, HIGH);
delay(t1);
digitalWrite(i+1, HIGH);
delay(t1);
digitalWrite(i+2, HIGH);
delay(t1);
digitalWrite(i, LOW);
delay(t1);
digitalWrite(i+1, LOW);
delay(t1);
}
for(int i=13; i>4; i--){
digitalWrite(i, HIGH);
delay(t1);
digitalWrite(i-1, HIGH);
delay(t1);
digitalWrite(i-2, HIGH);
delay(t1);
digitalWrite(i, LOW);
delay(t1);
digitalWrite(i-1, LOW);
delay(t1);
}
}
