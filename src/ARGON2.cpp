/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/darwinwang/Documents/IoT/ARGON2/src/ARGON2.ino"
void setup();
void loop();
#line 1 "/Users/darwinwang/Documents/IoT/ARGON2/src/ARGON2.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

#define button D5
#define led D7

// setup() runs once, when the device is first turned on.
void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(D5, INPUT);
  pinMode(D7, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop()
{
  if (Serial1.available() > 0)
  {
    int value = Serial1.read();
    Serial.println(value);
    if (value == 1)
    {
      digitalWrite(D7, HIGH);
    }
    else if (value == 0)
    {
      digitalWrite(D7, LOW);
    }

    else if (value == 63)
    {
      Serial1.write(digitalRead(D5));
    }
  }
}