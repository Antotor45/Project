#include "motor.h"
class Motors {

    Motor left;
    Motor right;

  public:
    void setup() {
      
      left = Motor();
      right = Motor();
    }

    void advance(int actualSpeed) {
      left.advance(actualSpeed);
    }

    int getSpeed() {
      return left.getSpeed();
    }
};
