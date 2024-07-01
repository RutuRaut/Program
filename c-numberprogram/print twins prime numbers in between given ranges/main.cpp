#include<iostream>
using namespace std;
int prime(int num)
{
    int c1=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c1++;
        }
    }
    return (c1==2);
}
int main()
{
    for(int num=1;num<=100;num++)
    {
        if(prime(num) && prime(num+2))
        {
            cout<<"("<<num<<","<<num+2<<")"<<","<<endl;
        }
    }
    return 0;
}