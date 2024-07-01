#include <iostream>
using namespace std;
int main()
{ 
    int num=6;
    int temp=num;
    int sum=0;
   for(int i=1;i<temp;i++)
    {
       if(temp%i==0) 
        {
           sum=sum+i;
        }
    }
   if(sum==num)
   {
       cout<<"perfect No"<<endl;
   }
   else
   {
       cout<<"not perfect No"<<endl;
   }
  return 0;
}