int red = 13;
int yellow = 8;
int green = 4;

void setup() {
  // initialize a digital pin as an output, then set its value to High (5 volts)
  pinMode(red, OUTPUT);  // assigns output function to pin number 12
  digitalWrite(red, LOW); // Turn it on
  pinMode(yellow, OUTPUT);
  digitalWrite(yellow, LOW);
  pinMode(green, OUTPUT);
  digitalWrite(green, HIGH);
}

void loop() {
  // main code to run repeatedly:
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(2000);
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  delay(1000);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(2000);
}
