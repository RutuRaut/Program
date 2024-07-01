#include<iostream>
using namespace std;
int main()
{
    int num=876309;
    int sortnum=0;
    for(int i=0;i<=9;i++)
    {
        int temp=num;
        while(temp>0)
        {
            int rem=temp%10;
            if(rem==i)
            {
                sortnum=sortnum*10+rem;
            }
            temp/=10;
        }
    }
    cout<<sortnum<<endl;
}