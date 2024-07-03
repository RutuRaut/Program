#include<iostream>
using namespace std;
class Array
{
public:
  int arr[5];
  void fill ()
  {
	for (int i = 0; i < 5; i++)
	  {
		cin >> arr[i];
	  }
  }

  void display ()
  {

	for (int i = 0; i < 5; i++)
	  {
		cout << arr[i] << " ";
	  }
	cout << endl;
  }

  int maxarray ()
  {
	int max = arr[0];
	for (int i = 0; i < 5; i++)
	  {
		if (arr[i] > max)
		  {
			max = arr[i];
		  }
	  }
	return max;
  }

  int minarray ()
  {
	int min = arr[0];
	for (int i = 0; i < 5; i++)
	  {
		if (arr[i] < min)
		  {
			min = arr[i];
		  }
	  }
	return min;
  }
};

int
main ()
{
  Array a;
  cout << "enter the values of array" << endl;
  a.fill ();
  cout << "Displaying the values" << endl;
  a.display ();
  cout << "Maximum value of array =" << a.maxarray () << endl;
  cout << "Minimun value of array = " << a.minarray () << endl;
}
