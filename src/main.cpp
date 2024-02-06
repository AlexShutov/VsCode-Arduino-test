#include <Arduino.h>

#define BLINK_DELAY 100

uint16_t counter;

// put function declarations here:
int myFunction(int, int);
void initSerial();
void printStringToSerial();
void establishContact();

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  counter = 0;
  initSerial();
}

void loop() {
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  // wait for a second
  delay(BLINK_DELAY);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
   // wait for a second
  delay(BLINK_DELAY);

  printStringToSerial();
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}

void initSerial() {
  Serial.begin(9600);
  while (!Serial) {}
  // establishContact();
}

void printStringToSerial() {
  Serial.print("iteration #");
  Serial.print(counter++);
  Serial.println(" ..");
}