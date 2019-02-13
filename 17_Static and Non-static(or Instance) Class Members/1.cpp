#include<iostream>
#include<conio.h>

using namespace std;

class demo
{
	int a;				// non-static(or instance) data-member
	static int count;	// Declaration of static data-member
	
	public:
		demo()	// Default Constructor
		{ 
			a = 0;
		}
		
		demo(int x, int  y)	// Parameterized Constructor
		{
			a = x;
			count = y;
		}
		
		void show()
		{
			cout<<"a= "<<a;
			cout<<"\tcount= "<<count<<endl;
		}
		
		void setCount(int n)
		{
			count = n;
		}
		
		void showCount()
		{
			cout<<"count= "<<count<<endl;
		}
};

// Defining static data-member of class to use in main()
int demo::count=10;		// assigning initial value 10

int main()
{
	cout<<"Object d1:"<<endl;
	demo d1;
	d1.show();
	d1.showCount();
	
	cout<<"\nObject d2:"<<endl;
	demo d2(1,2);
	d2.show();
	d2.setCount(40);
	d2.show();
	
	cout<<"\nObject d1:"<<endl;
	d1.showCount();
	d1.show();
	
	getch();
	return 0;
}
