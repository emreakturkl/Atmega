#include <avr/io.h>
#include <util/delay.h>
#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <SoftwareSerial.h>
#include <EEPROM.h>

#define PRINT(x) Serial.println(x);

void setup();
void loop();

int main(void)
{
  init();
  setup();

  while (1)
    loop();
        
  return 0;
}

void setup() {
  Serial.begin(9600);
}

void loop()
{
  PRINT("HELLO WORLD.");
  delay(1000);
}