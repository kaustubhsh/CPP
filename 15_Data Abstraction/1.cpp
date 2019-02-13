// Abstraction using class and access-specifiers:(to show Data-Abstraction)
#include<iostream>
#include<conio.h>

using namespace std;
//------------------------------------------------------------------------------------------------------------

class A
{
	// private members
	int x,y;

	public:
	// public members
		void input()
		{
			cout<<"Enter two integers:"<<endl;
			cin>>x>>y;
		}

		void display()
		{
			cout<<"x= "<<x<<"\ny= "<<y;
		}
};
//------------------------------------------------------------------------------------------------------------

// Outside-world have no access of class's private data(i.e., Data Hiding)
int main()
{
	A obj;

	obj.input();	// No idea of how class's data is managed, i.e., Data-Abstraction for this outside context

	obj.display();

    getch();
	return 0;
}
