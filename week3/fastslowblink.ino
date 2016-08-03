/*
   fastslowblink
   Blinks LED 13 on the Arduino UNO 5 times, once every half second,
   and then blinks 5 more times once every 2 seconds.

   This program is for the Week 3 assignment in the
   Coursera The Arduino Platform and C Programming course.

   Instructions:
      Write a program that causes the built-in LED connected to pin 13
      on the Arduino to blink, alternating between fast blinks and slow
      blinks. The LED should blink 5 times, once every half second,
      and then it should blink 5 more times, once every two seconds.
      The LED should continue to blink in this alternating fashion for
      as long as the Arduino receives power.

   Filename: fastslowblink.ino
      Version: 1.0
      Date: 3 Aug 2016
      Author: Brent P. Johnson

   Verification environment:
      Windows 7
      Arduino 1.6.9
      Arduino UNO

*/

// create a integer to count from 0 to 9
int loop_cnt = 0;

// the setup function runs once when you press reset or power the board
void setup() {   
   // initialize digital pin 13 as an output.
   pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

   // blink either fast (every half second) or slow (every 2 seconds)
   // will blink fast when loop_cnt = 0, 1, 2, 3, 4
   // will blink fast when loop_cnt = 5, 6, 7, 8, 9
   if (loop_cnt < 5) {
      digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(250);                     // wait for 250 ms
      digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
      delay(250);                     // wait for 250 ms
   }
   else {
      digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(1000);                   // wait for a second
      digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
      delay(1000);                   // wait for a second
   }

   // loop_cnt counts from 0 to 9 then resets to 0
   if (loop_cnt < 9) {
      loop_cnt = loop_cnt + 1;
   }
   else {
      loop_cnt = 0;
   }
}
