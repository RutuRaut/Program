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
   friend void display(A &obj);
 };
 void display(A &obj)
 {
    cout<<"the value  A  ="<<obj.a<<endl;
    cout<<"the value  B  ="<<obj.b<<endl;
}
int main()
{
    A b(3,4);
    display(b);
}