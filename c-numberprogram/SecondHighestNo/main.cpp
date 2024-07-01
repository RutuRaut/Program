#include<iostream>
using namespace std;
int main()
{
    int num=97682;
    int MaxDigit=0;
    int SecondMaxDigit=0;
    while(num>0)
    {
      int rem=num%10;
      if(rem>MaxDigit)
      {
       SecondMaxDigit =MaxDigit;
        MaxDigit=rem;
       }
       else if(rem>SecondMaxDigit && rem !=MaxDigit )
       {
         SecondMaxDigit=rem;  
       }
       num/=10;
    }
    cout<<SecondMaxDigit<<endl;
 }