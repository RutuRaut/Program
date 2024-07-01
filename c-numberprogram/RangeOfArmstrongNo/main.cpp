#include<iostream>
#include<cmath>
using namespace std;
int count(int num)
{
    int c1=0;
   while(num>0)
   {
       int rem=num%10;
       c1++;
       num/=10;
   }
   return c1;
}
int armstrong(int num)
{
    int temp=num;
    int c1=count(num);
    int sum=0;
    while(temp>0)
    {
        int rem=temp%10;
        sum+=pow(rem,c1);
        temp/=10;
    }
    return(sum==num);
}
int main() 
{
  for(int num=1;num<=1000;num++)
  {
   if(armstrong(num))
    {
        cout<<num<<" ";
    }
  }
}