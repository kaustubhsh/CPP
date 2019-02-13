// Passing/returning object to/from a member-function(or method)
#include <iostream>
#include <conio.h>

using namespace std;

class Demo
{
	int a;
	int b;
	
	public:
		
		void set(int a, int b)
		{
			this->a = a;
			this->b = b;
		}
		
		void show()
		{
			cout<<"a= "<<a<<"\tb= "<<b<<endl;
		}
		
		Demo sum(Demo);
		Demo test();
};

Demo Demo::sum(Demo d)
{
	Demo temp;
	
	temp.a = a + d.a;
	temp.b = b + d.b;
	
	return temp;
}

Demo Demo::test()
{
	return (*this);
}

int main()
{
	Demo d1;
	d1.set(3,4);
	d1.show();
	
	Demo d2;
	d2.set(2,6);
	d2.show();
	
	cout<<"\nSum of object data-members d1 & d2:"<<endl;
	Demo d3;
	d3 = d1.sum(d2);
	d3.show();
	
	cout<<"\nReturning current object from method test:"<<endl;
	Demo d4;
	d4.set(12,98);
	(d4.test()).show();
	
	getch();
	return 0;
}
