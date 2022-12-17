
#include "../../include/demo/RobotDemo.hpp"
#include "../../include/common/CommunicatorUDP.hpp"
#include "../../include/demo/LowLevelStateDemo.hpp"
#include "../../include/demo/LowLevelCommandDemo.hpp"
#include <iostream>
using namespace std;
namespace SMART_FINGER_SDK
{

  RobotDemo::RobotDemo()
  {
    // 构造函数，这里主要是指明一些结构。默认构造函数就采取默认的配置方案。
    // 默认的配置方案是UDP、底层状态和底层指令。
    this->communicator = CommunicatorUDP(); // 使用UDP通信。
    this->state = LowLevelStateDemo();
    this->command = LowLevelCommandDemo();
    cout << "Robot Demo created with default settings." << endl;
  }

  RobotDemo::~RobotDemo()
  {
  }
}