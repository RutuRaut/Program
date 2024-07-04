#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"class A"<<endl;
    }
   virtual ~  A()
    {
        cout<<"destructor of class A"<<endl;
    }
};
class B: public A
{
    public:
    B()
    {
        cout<<"class B"<<endl;
    }
    ~B()
    {
        cout<<"destructor  of class B"<<endl;
    }
};
int main()
{
    A *p=new B();
    delete p;
}