#include<iostream>
using namespace std;
int main()
{
  int num=11111;
  int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
    while(num>0)
    {
     int rem=num%10;
     switch(rem)
     {
         case 0:count0++;break;
         case 1:count1++;break;
         case 2:count2++;break; 
         case 3:count3++;break;
         case 4:count4++;break;
         case 5:count5++;break;
         case 6:count6++;break;
         case 7:count7++;break;
         case 8:count8++;break;
         case 9:count9++;break;
      }
        num/=10;
    }
    if(count0 >0)cout<<"0 ="<<count0<<endl;
    if(count1 >0)cout<<"1 ="<<count1<<endl;
    if(count2 >0)cout<<"2 ="<<count2<<endl;
    if(count3 >0)cout<<"3 ="<<count3<<endl;
    if(count4 >0)cout<<"4 ="<<count4<<endl;
    if(count5 >0)cout<<"5 ="<<count5<<endl;
    if(count6 >0)cout<<"6 ="<<count6<<endl;
    if(count7 >0)cout<<"7 ="<<count7<<endl;
    if(count8 >0)cout<<"8 ="<<count8<<endl;
    if(count9 >0)cout<<"9 ="<<count9<<endl;
    return 0;
}