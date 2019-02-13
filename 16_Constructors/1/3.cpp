#include<iostream>
#include<conio.h>

using namespace std;

class Demo
{
	private:
		// Instance data-members
		int x;
		int y;
		int z;

	public:

		Demo();					// Default Constructor
		Demo(int, int, int);	// Paramaterized Constructor
		Demo(const Demo&);		// Copy Constructor


		/* Inside the class definitions */

		//Member functions
		void set(int a, int b, int c)
		{
			cout<<"From set() function:\n";

			x=a;	y=b;	z=c;
		}

		void show()
		{
			cout<<"x="<<x<<"\ty="<<y<<"\tz="<<z<<"\n\n";
		}
};

/* Outside the class definitions */
Demo::Demo()
{
	cout<<"From Default constructor\n";
	x=y=z=0;
}

Demo::Demo(int a, int b, int c)
{
	cout<<"From Paramaterized Constructor\n";
	x=a;	y=b;	z=c;
}

Demo::Demo(const Demo &obj)
{
	cout<<"From Copy constructor\n";
	x=obj.x;
	y=obj.y;
	z=obj.z;
}

// main() function
int main()
{
	cout<<"Object: d1\n";
	Demo d1=Demo();	// Explicit default constructor call
	d1.show();

	cout<<"\nObject: d2\n";
	Demo d2=Demo(24,65,40);	// Explicit paramaterized constructor call
	d2.show();

	/*----------- Copy Constructor ----------------*/
	cout<<"\nObject: d3\n";
	Demo d3=Demo(d1);	// Explicit copy constructor call
	d3.show();

	cout<<"\nObject: d4\n";
	Demo d4=d2;		// Implicit copy constructor call
	d4.show();
	/*-----------------------------------------------*/

	/* Using set() function */
	cout<<"\nObject: d3 values changed using set()\n";
	d3.set(2,7,3);
	d3.show();

	/* Using Explicit constructor call */
	cout<<"\nObject: d3 values changed using Explicit Constructor Call\n";
	d3=Demo(20,70,30);
	d3.show();

	getch();
	return 0;
}
