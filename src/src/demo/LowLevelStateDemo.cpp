#include "../../include/demo/LowLevelStateDemo.hpp"
namespace SMART_FINGER_SDK
{
  int LowLevelStateDemo::GetX(void) const
  {
    return this->command_struct._x;
  }
  int LowLevelStateDemo::GetY(void) const
  {
    return this->command_struct._y;
  }
  double *LowLevelStateDemo::GetSpeed(void) const
  {
    double ans[3];
    memcpy(ans, this->command_struct._speed, sizeof(double) * 3);
    return ans;
  }

}