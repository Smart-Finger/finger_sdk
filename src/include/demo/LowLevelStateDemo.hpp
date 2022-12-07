/*
  状态基类
*/
#ifndef _SMART_FINGER_ROBOT_DEMO_H_
#define _SMART_FINGER_ROBOT_DEMO_H_

#include "../common/State.h"
#include "DataStructDemo.h"

typedef struct
{
  uint8_t levelFlag; // flag to distinguish high level or low level
  uint16_t commVersion;
  uint16_t robotID;
  uint32_t SN;
  uint8_t bandWidth;
  IMU imu;
  // MotorState motorState[20];
  std::array<MotorState, 20> motorState;
  // int16_t footForce[4];              // force sensors
  std::array<int16_t, 4> footForce;
  // int16_t footForceEst[4];           // force sensors
  std::array<int16_t, 4> footForceEst;
  uint32_t tick; // reference real-time from motion controller (unit: us)
  // uint8_t wirelessRemote[40];        // wireless commands
  std::array<uint8_t, 40> wirelessRemote;
  uint32_t reserve;
  uint32_t crc;
} LowLevelStateStructDemo;

class LowLevelStateDemo : State
{
private:
  LowLevelStateStructDemo lowLevelStateStructDemo;
  LowLevelStateStructDemo getLowLevelStateStructDemo(void)
  {
    return this.lowLevelStateStructDemo;
  };

public:
  LowLevelStateDemo(/* args */);
  ~LowLevelStateDemo();
  // 通过设置大量getters和setters提高代码的封装性。s
  uint8_t getLevelFlag(void)
  {
    return this.lowLevelStateStructDemo.levelFlag;
  };
};

LowLevelStateDemo::LowLevelStateDemo(/* args */)
{
}

LowLevelStateDemo::~LowLevelStateDemo()
{
}
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  cout << "Hello World!" << endl;
  return 0;
}

#endif