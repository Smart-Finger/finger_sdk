
#include "../../include/common/CommunicatorUDP.hpp"
#include "../../include/common/CommandInterface.hpp"
#include "../../include/common/StateInterface.hpp"
namespace SMART_FINGER_SDK
{
  virtual int CommunicatorUDP::Send(CommandInterface &cmd)
  {
    cout << "正在通过CommunicatorUDP发送指令..." << endl;
    int size = cmd.GetSize();
    cout << "发送的数据大小为:" << size << "字节" << endl;
  }

  virtual int CommunicatorUDP::Recv(StateInterface &state)
  {
    cout << "正在通过CommunicatorUDP接收状态..." << endl;
    int size = state.GetSize();
    cout << "接收的数据大小为:" << size << "字节" << endl;
  }

}
