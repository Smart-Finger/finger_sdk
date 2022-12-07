/*
  状态基类
*/
#ifndef _SMART_FINGER_ROBOT_DEMO_H_
#define _SMART_FINGER_ROBOT_DEMO_H_

#include "../common/Robot.h"
#include "./DataStructDemo.h"

class RobotDemo : Robot
{
private:
  LowLevelStateDemo lowlevel;

public:
  RobotDemo(/* args */);
  ~RobotDemo();
};

RobotDemo::RobotDemo(/* args */)
{
}

RobotDemo::~RobotDemo()
{
}

#endif