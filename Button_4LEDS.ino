

const int buttonPin =  11;     

const int ledPin1 = 5;      
const int ledPin2 = 6;
const int ledPin3 = 7;
const int ledPin4 = 8;

// variables will change:
int  initial    = 0;       
int oldstate    = 0;       
int buttonstate = 0;      

void setup() {
  pinMode(ledPin1, OUTPUT);   
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(buttonPin, INPUT); 
}
void loop(){
  
  buttonstate = digitalRead(buttonPin);  
  if(buttonstate == HIGH){               
    delay(50);
    buttonstate = digitalRead(buttonPin);
    if(buttonstate == LOW){              
     initial = oldstate + 1;        
    }
  }else{                         
      delay(100);
      }
   switch (initial){               
     case 1:                     
       digitalWrite(ledPin1, HIGH);
       digitalWrite(ledPin2, LOW);
       digitalWrite(ledPin3, LOW);
       digitalWrite(ledPin4, LOW);
       oldstate =  initial;               
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
       digitalWrite(ledPin1, LOW);  
       digitalWrite(ledPin2, LOW);
       digitalWrite(ledPin3, LOW);
       digitalWrite(ledPin4, HIGH);
       oldstate =  initial;
       break;
     default:                      
       digitalWrite(ledPin1, LOW);  
       digitalWrite(ledPin2, LOW);
       digitalWrite(ledPin3, LOW);
       digitalWrite(ledPin4, LOW);
       oldstate = 0;                    
       break;         
     }
}
