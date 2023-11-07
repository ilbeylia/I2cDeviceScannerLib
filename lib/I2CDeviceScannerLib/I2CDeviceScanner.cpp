#include "I2CDeviceScanner.h"


void I2CDeviceScanner(){
    
    //If it is not started in the installation section
    //Wire.begin();  
    
    for (byte address = 1; address < 127; ++address) {
        Wire.beginTransmission(address);
        byte error = Wire.endTransmission();

        if (error == 0) {
        Serial.print("I2C device found at address 0x");
        if (address < 16)
            Serial.print("0");
        Serial.print(address, HEX);
        Serial.println(" !");
        }
    }

}