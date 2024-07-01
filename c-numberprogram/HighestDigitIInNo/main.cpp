#include<iostream>
using namespace std;
int main()
{
    int num=1672;
    int x=0;
    while(num>0)
    {
        int rem=num%10;
        if(rem>x)
        {
            x=rem;
        }
        num/=10;
    }
    cout<<x<<endl;
}