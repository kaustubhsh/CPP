/**
 * Example of Object Pointer(or Pointer to Object)
 * and Dynamic Object creation using 'new' operator
 */
#include<iostream>
#include<conio.h>

using namespace std;

class Demo
{
	int a;
	int b;
	
	public:
		Demo()
		{
			a=b=0;	
		}
		
		Demo(int x,int y)
		{
			a=x;	b=y;
		}
		
		void set(int,int);
		void show();
};

void Demo::set(int x,int y)
{
	a=x;
	b=y;
}

void Demo::show()
{
	cout<<"a= "<<a<<"\tb= "<<b<<endl;
}

int main()
{
	cout<<"Using Object d1:\n";
	Demo d1;
	d1.show();
	
	cout<<"Using Object d2:\n";
	Demo d2(2,6);
	d2.show();
	//------------------
	
	cout<<"\nUsing Object Pointer d3(or Pointer to Object):\n";
	Demo *d3=&d2;
	d3->show();
	d3->set(40,96);
	d3->show();
	d2.show();
	
	d3=&d1;
	d3->show();
	(*d3).show();
	
	cout<<"\nUsing Object Pointer d4(to a dynamic object):\n";
	Demo *d4 = new Demo;
//		OR
//	Demo *d4 = new Demo();
	d4->show();
	
	d4 = new Demo(49,67);
	d4->show();
	
	getch();
	return 0;
}
