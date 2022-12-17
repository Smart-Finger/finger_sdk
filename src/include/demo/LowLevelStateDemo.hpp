#ifndef LowLevelStateDemo
#define LowLevelStateDemo
#include "../common/StateInterface.hpp"
namespace SMART_FINGER_SDK : public StateInterface
{

  struct LowLevelStateDemoStruct
  {
    int _x;
    int _y;
    double _speed[3];
  };

  class LowLevelStateDemo
  {
  private:
    LowLevelStateDemoStruct state_struct;

  public:
    LowLevelStateDemo(/* args */);
    ~LowLevelStateDemo();
    int GetX(void) const;
    int GetY(void) const;
    double *GetSpeed(void) const;
    inline virtual int GetSize(){return sizeof(state_struct)};
  };

  LowLevelStateDemo::LowLevelStateDemo(/* args */)
  {
    this->state_struct = {1};
  }

  LowLevelStateDemo::~LowLevelStateDemo()
  {
  }

}
#endif