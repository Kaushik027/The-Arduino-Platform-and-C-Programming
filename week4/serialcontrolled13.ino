/*
   serialcontrolled13
   Initializes a Serial port to 9600 baud and eceives data on serial port.
   Turns on LED13 is received byte is '1' and turns off LED13 if received byte is '0'

   This program is for the Week 4 assignment in the
   Coursera The Arduino Platform and C Programming course.

   Instructions:
      Write a program that allows the user to control the LED connected to pin 13 
      of the Arduino. When the program is started, the LED should be off. The user 
      should open the serial monitor to communicate with the Arduino. If the user 
      sends the character '1' through the serial monitor then the LED should turn 
      on. If the user sends the character '0' through the serial monitor then the 
      LED should turn off.

   Filename: serialcontrolled13.ino
      Version: 1.0
      Date: 12 Aug 2016
      Author: Brent P. Johnson

   Verification environment:
      Windows 7
      Arduino 1.6.9
      Arduino UNO

   Known issues:
      A '1' or a '0' at any location in a string will have the same functionality as
      a single '1' or '0' character.  For example "asdf1" will result in 4 error 
      messages followed by turning on the LED1.  There is complex error checking for 
      this case.   

*/

// create a character to read received data on serial port
char receivedByte;

// the setup function runs once when you press reset or power the board
void setup() {   
   // opens serial port, sets data rate to 9600 bps    
   Serial.begin(9600);       
   // initialize digital pin 13 as an output. 
   pinMode(13, OUTPUT);   
   // print a message to enter 1 or 0    
   Serial.println("Enter 1 to turn on LED13 or 0 to turn off LED13");
}

// the loop function runs over and over again forever
void loop() {   
   // check if there is data to be read   
   if (Serial.available() > 0) {           

      // read the received byte:      
      receivedByte = Serial.read();            

      // check if the received byte is '1' 
      // '1' in ASCII id 49 decimal     
      if (receivedByte == 49) {         
         digitalWrite(13, HIGH);        
      }   
            
      // else check if received byte is '0' 
      // '1' in ASCII id 48 decimal        
      else if (receivedByte == 48) {         
         digitalWrite(13, LOW);      
      }      
      // if neither '1' or '0 are entered 
      // print the message again 
      else {         
         // print a message to enter 1 or 0          
         Serial.println("Enter 1 to turn on LED13 or 0 to turn off LED13");     
      }     
   }
}


