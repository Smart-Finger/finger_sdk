/*
  通信接口抽象基类：用于实现机器人和外界的通信。
*/
#ifndef _SMART_FINGER_COMMUNICATION_H_
#define _SMART_FINGER_COMMUNICATION_H_
#include "CommandInterface.hpp"
#include "StateInterface.hpp"

namespace SMART_FINGER_SDK
{
  class CommunicatorInterface
  {
  private:
    /* data */
  public:
    CommunicatorInterface(){};
    virtual ~CommunicatorInterface(){};
    virtual int Send(Command command) = 0;
    virtual int Recv(State state) = 0;
  };
}

#endif