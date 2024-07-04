#include<iostream>
using namespace std;
class A
{
    private:
    int a;
    protected :
    int b;
    public:
    A(int x, int y)
    {
        a=x;
        b=y;
    }
   friend class B;
 };
class B
{
    public:
    void display( A & obj)
    {
       cout<<"The value of A ="<<obj.a<<endl;
       cout<<"The value of B = "<<obj.b<<endl;
    }
};
int main()
{
    A a(8,9);
    B b;
    b.display(a);
}