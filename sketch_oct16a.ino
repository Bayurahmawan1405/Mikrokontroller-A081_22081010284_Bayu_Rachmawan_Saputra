#define LED 2
void setup() {

// Set pin mode
pinMode(LED,OUTPUT);
}

void loop() {
delay(300);
digitalWrite(LED,HIGH);

delay(400);
digitalWrite(LED,LOW);
}
