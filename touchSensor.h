#ifndef TOUCHSENSOR_H
#define TOUCHSENSOR_H

#include "arduino.h"

class TouchSensor {
  private:
    unsigned long previousTime = 0; // prevent multiple touch
    int _tNum;  // the Pin number of touch sensor
    int _tRead; // the Value from touch sensor
    int _readRange = 10; // the Range of the value, 0-60 or 0-150
    
  public:
    TouchSensor(int tNum, int tRead) {
      _tNum = tNum;
      _tRead = tRead;
    }
  public:
    void checkSensor();
    bool isTouched();
   
};

#endif
