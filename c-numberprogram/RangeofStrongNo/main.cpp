#include<iostream>
using namespace std;
int main()
{
  for(int num=1;num<1000;num++)
  {
      int sum=0;
      int temp=num;
     while(temp>0)
    {
      int fact=1;
      int rem=temp%10;
      for(int i=1;i<=rem;i++)
      {
          fact=fact*i;
      }
      sum=sum+fact;
      temp/=10;
  }
  if(sum==num)
  {
     cout<<num<<" ";
  }
}
}