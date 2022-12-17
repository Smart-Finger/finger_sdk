/*
  状态基类
*/
#ifndef COMMANDINTERFACE_HPP
#define COMMANDINTERFACE_HPP

namespace SMART_FINGER_SDK
{
  class CommandInterface
  {
  public:
    CommandInterface(void) {}
    ~CommandInterface() {}
    virtual int GetSize(void) const = 0;
  };

}

#endif