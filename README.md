# ESP32-touchsensor-as-stable-button
this really simple library will let you use esp32's touch sensor as a stable button 


## example code
```cpp
#include "touchSensor.h"

TouchSensor selectButton(T9); //pin number

void setup() {}
void loop()
{
  selectButton.checkSensor();
  if(isTouched()) {
    //codes when it detect touch
  }
}
