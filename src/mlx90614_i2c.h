// MIT License

// Copyright (c) 2022 Mario Filipovic

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef _MLX90614_I2C_H_
#define _MLX90614_I2C_H_

#include <stdint.h>

/**
 * @brief Factory default I2C address of MLX90614
 * 
 */
#define MLX90614_I2C_ADDR   0x5A

enum mlx90614_ram_reg
{
  eIrChannel1Raw = 0x04,
  eIrChannel2Raw,
  eTa,
  eTObj1,
  eTObj2,
};

enum mlx90614_eeprom_reg
{
  eToMax = 0x00,
  eToMin,
  ePWMCtrl,
  eTaRange,
  eEmissivity,
  eCfgReg1,
  eSMBusAddr = 0x0E,
  eIDNumber1RO = 0x1C,
  eIDNumber2RO,
  eIDNumber3RO,
  eIDNumber4RO,
};

/**
 * @brief MLX90614 device definition structure.
 * 
 */
typedef struct {
  uint8_t i2c_addr;
  uint16_t emissivity;
  uint16_t ta_range;

} mlx90614_dev_t;

#endif //_MLX90614_I2C_H_