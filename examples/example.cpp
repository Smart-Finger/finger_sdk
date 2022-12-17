#include "smart_finger_sdk.h"
using namespace std;

int main(int argc, char const *argv[])
{
  SMART_FINGER_SDK::RobotDemo robot = SMART_FINGER_SDK::RobotDemo();
  robot.connect();
  SMART_FINGER_SDK::Movement demo_movement = SMART_FINGER_SDK::Movement("DemoRobot", 0);
  demo_movement.run(robot);
};
