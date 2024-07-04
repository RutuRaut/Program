#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int a;
    protected:
    int b;
    public:
    A(int x, int y)
    {
        a=x;
        b=y;
    }
    friend void display( A &obj , B &obj1);
};
class B:public A
{
    private:
    int c;
    public:
    B(int x,int y,int z):A(x,y)
    {
       c=z; 
    }
    friend void display( A &obj , B &obj1);
 };
 void display( A &obj , B &obj1)
 {
    cout<<"The value Of A = "<<obj.a<<endl;
    cout<<"The value Of B = "<<obj.b<<endl;
     cout<<"The value Of C= "<<obj1.c<<endl;
 }
int main()
{
    A a(3,4);
    B b(3,4,7);
    display(a,b);
}
