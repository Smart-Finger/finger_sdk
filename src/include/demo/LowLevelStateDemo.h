/*
  状态基类
*/
#ifndef _SMART_FINGER_ROBOT_DEMO_H_
#define _SMART_FINGER_ROBOT_DEMO_H_

#include "../common/State.h"
#include "./DataStructDemo.h"

class LowLevelStateDemo : State
{
private:
  LowLevelStateStructDemo lowLevelStateStructDemo;

public:
  LowLevelStateDemo(/* args */);
  ~LowLevelStateDemo();
};

LowLevelStateDemo::LowLevelStateDemo(/* args */)
{
}

LowLevelStateDemo::~LowLevelStateDemo()
{
}

int main(int argc, char const *argv[])
{
  LowLevelStateStructDemo A;
  return 0;
}

#endif