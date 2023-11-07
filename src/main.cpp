#include <Arduino.h>
#include "I2CDeviceScanner.h"


void setup() {
  Serial.begin(115200);
  Wire.begin();
  I2CDeviceScanner(); // I2C listen and device address write to serial monitor
}

void loop() {

}

