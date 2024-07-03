#include<iostream>
using namespace std;
class Employee
{
    int EmpNo;
    float Compensation;
    public:
    void setdata()
    {
      cout<<"Enter the Employee No "<<endl;
      cin>>EmpNo;
      cout<<"Enter the Employee Compensation "<<endl;
       cin>>Compensation;
    }
    void display()
    {
      cout<<"Employee No ="<<EmpNo<<endl;
      cout<<"Employee Compensation ="<<Compensation<<endl;
    }
};
int main()
{
    Employee e1;
    e1.setdata();
    e1.display();
    return 0;
}