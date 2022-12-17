/*
  状态基类
*/
#ifndef Robot
#define Robot

class Robot
{
private:
  /* data */
public:
  Robot(/* args */);
  virtual ~Robot();
  virtual CommunicatorInterface GetCommunicator() const = 0;
  virtual StateInterface GetState() const = 0;
  virtual CommandInterface GetCommand() const = 0;
};

Robot::Robot(/* args */)
{
}

virtual Robot::~Robot()
{
}

#endif