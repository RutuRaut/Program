#include <iostream>
using namespace std;
int main() {
int num=1234;
int sum=0;
while(num>0)
{
     int rem=num%10;
     if(num%2==1)
     {
     sum=sum+rem;
     }
     num/=10;
}
cout<<"Sum ="<<sum<<endl;
 
    return 0;
}