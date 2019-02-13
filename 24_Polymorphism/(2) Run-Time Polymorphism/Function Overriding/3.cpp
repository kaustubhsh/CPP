#include<iostream>
#include<conio.h>

using namespace std;

// Base class
class A
{
	public:
		void show()
		{
			cout<<"Base: show()"<<endl;
		}

		virtual void display()	// virtual function
		{
			cout<<"Base: display()"<<endl;
		}
};

// Derived class
class B : public A
{
	public:
		void show()
		{
			cout<<"Derived: show()"<<endl;
		}

		void display()
		{
			cout<<"Derived: display()"<<endl;
		}
};

int main()
{
	A a1;
	B b1;
	A *ptr;

	cout<<"Base pointer: pointing to base class object 'a1':"<<endl;
	ptr=&a1;
	ptr->show();		// Early Binding occurs
	ptr->display();		// Early Binding occurs
	
	cout<<"\nBase pointer: pointing to derived class object 'b1':"<<endl;
	ptr=&b1;
	ptr->show();		// Early Binding occurs
	ptr->display();		// Late Binding occurs due to virtual function
	
	getch();
	return 0;
}
