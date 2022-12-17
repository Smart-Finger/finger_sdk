#include "../src/include/common/CommunicatorUDP.hpp"
#include "../src/include/demo/LowLevelCommandDemo.hpp"
#include "../src/include/demo/LowLevelStateDemo.hpp"
using namespace SMART_FINGER_SDK;
int main()
{
  CommunicatorUDP udp = CommunicatorUDP();
  LowLevelCommandDemo low_cmd = LowLevelCommandDemo();
  LowLevelStateDemo low_state = LowLevelStateDemo();
  udp.Send(low_cmd);
  udp.Recv(low_state);
}