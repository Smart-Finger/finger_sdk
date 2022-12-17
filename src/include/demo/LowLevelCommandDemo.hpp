#ifndef LOWLEVWLCOMMANDDEMO_H
#define LOWLEVWLCOMMANDDEMO_H
#include "../common/CommandInterface.hpp"
namespace SMART_FINGER_SDK
{
  struct LowLevelCommandDemoStruct
  {
    int _x;
    int _y;
    double _speed[3];
  };

  class LowLevelCommandDemo : public CommandInterface
  {
  private:
    LowLevelCommandDemoStruct command_struct;

  public:
    LowLevelCommandDemo(/* args */){};
    ~LowLevelCommandDemo(){};
    int SetX(int x);
    int SetY(int y);
    int SetSpeed(double speed[3]);
    virtual int GetSize(void) const { return sizeof(command_struct); }
  };
}
#endif