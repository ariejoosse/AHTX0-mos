/*!
 *  @file Adafruit_AHTX0.cpp
 *
 *  @mainpage Adafruit AHTX0 Humidity and Temperature Sensor library
 *
 *  @section intro_sec Introduction
 *
 * 	I2C Driver for the Adafruit AHTX0 Humidity and Temperature Sensor
 * library
 *
 * 	This is a library for the Adafruit AHT20 breakout:
 * 	https://www.adafruit.com/product/4566
 *
 * 	Adafruit invests time and resources providing this open source code,
 *  please support Adafruit and open-source hardware by purchasing products from
 * 	Adafruit!
 *
 *  @section dependencies Dependencies
 *  This library depends on the Adafruit BusIO library
 *
 *  This library depends on the Adafruit Unified Sensor library
 *
 *  @section author Author
 *
 *  Limor Fried (Adafruit Industries)
 *
 * 	@section license License
 *
 * 	BSD (see license.txt)
 *
 * 	@section  HISTORY
 *
 *     v1.0 - First release
 */

/*#include "Arduino.h"*/

#include "Adafruit_AHTX0.h"

/*!
 *    @brief  Instantiates a new AHTX0 class
 */
Adafruit_AHTX0::Adafruit_AHTX0(void) {}

Adafruit_AHTX0::~Adafruit_AHTX0(void) {
  if (temp_sensor) {
    delete temp_sensor;
  }
  if (humidity_sensor) {
    delete humidity_sensor;
  }
}


