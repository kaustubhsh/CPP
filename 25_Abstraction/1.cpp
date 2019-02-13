// Designing abstract base class to achieve Run-time Polymorphism
#include<iostream>
#include<conio.h>

using namespace std;

class Animal	// Abstract class
{
	public:
		
		// Pure-virtual functions
		virtual void speak()=0;
	
		virtual void move()=0;
};

class Dog : public Animal
{
	public:
		void speak()
		{
			cout<<"Dog barks\n";
		}
		
		void move()
		{
			cout<<"Dog jumps\n";
		}
};

class Horse : public Animal
{
	public:
		void speak()
		{
			cout<<"Horse neighs\n";
		}
		
		void move()
		{
			cout<<"Horse runs\n";
		}
};

int main()
{
	Animal *p;
	Dog d;
	Horse h;
	
	p=&d;
	p->speak();
	p->move();
	
	p=&h;
	p->speak();
	p->move();
	
	getch();
	return 0;
}
