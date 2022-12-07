/*****************************************************************
 Copyright (c) 2020, Unitree Robotics.Co.Ltd. All rights reserved.
******************************************************************/

#ifndef _FINGER_CONFIG_H_
#define _FINGER_CONFIG_H_

namespace FINGER_SDK
{
  constexpr double finger_Hip_max = 1.047;    // unit:radian ( = 60   degree)
  constexpr double finger_Hip_min = -0.873;   // unit:radian ( = -50  degree)
  constexpr double finger_Thigh_max = 3.927;  // unit:radian ( = 225  degree)
  constexpr double finger_Thigh_min = -0.524; // unit:radian ( = -30  degree)
  constexpr double finger_Calf_max = -0.611;  // unit:radian ( = -35  degree)
  constexpr double finger_Calf_min = -2.775;  // unit:radian ( = -159 degree)
}

#endif