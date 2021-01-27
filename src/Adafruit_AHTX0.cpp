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
static int8_t user_i2c_write(uint8_t dev_id, uint8_t reg_addr,
                             uint8_t *reg_data, uint16_t len) {
  /*
   * The parameter dev_id can be used as a variable to store the I2C address of
   * the device
   */

  /*
   * Data on the bus should be like
   * |------------+---------------------|
   * | I2C action | Data                |
   * |------------+---------------------|
   * | Start      | -                   |
   * | Write      | (reg_addr)          |
   * | Write      | (reg_data[0])       |
   * | Write      | (....)              |
   * | Write      | (reg_data[len - 1]) |
   * | Stop       | -                   |
   * |------------+---------------------|
   */
  // int8_t rslt = 0; /* Return 0 for Success, non-zero for failure */

  struct mgos_i2c *i2c = mgos_i2c_get_global();
  if (NULL == i2c) {
    LOG(LL_INFO, ("Could not get i2c global instance"));
    return -1;
  }

  bool ok = mgos_i2c_write_reg_n(i2c, dev_id, reg_addr, len, reg_data);
  return ok ? 0 : -2;
}


