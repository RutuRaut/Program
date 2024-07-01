#include <iostream>
using namespace std;
int main() {
int num=12345;
int count=0;
while(num>0)
{
     int rem=num%10;
     count++;
     num/=10;
}
cout<<"Count ="<<count<<endl;
return 0;
}
