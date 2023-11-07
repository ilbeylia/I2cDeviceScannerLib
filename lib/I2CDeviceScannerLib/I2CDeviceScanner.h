/**
 * @brief I2CDeviceScannerLib , used to manage I2C Device Scanner operations in your project.
 *
 * This Library scans for I2C devices connected to the bus and prints their addresses to the serial monitor.
 *
 * @author [ilbeyli]
 * @date [7.11.2023]
 */
#ifndef I2CDeviceScannerLib_H
#define I2CDeviceScannerLib_H

#include <Arduino.h>
#include <Wire.h>

void I2CDeviceScanner();

#endif