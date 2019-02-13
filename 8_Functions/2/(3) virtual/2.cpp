#include <iostream>

using namespace std;

class Base
{
	public:
		virtual void show()		// Virtual Function
		{
			cout << "Base class";
		}
};

class Derived : public Base
{
	public:
		
		void show()
		{
			cout << "Derived Class";
		}
};

int main()
{
	Base* b;       //Base class pointer
	
	Derived d;     //Derived class object
	
	b = &d;
	b->show();     //Late Binding Occurs
	
	return 0;
}
