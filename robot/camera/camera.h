class Camera {

    int minDistance = 20;
    int distanceRobot = 32;
    int maxDistance = 45;

public:
    void checkDistance(int distance, Motors motors) {
        if (distance < minDistance) {
            if (motors.getSpeed() > 5) {
                motors.setSpeed(motors.getSpeed() - 5);
            }
        }
        if (distance > maxDistance) {
            if (motors.getSpeed() < 5) {
                motors.setSpeed(motors.getSpeed() + 5);
            }
        }
        if (distance = distanceRobot) {
            motors.getSpeed(motors.getSpeed() = motors.getSpeed());
        }
    }

};
