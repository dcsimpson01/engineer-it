int Light = 12; // Hero board pin 12

void setup() {
  // initialize a digital pin as an output, then set its value to High (5 volts)
  pinMode(Light, OUTPUT);  // assigns output function to pin number 12
  //digitalWrite(Light, LOW)  //Set its voltage to low
  digitalWrite(Light, LOW); // Turn it on
}

void loop() {
  // main code to run repeatedly:
digitalWrite(Light, LOW); // 0 Volts
delay(2000); 
digitalWrite(Light, HIGH); // 5 Volts
delay(100); // 500 miliseconds
}
