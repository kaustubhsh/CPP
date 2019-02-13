// Program to show the order of constructor call in Single Inheritance
#include<iostream>
#include<conio.h>

using namespace std;

// base class
class Parent
{
	public:
	
	// base class constructor
	Parent()
	{
		cout << "Inside base class" << endl;
	}
};

// derived class
class Child : public Parent
{
	public:
	
	//derived class constructor
	Child()
	{
		cout << "Inside derived class" << endl;
	}
};

// main function
int main()
{	
	// creating object of derived class
	Child obj;
	
	getch();
	return 0;
}
