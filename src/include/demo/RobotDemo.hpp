/*
  状态基类
*/
#ifndef RobotDemo
#define RobotDemo

#include "../common/Robot.hpp"
#include "../common/CommandInterface.hpp"
#include "../common/StateInterface.hpp"
#include "../common/CommunicatorInterface.hpp"
namespace SMART_FINGER_SDK
{
  class RobotDemo : public Robot
  {
  private:
    CommunicatorInterface *communicator;
    StateInterface *state;
    CommandInterface *command;

  public:
    RobotDemo();
    ~RobotDemo();
    virtual CommunicatorInterface GetCommunicator() const { return *communicator; }
    virtual StateInterface GetState() const { return *state; }
    virtual CommandInterface GetCommand() const { return *command; }
  };
}
#endif