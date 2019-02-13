#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
	public:
		virtual void show()		// virtual function
		{
			cout << "Base: show()";
		}
};

class Derived : public Base
{
	public:
		
		void show()
		{
			cout << "Derived: show()";
		}
};

int main()
{
	Base *b;       // Base class pointer
	Derived d;     // Derived class object
	
	b = &d;		   // Base class pointer pointing to derived class object
	b->show();     // Late Binding occurs due to virtual function
	
	getch();
	return 0;
}
