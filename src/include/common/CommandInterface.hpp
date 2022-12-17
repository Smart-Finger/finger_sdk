/*
  状态基类
*/
#ifndef CommandInterface
#define CommandInterface

namespace SMART_FINGER_SDK
{
  class CommandInterface
  {
  private:
    /* data */
  public:
    CommandInterface(void) {}
    ~CommandInterface() {}
    virtual int GetSize(void) const = 0;
  };

}

#endif