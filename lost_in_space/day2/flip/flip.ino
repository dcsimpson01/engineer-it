int Light = 11; // Hero board pin 13
int Light2 = 13;

void setup() {
  // initialize a digital pin as an output, then set its value to High (5 volts)
  pinMode(Light, OUTPUT);  // assigns output function to pin number 12
  //digitalWrite(Light, LOW)  //Set its voltage to low
  digitalWrite(Light, LOW); // Turn it on
  pinMode(Light2, OUTPUT);
  digitalWrite(Light2, HIGH);
}

void loop() {
  // main code to run repeatedly:
digitalWrite(Light, LOW); // 0 Volts
digitalWrite(Light2, HIGH); // 0 Volts
delay(2000); 
digitalWrite(Light, HIGH); // 5 Volts
digitalWrite(Light2, LOW); // 5 Volts
delay(100); // 500 miliseconds
}
