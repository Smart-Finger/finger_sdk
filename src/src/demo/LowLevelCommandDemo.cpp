#include "../../include/demo/LowLevelCommandDemo.hpp"
namespace SMART_FINGER_SDK
{
  int LowLevelCommandDemo::SetX(int x)
  {
    this->command_struct._x = x;
  }
  int LowLevelCommandDemo::SetY(int y)
  {
    this->command_struct._y = y;
  }
  int LowLevelCommandDemo::SetSpeed(double speed[3])
  {
    memcpy(this->command_struct._speed, speed, sizeof(double) * 3);
  }

}