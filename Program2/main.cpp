#include<iostream>
using namespace std;
class Circle
{
    int radius;
    public:
    Circle()
    {
        radius=0;
    }
    void Setradius(int a)
    {
        radius=a;
    }
    void Area()
    {
        float area=radius*radius;
        cout<<"Area of Circle = "<<area<<endl;
    }
    void Circum()
    {
       float Circumference=2*3.14*radius;
       cout<<"Circumference of circle = "<<Circumference<<endl;
    }
};
int main()
{
     Circle c1;
     c1.Setradius(4);
     c1.Area();
     c1.Circum();
     return 0;
     
}