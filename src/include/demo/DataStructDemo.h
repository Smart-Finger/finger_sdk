#ifndef _SMART_FINGER_STATE_H_
#define _SMART_FINGER_STATE_H_
#include <stdint.h>
#include <array>
typedef struct
{
  // float quaternion[4];               // quaternion, normalized, (w,x,y,z)
  std::array<float, 4> quaternion;
  // float gyroscope[3];                // angular velocity （unit: rad/s)
  std::array<float, 3> gyroscope;
  // float accelerometer[3];            // m/(s2)
  std::array<float, 3> accelerometer;
  // float rpy[3];                      // euler angle（unit: rad)
  std::array<float, 3> rpy;
  int8_t temperature;
} IMU;

typedef struct
{
  uint8_t r;
  uint8_t g;
  uint8_t b;
} LED; // foot led brightness: 0~255

typedef struct
{
  uint8_t mode; // motor working mode
  float q;      // current angle (unit: radian)
  float dq;     // current velocity (unit: radian/second)
  float ddq;    // current acc (unit: radian/second*second)
  float tauEst; // current estimated output torque (unit: N.m)
  float q_raw;  // current angle (unit: radian)
  float dq_raw; // current velocity (unit: radian/second)
  float ddq_raw;
  int8_t temperature; // current temperature (temperature conduction is slow that leads to lag)
  // uint32_t reserve[2];
  std::array<uint32_t, 2> reserve;
} MotorState; // motor feedback

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

#endif