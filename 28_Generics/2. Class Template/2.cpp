// Example:- Implementing integer vector
// Assignment:- Implement generic vector using this example
#include<iostream>
#include<conio.h>

using namespace std;

class vector
{
	int size;
	int *v;

	public:
		vector(int s)	// create a null vector
		{
			v = new int[size=s];

			for(int i=0 ; i<size ; i++)
				v[i] = 0;
		}

		void setValue(int *a)	// initialize a vector from an array
		{
			for(int i=0 ; i<size ; i++)
				v[i] = a[i];
		}

		int operator *(vector &obj)	  // scalar Product
		{
			int sum=0;

			for(int i=0 ; i<size ; i++)
				sum = sum + v[i] * obj.v[i];

			return sum;
		}
};

int main()
{
	int x[3] = {1,2,3};
	int y[3] = {4,5,6};

	vector v1(3);	// creates a null vector of 3 integers
	vector v2(3);	// creates a null vector of 3 integers

	v1.setValue(x);		// sets values in v1 from array x
	v2.setValue(y);		// sets values in v2 from array y

	int R = v1 * v2;
	cout<<"R = "<<R;

	getch();
	return 0;
}