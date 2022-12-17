#include <iostream>
#include <vector>
using namespace std;
// 该文件用于测试抽象基类，即接口
class AnimalInterface
{
protected:
public:
  AnimalInterface() {}
  ~AnimalInterface() {}
  virtual void call() = 0; // 一个纯虚函数
};

class Cat : public AnimalInterface
{
public:
  virtual void call();
};

void Cat::call()
{
  cout << "Meow~" << endl;
};

class Dog : public AnimalInterface
{
private:
  /* data */
public:
  virtual void call();
};

void Dog::call()
{
  cout << "Wolf~" << endl;
};

int main(int argc, char const *argv[])
{
  Cat c = Cat();
  Dog d = Dog();
  AnimalInterface *arr[2] = {&c, &d};
  for (int i = 0; i < 2; i++)
  {
    arr[i]->call();
  }
}
