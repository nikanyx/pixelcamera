const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
const int sensorPin = A0;    // the number of the photodiode pin
 
// variables
int buttonState = 0;         // variable for reading the pushbutton status
int sensorValue = 0;         // variable for reading the sensor status
 
void setup(void) {
   //initialize serial communications at a 9600 baud rate
   Serial.begin(9600);
   // initialize the photodiode as an input:
   pinMode(sensorPin, INPUT);
   // initialize the LED pin as an output:
   pinMode(ledPin, OUTPUT);
   // initialize the pushbutton pin as an input:
   pinMode(buttonPin, INPUT);
}
 
void loop(void) {
   buttonState = digitalRead(buttonPin);
   // read first analog input, divide by 4 to make the range 0-255:
   sensorValue = analogRead(sensorPin) / 4;
   // if the button is pressed
   if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    // print the sensor value:
    Serial.println(sensorValue);
   } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
