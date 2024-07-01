#include <iostream>
using namespace std;
int main() {
    int num = 123;
    int temp=num;
   int sum=0;
   while(temp>0)
   {
       int rem=temp%10;
       sum=sum*10+rem;
      temp/=10;
   }
  if(sum==num)
  {
      cout<<"its palindrome"<<endl;
  }
  else
  {
      cout<<"not palindrome"<<endl;
  }
return 0;
}