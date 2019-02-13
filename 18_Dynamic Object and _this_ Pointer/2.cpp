// Example of 'this' pointer
#include<iostream>
#include<conio.h>

using namespace std;

class Demo
{
	int a,b;	// Instance member-variables(or data-members)
	
	public:
		
		Demo(int a, int b)	// Formal parameters
		{
			this->a=a;
			this->b=b;
		}
		
		void set(int a, int b)	// Formal parameters
		{
			this->a=a;
			this->b=b;
		}
		
		void show()
		{
			cout<<"a= "<<a<<"\tb= "<<b<<endl;
		}
};

int main()
{
	Demo d1(2,6);
	d1.show();
	
	d1.set(33,88);
	d1.show();
	
	getch();
	return 0;
}
