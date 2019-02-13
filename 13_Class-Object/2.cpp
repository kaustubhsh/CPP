#include<iostream>
#include<conio.h>

using namespace std;

class Calculator
{
	int a,b,c;

	public:
		void set(int x, int y)
		{
			a=x;
			b=y;
		}

		void add()	// Inside the class definition
		{
			c=a+b;

			cout<<"Sum= "<<c<<endl;
		}

		void sub();	// member-function declaration
};


void Calculator::sub()	// Outside the class definition
{
	c=a-b;

	cout<<"Sub= "<<c<<endl;
}

int main()
{
	Calculator c1;

	int a,b;

	cout<<"Enter a=";
	cin>>a;

	cout<<"Enter b=";
	cin>>b;

	c1.set(a,b);

	c1.add();

	c1.sub();

	getch();
	return 0;
}
