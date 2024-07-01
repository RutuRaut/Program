#include<iostream>
using namespace std;
int main()
{
  int num=145;
  int temp=num;
  int sum=0;
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
      cout<<"its strong no"<<endl;
  }
  else
  {
      cout<<"not a strong no"<<endl;
  }
}