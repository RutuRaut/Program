#include <iostream>
using namespace std;
int main() 
{
  for(int num=1;num<=100;num++)
{
     int sum=0;
     int temp=num;
     while(temp>0)
     {
         int rem=temp%10;
         sum=sum*10+rem;
         temp/=10;
     }
     if(sum==num)
     {
     cout<<num<<" ";
     }
}
}