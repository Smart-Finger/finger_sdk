#ifndef CommunicatorUDP
#define CommunicatorUDP
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
    CommunicatorUDP(/* args */);
    ~CommunicatorUDP();
    virtual int Send(CommandInterface &cmd);
    virtual int Recv(StateInterface &state);
  };

  CommunicatorUDP::CommunicatorUDP(/* args */)
  {
  }

  CommunicatorUDP::~CommunicatorUDP()
  {
  }

}

#endif