#include<iostream>
#include<conio.h>

using namespace std;

class A
{
	int a,b;

	public:

		A()
		{
			cout<<"Default Constructor called"<<endl;
			a=b=0;
		}

		A(int x)
		{
			cout<<"Parametrized Constructor 1 called"<<endl;
			a=b=x;
		}

		A(int x, int y)
		{
			cout<<"Parametrized Constructor 2 called"<<endl;
			a=x;
			b=y;
		}

		A(const A &obj)
		{
			cout<<"Copy Constructor called"<<endl;
			a=obj.a;
			b=obj.b;
		}

		void set(int x, int y)
		{
			a=x;
			b=y;
		}

		void show()
		{
			cout<<"a= "<<a<<"\t"<<"b= "<<b<<endl;
		}
};

int main()
{
	A a1;
	a1.show();

	A a2(2);
	a2.show();
//	value changed by calling set() function
	a2.set(10,30);
	a2.show();

	A a3(3,4);
	a3.show();
//
//	cout<<"Object a4:"<<endl;
//	A a4(a3);   // copy constructor called
////	    OR
////	A a4=a3;    // copy constructor called
//	a4.show();
//
//	cout<<"Object a5:"<<endl;
//	A a5;
//	a5=a2;  // copy constructor not called
//	a5.show();

	getch();
	return 0;
}
