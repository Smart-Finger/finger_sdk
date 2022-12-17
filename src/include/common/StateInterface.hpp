/*
  状态基类
*/
#ifndef STATE_INTERFACE_H
#define STATE_INTERFACE_H

namespace SMART_FINGER_SDK
{
  class StateInterface
  {
  private:
    /* data */
  public:
    StateInterface(/* args */) {}
    ~StateInterface() {}
    inline virtual int GetSize(void) const = 0;
  };

}

#endif