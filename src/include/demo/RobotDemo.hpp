/*
  状态基类
*/
#ifndef _SMART_FINGER_ROBOT_DEMO_H_
#define _SMART_FINGER_ROBOT_DEMO_H_

#include "../common/Robot.hpp"
#include "./DataStructDemo.hpp"
#include "../common/CommandInterface.hpp"
#include "../common/StateInterface.hpp"
#include "../common/CommunicatorInterface.hpp"
namespace SMART_FINGER_SDK
{
  class RobotDemo
  {
  private:
    CommunicatorInterface *communicator;
    StateInterface *state;
    CommandInterface *command;

  public:
    RobotDemo(/* args */){};
    ~RobotDemo(){};
  };
}
#endif