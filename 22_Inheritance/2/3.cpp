// Program to show how to call parameterized constructor
// of base class when derived class's parameterized constructor is called
#include<iostream>
#include<conio.h>

using namespace std;

// base class
class Parent
{
	int x;
	
	public:
	// base class's default constructor
//	Parent()
//	{
//		cout<<"Inside base class's default constructor"<<endl;
//	}
	
	// base class's parameterised constructor
	Parent(int i)
	{
		x=i;
		cout << "Inside base class's parameterised constructor" << endl;
	}
};


// sub class
class Child : public Parent
{
	int y;
	
	public:
	// sub class's parameterised constructor
	Child(int j) : Parent(j)
	{
		y=j;
		cout << "Inside sub class's parameterised constructor" << endl;
	}
};

// main function
int main()
{	
	// creating object of class Child
	Child obj1(10);
	
	getch();
	return 0;
}
