// Example of class template
#include<iostream>
#include<conio.h>

using namespace std;

template<class T1, class T2>
class Test	// class template(also known as parameterized class)
{
	T1 a;
	T2 b;

	public:

		Test(T1 a, T2 b)
		{
			this->a = a;
			this->b = b;
		}

		void set(T1 x, T2 y)
		{
			a = x;
			b = y;
		}

		void show()
		{
			cout<<"a= "<<a<<"\tb= "<<b<<endl;
		}
};

int main()
{
	cout<<"Instantiating the class template as t1 with float and int data types..\nt1: ";
	Test<float,int> t1(1.23f,123);
	t1.show();
	t1.set(3.46F,78);
	t1.show();

	cout<<"\nInstantiating the class template as t2 with int and char data types..\nt2: ";
	Test<int,char> t2(100,'W');
	t2.show();

	getch();
	return 0;
}
