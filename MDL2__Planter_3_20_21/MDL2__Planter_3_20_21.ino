 // MDL2 Screen conneted to arduino nano 33 ble.
 // Main Function is to act as an encoder input for JD Tractor to control hitch height.
 

 
 #define RED 22     
 #define BLUE 24     
 #define GREEN 23
 #define LED_PWR 25

 
int In7 = 7;
int In8 = 8;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 10 and 12 as an output.
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  pinMode(In7,INPUT);
  pinMode(In8,INPUT);

  digitalWrite(9, LOW);    // Set Pin 9, 10 Low for use of 1K OHM pullDown resistor for Pin 7,and 8.
  digitalWrite(10, LOW);    //// Also Used a 2.2K OHM resistor to drop input voltage from 12 volt input to + - 4 VDC

   // intitialize the digital Pin as an output
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(LED_PWR, OUTPUT);

  
 // Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() {

  int chkPin7 = digitalRead(In7);
  int chkPin8 = digitalRead(In8);
  
  
 if  (chkPin7 == HIGH) {
  
      digitalWrite(RED, LOW); // turn the LED on by making the voltage LOW 
      
      digitalWrite(2, HIGH);  
      delay(100);
      digitalWrite(3, HIGH); 
      delay(100);              
      digitalWrite(4, HIGH);
      delay(100); 
      digitalWrite(5, HIGH); 
      delay(100); 
      digitalWrite(2, LOW); 
      digitalWrite(3, LOW); 
      digitalWrite(4, LOW); 
      digitalWrite(5, LOW); 
     // Serial.println(chkPin7);
 } 

  else if  (chkPin8 == HIGH) {
    
      digitalWrite(GREEN, LOW); 
      
      digitalWrite(5, HIGH);  
      delay(100);
      digitalWrite(4, HIGH); 
      delay(100);              
      digitalWrite(3, HIGH);
      delay(100); 
      digitalWrite(2, HIGH); 
      delay(100); 
      digitalWrite(2, LOW); 
      digitalWrite(3, LOW); 
      digitalWrite(4, LOW); 
      digitalWrite(5, LOW);     
     //Serial.println(chkPin8);       

  }

    else {
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(GREEN, HIGH);
      digitalWrite(RED, HIGH);
      digitalWrite(BLUE, HIGH);
      digitalWrite(LED_PWR, HIGH);
  }

 
}
