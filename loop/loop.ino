#define SIZE 10
int timer = 100;           // The higher the number, the slower the timing.
int pins[SIZE] = {4,7,8,10,11,12,13,5,6,9};

void setup() {
  for (int i=0; i<SIZE; i++){
   pinMode(pins[i], OUTPUT);
  }
}
   
void loop() {
  for (int i=0; i<SIZE; i++){
    digitalWrite(pins[i], HIGH);
    delay(timer);
    digitalWrite(pins[i], LOW);
  }
}
