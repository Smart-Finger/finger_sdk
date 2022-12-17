#ifndef LowLevelCommandDemo
#define LowLevelCommandDemo
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
    LowLevelCommandDemo(/* args */);
    ~LowLevelCommandDemo();
    int SetX(int x);
    int SetY(int y);
    int SetSpeed(double speed[3]);
    inline virtual int GetSize(){return sizeof(command_struct)};
  };

  LowLevelCommandDemo::LowLevelCommandDemo(/* args */)
  {
    thie->command_struct = {0};
  }

  LowLevelCommandDemo::~LowLevelCommandDemo()
  {
  }
}
#endif