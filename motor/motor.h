class Motor {

  int i1;
  int i2;
  int EA;

  int actualSpeed = 0;

public:
  void setup(int pinI1, int pinI2, int pinEA) {
    i1 = pinI1;
    i2 = pinI2;
    EA = pinEA;
    pinMode(i1, OUTPUT);
    pinMode(i2, OUTPUT);
    pinMode(EA, OUTPUT);
    pinMode(i1, LOW);
    pinMode(i2, LOW);
  }

  void setWheelSpeed(int newSpeed) {
    actualSpeed = newSpeed;
  }

  void advance() {
    analogWrite(EA, actualSpeed);
    digitalWrite(i1, LOW);
    digitalWrite(i2, HIGH);
  }

  void advance(int newSpeed) {
    actualSpeed = newSpeed;
    analogWrite(EA, actualSpeed);
    digitalWrite(i1, LOW);
    digitalWrite(i2, HIGH);
  }

  void goBack() {
    analogWrite(EA, actualSpeed);
    digitalWrite(i1, HIGH);
    digitalWrite(i2, LOW);
  }

  void goBack(int newSpeed) {
    actualSpeed = newSpeed;
    analogWrite(EA, actualSpeed);
    digitalWrite(i1, HIGH);
    digitalWrite(i2, LOW);
  }

  void stop(){
    digitalWrite(i1, LOW);
    digitalWrite(i2, LOW);
  }

  int getSpeed() {
    return actualSpeed;
  }
};
