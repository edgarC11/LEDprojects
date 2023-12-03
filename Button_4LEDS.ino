 // constants won't change. They're used here to set pin numbers:

const int buttonPin =  11;     // the number of the pushbutton pin

const int ledPin1 = 5;      // the number of the LED pin
const int ledPin2 = 6;
const int ledPin3 = 7;
const int ledPin4 = 8;

// variables will change:
int  initial    = 0;       //hold current  initial
int oldstate    = 0;       //hold last  initial
int buttonstate = 0;      // variable for reading the pushbutton status

void setup() {
  pinMode(ledPin1, OUTPUT);   // initialize the LED pin as an output:
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input:
}
void loop(){
  //debouncing routline to read button
  buttonstate = digitalRead(buttonPin);  //state the  initial of button
  if(buttonstate == HIGH){               //check if it has been pressed 
    delay(50);
    buttonstate = digitalRead(buttonPin);//state button again
    if(buttonstate == LOW){              //if it is 0 considered one press
     initial = oldstate + 1;        //increase  initial by 1
    }
  }else{                          //check if it has been NOT pressed
      delay(100);
      }
   switch (initial){               //react to button press a  initial
     case 1:                     //if  initial is 1
       digitalWrite(ledPin1, HIGH);//on
       digitalWrite(ledPin2, LOW);//off
       digitalWrite(ledPin3, LOW);//off
       digitalWrite(ledPin4, LOW);
       oldstate =  initial;               //set oldstate  initial as current  initial
       break;
     case 2:
       digitalWrite(ledPin1, LOW);
       digitalWrite(ledPin2, HIGH);
       digitalWrite(ledPin3, LOW);
       digitalWrite(ledPin4, LOW);
       oldstate =  initial;
       break;
     case 3:
       digitalWrite(ledPin1, LOW);
       digitalWrite(ledPin2, LOW);
       digitalWrite(ledPin3, HIGH);
       digitalWrite(ledPin4, LOW);
       oldstate =  initial;
       break;
      case 4:
       digitalWrite(ledPin1, LOW);  //off
       digitalWrite(ledPin2, LOW);
       digitalWrite(ledPin3, LOW);
       digitalWrite(ledPin4, HIGH);
       oldstate =  initial;
       break;
     default:                      //if  initial is not 1 2 3
       digitalWrite(ledPin1, LOW);  //off
       digitalWrite(ledPin2, LOW);
       digitalWrite(ledPin3, LOW);
       digitalWrite(ledPin4, LOW);
       oldstate = 0;                    //reset to all off/initial 0
       break;         
     }
}