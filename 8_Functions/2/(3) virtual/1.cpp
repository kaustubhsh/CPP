#include <iostream>

using namespace std;

class Base
{
	public:
		void show()
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
	b->show();     //Early Binding Occurs
	
	return 0;
}
