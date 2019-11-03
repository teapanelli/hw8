int led = 13;
int led2 = 12;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);  
  delay(500);
  digitalWrite(led2, HIGH);// turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led2, LOW);// turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
