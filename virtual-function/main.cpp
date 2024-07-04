#include<iostream>
using namespace std;
class A
{
  public:
  virtual void display()
  {
      cout<<"class A"<<endl;
  }
};
class B:public A
{
    void display()
    {
        cout<<"class B"<<endl;
    }
};
int main()
{
    A *p;
    B b;
    p=&b;
    p->display();
}