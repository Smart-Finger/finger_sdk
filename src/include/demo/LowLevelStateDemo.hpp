#ifndef LOWLEVELSTATEDEMO_H
#define LOWLEVELSTATEDEMO_H
#include "../common/StateInterface.hpp"
namespace SMART_FINGER_SDK
{

  struct LowLevelStateDemoStruct
  {
    int _x;
    int _y;
    double _speed[3];
  };

  class LowLevelStateDemo : public StateInterface
  {
  private:
    LowLevelStateDemoStruct state_struct;

  public:
    LowLevelStateDemo(/* args */){};
    ~LowLevelStateDemo(){};
    int GetX(void) const;
    int GetY(void) const;
    double *GetSpeed(void) const;
    inline virtual int GetSize(void) const { return sizeof(state_struct); }
  };

}
#endif