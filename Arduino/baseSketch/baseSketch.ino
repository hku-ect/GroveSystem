/*
  BaseSketch to work with the grove system and Isadora.
  You can use this sketch to connec tinputs and outputs to the grove shield in such
  a way that you can read/write from Isdaora
*/
#include "math.h"

// Define the pins for digital input
int inputs[] = {2, 3, 4};
// Define the pins for digital output
int outputs[] = {6, 7, 8};
// get number of digital inputs
int numDigitalIN = sizeof(inputs) / sizeof(inputs[0]);
// get number of digital inputs
int numDigitalOUT = sizeof(outputs) / sizeof(outputs[0]);
// define number of analog inputs
int numAnalogIN = 5;

// VARIABLES FOR SERIAL READ
char inputVars[3];              // array with data
bool isRead = false;            // boolean to set if we have the three values
int count = 0;                  // counter to check where we are
     

// --> DO SETUP
void setup()
{
  // Set the inputs
  for (int i = 0; i < numDigitalIN; i++) {
    pinMode(inputs[i], INPUT);
  }

  // Set the outputs
  for (int i = 0; i < numDigitalOUT; i++) {
    pinMode(outputs[i], OUTPUT);
  }

  // Begin serial communication
  Serial.begin(9600);

}

// --> RUN LOOP
void loop()
{
  // Read out the analog inputs and write them to serial.
  Serial.print("ANALOG: ");
  for (int i = 0; i < numAnalogIN; i++) {
    int a = analogRead(i);
    Serial.print(a, DEC);
    if (i < numAnalogIN - 1) Serial.print(" ");
  }
  Serial.println();

  // Read out the digital inputs and write them to serial.
  Serial.print("DIGITAL: ");
  for (int i = 0; i < numDigitalIN; i++) {
    int a = digitalRead(inputs[i]);
    Serial.print(a);
    if (i < numDigitalIN - 1) Serial.print(" ");
  }
  Serial.println();

  // SET the digital putputs ....
  if (isRead) {
    
    for (int i = 0; i < numDigitalOUT; i++) {
      
      // set digital out HIGH
      if(inputVars[i] == '1'){
        digitalWrite(outputs[i], HIGH);
        //Serial.print(" HIGH ");
      }
      // set digital out LOW
      if(inputVars[i] == '0'){
        digitalWrite(outputs[i], LOW);
        //Serial.print(" LOW ");
      }
    }

    // Clear the array
    memset(&inputVars[0], 0, sizeof(inputVars));
    // Set IsRead to false
    isRead = false;
  }
}


// Function is calle when a Serial event occurs
void serialEvent()
{
  while (Serial.available() > 0) {
    char ch = Serial.read();

    // Check if the array is ready to read
    if (isRead == false) {
      // Add the incoming variable to the array
      inputVars[count] = ch;

      // if we have recieved MaxChars it is time to read the array
      if (count == numDigitalOUT - 1) {
        count = 0;
        isRead = true;
      } 
      // no yet end off array count on
      else {
        count ++;
      }
    }
  }
}
