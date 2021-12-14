#include "motor.h"
class Motors {

    Motor left;
    Motor right;

  public:
    void setup(int pinI1, int pinI2, int pinEA, int pinI3, int pinI4, int pinEB) {
      left = Motor();
      right = Motor();

      left.setup(pinI3, pinI4, pinEB);
      right.setup(pinI1, pinI2, pinEA);
    }

    void advance(int actualSpeed) {
      left.advance(actualSpeed);
      right.advance(actualSpeed);
    }

    void goBack(int actualSpeed) {
      left.goBack(actualSpeed);
      right.goBack(actualSpeed);
    }

    void stop() {
      left.stop();
      right.stop();
    }

    //Right
    void rotateRight() {
      left.advance();
      right.goBack();
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

    void turnRightShort(int actualSpeed) {
      left.advance(actualSpeed);
      right.stop();
    }

    //Left
    void rotateLeft() {
      left.goBack();
      right.advance();
    }

    void turnLeftLarge(int actualSpeed) {
      right.advance(actualSpeed);
      if (actualSpeed > 20) {
        left.advance(actualSpeed - 20);
      }
      else {
        left.stop();
      }
    }

    void turnLeftShort(int actualSpeed) {
      right.advance(actualSpeed);
      left.stop();
    }

    int getSpeed() {
      return left.getSpeed();
    }

    void setSpeed(int speed) {
      left.setWheelSpeed(speed);
      right.setWheelSpeed(speed);
    }

    Motor getLeftMotor() {
      return left;
    }
    Motor getRightMotor() {
      return right;
    }
};
