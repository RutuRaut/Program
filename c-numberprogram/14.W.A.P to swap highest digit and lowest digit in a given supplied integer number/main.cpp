#include <iostream>
using namespace std;
int main() 
{
    int num = 1398;
    int original_num = num; 
    int max = 0;
    int min = 9;
    while (num > 0) 
    {
        int rem = num % 10;
        if (rem > max) 
        {
           max= rem;  
        }
        if (rem < min) 
        {
           min = rem;
        }
        num /= 10;
    }
   cout<<"maxinum digit ="<<max<<endl;
   cout<<"mininum digit ="<<min<<endl;
   num = original_num;
    int temp = 0;
    int place = 1;

    while (num > 0) 
    {
        int rem = num % 10;
        if (rem == max) 
        {
            rem = min;
        } 
        else if (rem == min) 
        {
            rem = max;
        }
       temp += rem * place;
        place *= 10;
        num /= 10;
    }
  cout << temp << endl;
  return 0;
}