#include <iostream>
using namespace std;
class Run
{
    public:
    string name;
   float distance;
    void setdata(string n,float d)
     {
       name=n;  
       distance=d;
     }
     void show()
     {
        cout<<"Name ="<<name<<endl;
        cout<<"Distance ="<<distance<<endl;
     }
 friend float operator >(Run& a,Run&b );
 };
 float  operator >(Run & a,Run&b)
{
    if(a.distance > b.distance)
    {
       return a.distance;
     }
    else
    {
      return b.distance;
    }
}
   
int main()
{
   Run aa;
   aa.setdata("rutuja",900.6);
   Run bb;
   bb.setdata("tanuja",800);
   if(aa>bb)
   {
      aa.show(); 
   }
   else
   {
       bb.show();
   }
 
}