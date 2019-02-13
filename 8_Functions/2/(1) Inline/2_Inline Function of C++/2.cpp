// Inline function example
#include<iostream>
#include<conio.h>

using namespace std;

class Demo
{
	public:
		/* member functions are inline by default if defined
		   inside the class itself */
		void cube(double n)	//inside the class definition
		{
			cout<<"cube of "<<n<<"= "<<n*n*n<<endl;
		}
		
		/* function declaration or prototype */
		void square(int);	//outside the class definition
};

/* outside defined member functions have to be declared 'inline' to
   make them inline function */
inline void Demo::square(int n)
{
	cout<<"square of "<<n<<"= "<<n*n;
}

int main()
{
	Demo d;
	double a=3;
	
	d.cube(a);
	d.cube(2.5+1.5);
	
	d.square(5);
	
	getch();
	return 0;
}
