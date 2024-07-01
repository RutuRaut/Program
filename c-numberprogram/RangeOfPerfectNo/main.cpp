#include <iostream>
using namespace std;
int main()
{ 
   for(int num=1;num<=10000;num++)
   {
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
     cout<<num<<" ";
   }
}
  return 0;
}