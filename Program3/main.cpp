#include<iostream>
using namespace std;
class Book
{
    public:
    int BookId;
    float Price;
    int Pages;
    void get()
    {
        cout<<"enter a BookId"<<endl;
        cin>>BookId;
        cout<<"enter a Price"<<endl;
        cin>>Price;
        cout<<"enter a Pages"<<endl;
        cin>>Pages;
    }
     void show()
    {
        cout<<" BookId ="<<BookId<<endl;
        cout<<" Price ="<<Price<<endl;
        cout<<" Pages ="<<Pages<<endl;
    }
     void set( int a,float b ,int c)
     {
        BookId=a;
        Price=b;
        Pages=c;
     }
   float getprice()
    {
       return Price; 
   }
};
int main()
{
  Book b1,b2;
  b1.get();
  b2.get();
  if(b1.getprice() >b2.getprice())
  {
     cout<<"The most costly book is "<<endl;
     b1.show();
  }
  else
  {
     cout<<"The most costly book is "<<endl; 
     b2.show();
  }
}