#include <iostream>
using namespace std;
class Result
{
    public:
    int rollno;
    string name;
    int marks[3];
    void input()
    {
        cout<<"enter a rollno"<<endl;
        cin>>rollno;
        cout<<"enter a name "<<endl;
        cin>>name;
        cout<<"enter the marks"<<endl;
        for(int i=0;i<3;i++)
        {
            cin>>marks[i];
        }
    }
    void show()
    {
        cout<<"RollNo = "<<rollno<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Marks Are"<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<marks[i]<<" ";
        }
        cout<<endl;
    }
    int totalmarks()
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            sum+=marks[i];
        }
       return sum;
    }
   float AvgMarks()
    {
       return static_cast<float>(totalmarks())/3;
    }
};
int main()
{
    Result r;
    r.input();
    r.show();
    cout<<"Total Marks are ="<<r.totalmarks()<<endl;
    cout<<"Average Marks are ="<<r.AvgMarks()<<endl;
    return 0;
}