#include "../src/include/common/CommunicatorUDP.hpp"
#include "../src/include/demo/LowLevelCommandDemo.hpp"
#include "../src/include/demo/LowLevelStateDemo.hpp"
#include "../src/include/common/CommunicatorInterface.hpp"
#include <iostream>
#include <typeinfo>
using namespace SMART_FINGER_SDK;
using namespace std;
int main()
{
  cout << typeid(CommunicatorUDP()).name() << endl;
  CommunicatorUDP udp = CommunicatorUDP();
  CommunicatorInterface &cif = udp;
  LowLevelCommandDemo low_cmd = LowLevelCommandDemo();
  LowLevelStateDemo low_state = LowLevelStateDemo();
  cif.Send(low_cmd);
  cif.Recv(low_state);
}