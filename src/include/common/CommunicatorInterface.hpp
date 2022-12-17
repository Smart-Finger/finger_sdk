/*
  通信接口抽象基类：用于实现机器人和外界的通信。
*/
#ifndef COMMUNICATORINTERFACE_H
#define COMMUNICATORINTERFACE_H
#include "StateInterface.hpp"
#include "CommandInterface.hpp"
namespace SMART_FINGER_SDK
{
  class CommunicatorInterface
  {
  private:
    /* data */
  public:
    CommunicatorInterface(){};
    virtual ~CommunicatorInterface(){};
    virtual int Send(CommandInterface &cmd) = 0;
    virtual int Recv(StateInterface &state) = 0;
  };
}

#endif