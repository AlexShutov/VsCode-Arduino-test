#include <Arduino.h>

#define BLINK_DELAY 10000

// put function declarations here:
int myFunction(int, int);
void initSerial();
void printStringToSerial();


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
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
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }
}

void printStringToSerial() {
  Serial.println("Hello!");
}