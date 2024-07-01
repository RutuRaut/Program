#include<iostream>
using namespace std;
int removespecificdigit(int num,int d)
{
    int temp=num;
    int result=0;
    int place=1;
    while(temp>0)
    {
    int rem=temp%10;
    if(rem!=d)
    {
      result=result+rem*place;
      place *=10;
    }
    temp/=10;
  }
  return result;
}
int main()
{
    int num=12415;
    int d=5;
    cout<<removespecificdigit(num, d);
}
