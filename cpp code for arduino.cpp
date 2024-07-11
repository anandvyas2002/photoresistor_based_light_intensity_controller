const int ledPin = 9;   //the number of the LED pin digital pin 9
const int  ldrPin = A0;  //the number of the LDR pin analog pin A0, ldr is light dependent resistor


void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  //initialize the LED pin as an output
  pinMode(ldrPin,  INPUT);   //initialize the LDR pin as an input
}

void loop() {
   int ldrValue = analogRead(ldrPin); // Read the LDR value
  
Serial.println(ldrValue); // Print the LDR value for debugging
   int pwmValue1 = map(ldrValue, 0, 1023, 0, 255);
   analogWrite(ledPin, pwmValue1); // Set the PWM value for the first LED
  delay(100);
}