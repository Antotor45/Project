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
    right.advance(actualSpeed);
  }

  void goBack(int actualSpeed) {
    left.goBack(actualSpeed);
    right.goBack(actualSpeed);
  }

  void turnRightLarge(int actualSpeed) {
    left.advance(actualSpeed);
    if (actualSpeed > 20) {
      right.advance(actualSpeed - 20);
    }
    else {
      right.stop();
    }
  }

  int getSpeed() {
    return left.getSpeed();
  }
};
