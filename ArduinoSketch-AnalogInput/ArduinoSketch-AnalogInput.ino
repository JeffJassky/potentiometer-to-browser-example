int readPin = A0; // This is the pin number the knob is attached to
int value = 0; // This will store the value from the knob
int newValue = 0; // This will be used to read new values from the knob

// setup() runs once to kick off the program
void setup() {
  Serial.begin(9600); // This connects to the serial port
}

// loop() runs repeadedly, forever.
void loop() {
  newValue = analogRead(readPin); // Read the new value from the knob
  if(abs(newValue-value) > 2){ // See if the value has changed by more than 2
    value = newValue; // Update the value
    Serial.println(value); // Send the value over the serial port
  }
}
