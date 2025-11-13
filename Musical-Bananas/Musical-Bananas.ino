// Msucial-Bananas
// (c) 2025, tweeks-homework@theweeks.org
// This program reads in the analog in pins 0-5, which should each
// be hooked to a piece for fruit, such as a banana. We reach the 
// input value of each Analog pin, and if a touch is detected, we
// play that musical note.

#include "pitches.h"

int noteAPin=A0;
int noteBPin=A1;
int noteCPin=A2;
int noteDPin=A3;
int noteEPin=A4;
int noteFPin=A5;

int soundOutPin=5;

int note=0;

void setup() {
  Serial.begin(9600);
  
}

void loop() {

  Serial.println("======================");
  if(analogRead(noteAPin) > 600) note=NOTE_A3;
  Serial.print("A=");Serial.println(analogRead(noteAPin));
  if(analogRead(noteBPin) > 600) note=NOTE_B3;
  Serial.print("B=");Serial.println(analogRead(noteBPin));
  if(analogRead(noteCPin) > 600) note=NOTE_C4;
  Serial.print("C=");Serial.println(analogRead(noteCPin));
  if(analogRead(noteDPin) > 600) note=NOTE_D4;
  Serial.print("D=");Serial.println(analogRead(noteDPin));
  if(analogRead(noteEPin) > 600) note=NOTE_E4;
  Serial.print("E=");Serial.println(analogRead(noteEPin));
  if(analogRead(noteFPin) > 600) note=NOTE_F4;
  Serial.print("F=");Serial.println(analogRead(noteFPin));
  tone(soundOutPin, note);
  delay(20);

//NOTE_A3
//NOTE_B3
//NOTE_C4
//NOTE_D4
//NOTE_E4
//NOTE_F4
  
}
