class Motor {

  //definition du pin i1, i2 et EA
  int i1;
  int i2;
  int EA;

  //definition de la variable actualSpeed
  int actualSpeed = 0;

//on set les function en public
public:

  //on setup les variable d'un moteur et on définit touts les pins en output et on met les moteurs en off
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

  int getSpeed() {
    return actualSpeed;
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
};
