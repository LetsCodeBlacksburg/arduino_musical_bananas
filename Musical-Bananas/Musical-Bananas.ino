// Musical-Bananas
// (c) 2025 tweeks-homework@theweeks.org
// A fun little musical fruit organ (touch sensors) made from 3Mohm pull down
// resistors into the Analog 0-5 pins, connection to pieces of fruit
// to trigger the keys C-A (using pitches.h).  It's not a perfect quality 
// sound with the constant polled reading of every analog input, but it's
// good enough to get kids engaged. If anyone has a better key-polling method
// please let me know.

#include "pitches.h"

//ANALOG MODDE
int noteCPin=A0;
int noteDPin=A1;
int noteEPin=A2;
int noteFPin=A3;
int noteGPin=A4;
int noteAPin=A5;


int soundOutPin=8;
int touchThresh=30;
int note=0;

void setup() {
  Serial.begin(9600);
  pinMode(soundOutPin, OUTPUT);
}

void loop() {

  // Use Serial prints for setting your touch-trigger threshold value.
  //Serial.println("======================");
  //delay(1);
  if(analogRead(noteCPin) > touchThresh) note=NOTE_C4; 
  //Serial.print("C=");Serial.println(analogRead(noteCPin));
  //delay(1);
  if(analogRead(noteDPin) > touchThresh) note=NOTE_D4; 
  //Serial.print("D=");Serial.println(analogRead(noteDPin));
  //delay(1);
  if(analogRead(noteEPin) > touchThresh) note=NOTE_E4; 
  //Serial.print("E=");Serial.println(analogRead(noteEPin));
  //delay(1);
  if(analogRead(noteFPin) > touchThresh) note=NOTE_F4; 
  //Serial.print("F=");Serial.println(analogRead(noteFPin));
  if(analogRead(noteGPin) > touchThresh) note=NOTE_G4; 
  //Serial.print("G=");Serial.println(analogRead(noteGPin));
  if(analogRead(noteAPin) > touchThresh) note=NOTE_A4; 
  //Serial.print("A=");Serial.println(analogRead(noteFPin));

  if(note != 0){
    tone(soundOutPin, note);
    delay(40);
    note=0;
  }
  else{
    noTone(soundOutPin);    
  }
  delay(1);
}
