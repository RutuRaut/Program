#include<iostream>
using namespace std;
int occurance(int num,int d)
{
    int count=0;
    while(num>0)
    {
        int rem=num%10;
        if(rem==d)
        {
            count++;
        }
        num/=10;
    }
    return count;
}
int main()
{
    int num=124654;
    int d=4;
    int result=occurance( num, d);
    if(result>0)
    {
       cout<<d<<" have "<<result<<" occurrences "<<endl;
    }
    else
    {
        cout<<d<<" have no any occurrences."<<endl;
    }
}