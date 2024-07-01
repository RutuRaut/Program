#include<iostream>
using namespace std;
int primeno(int num)
{
    int count=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    return(count==2);
}
int main()
{
    int num=7;
    int temp=num;
    int count=0;
    while(count<10)
    {
        if(primeno(temp))
        {
            cout<<temp<<" ";
            count++;
         }
        temp++;
    }
}