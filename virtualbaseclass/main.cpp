#include<iostream>
using namespace std;
class A
{
   public:
   void show()
   {
      cout<<"class A"<<endl;
   }
};
class B:virtual public  A
{
    public:
    
};
class C:virtual public  A
{
  public:   
};
class D:public B,public C 
{
  public:  
};
int main()
{
    D d;
    d.show();
}