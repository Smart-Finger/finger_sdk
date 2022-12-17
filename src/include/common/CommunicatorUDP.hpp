#ifndef COMMUNICATORUDP_H
#define COMMUNICATORUDP_H
#include "CommandInterface.hpp"
#include "StateInterface.hpp"
#include "CommunicatorInterface.hpp"
namespace SMART_FINGER_SDK
{
  class CommunicatorUDP : public CommunicatorInterface
  {
  private:
    /* data */
  public:
    CommunicatorUDP(/* args */) {}
    ~CommunicatorUDP() {}
    virtual int Send(CommandInterface &cmd);
    virtual int Recv(StateInterface &state);
  };

}

#endif