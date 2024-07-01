#include<iostream>
using namespace std;
int main()
{
  int num=123;
  int sum=0;
  while(num>0)
  {
      int fact=1;
      int rem=num%10;
      for(int i=1;i<=rem;i++)
      {
          fact=fact*i;
      }
      sum=sum+fact;
      num/=10;
  }
  cout<<"sum ="<<sum<<endl;
}