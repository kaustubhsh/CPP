// Program to show the order of constructor calls in Multiple Inheritance
#include<iostream>
#include<conio.h>

using namespace std;

// first base class
class Parent1
{ 
	public:
	
	// first base class's Constructor 
	Parent1()
	{
		cout << "Inside first base class" << endl;
	}
};

// second base class
class Parent2
{
	public:
	
	// second base class's Constructor
	Parent2()
	{
		cout << "Inside second base class" << endl;
	}
};

// child class inherits Parent1 and Parent2
class Child : public Parent1, public Parent2
{
	public:
	
	// child class's Constructor
	Child()
	{
		cout << "Inside child class" << endl;
	}
};

// main function
int main()
{	
	// creating object of class Child
	Child obj1;
	
	getch();
	return 0;
}
