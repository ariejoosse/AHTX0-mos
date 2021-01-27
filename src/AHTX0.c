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

#include "AHTX0.h"

/*!
 *    @brief  Instantiates a new AHTX0 class
 */
static int8_t user_i2c_write(uint8_t dev_id, uint8_t reg_addr,
                             uint8_t *reg_data, uint16_t len) {
  
  return 0;
}


