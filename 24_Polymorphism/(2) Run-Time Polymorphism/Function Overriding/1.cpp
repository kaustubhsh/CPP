#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
	public:
		void show()
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
	b->show();     // Early Binding occurs
	
	getch();
	return 0;
}
