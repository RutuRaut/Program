#include<iostream>
using namespace std;
int sumofdigit(int num)
{
     int sum=0;
        while(num>0)
        {
          int rem=num%10;
           sum=sum+rem;
           num/=10;
        }
        return sum;
}
int reducedno(int num)
{
    while(num>10)
    {
      num=sumofdigit(num);
    }
    return num;
}
bool contains(int num)
{
    while(num>0)
    {
        if(num%10==5)
        {
         return true;    
        }
        num/=10;
    }
    return false;
}
int main()
{
    for(int num=1;num<=100;num++)
    {
        if(reducedno(num)==5 && contains(num) )
        {
        cout<<num<<" ";
        
         }
     }
   return 0;
}
