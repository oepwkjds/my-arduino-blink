#define LED1 13
#define LED2 12

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void blinkSOS() {
  for(int i = 0; i < 3; i++) {
    digitalWrite(LED1, HIGH);
    delay(150);
    digitalWrite(LED1, LOW);
    delay(150);
  }
  
  delay(300);
 
  for(int i = 0; i < 3; i++) {
    digitalWrite(LED1, HIGH);
    delay(450);
    digitalWrite(LED1, LOW);
    delay(450);
  }
  
  delay(300);
  
  for(int i = 0; i < 3; i++) {
    digitalWrite(LED1, HIGH);
    delay(150);
    digitalWrite(LED1, LOW);
    delay(150);
  }
  
  delay(2000);
}

void loop() {
  blinkSOS();
}