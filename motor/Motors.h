class Motors {

    Motor left;
    Motor right;

  public:
    void setup(Motor leftMotor, Motor rightMotor) {
      left = leftMotor;
      right = rightMotor;
    }

    void advance(int actualSpeed) {
      left.advance(actualSpeed);
    }

    int getSpeed() {
      return left.getSpeed();
    }
};
