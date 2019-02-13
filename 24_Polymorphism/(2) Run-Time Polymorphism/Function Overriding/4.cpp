// Polymorphism: Run-Time-->Late(Dynamic) Binding
// Function Overriding Example
#include<iostream>
#include<conio.h>

using namespace std;

class Animal
{
	public:
		
		virtual void speak()
		{
			cout<<"Animal speaks"<<endl;
		}
		
		virtual void move()
		{
			cout<<"Animal moves"<<endl;
		}
};

class Dog : public Animal
{	
	public:
		
		void speak()
		{
			cout<<"Dog barks"<<endl;
		}
		
		void move()
		{
			cout<<"Dog jumps"<<endl;
		}
};

class Horse : public Animal
{
	public:
		
		void speak()
		{
			cout<<"Horse neighs"<<endl;
		}
		
		void move()
		{
			cout<<"Horse runs"<<endl;
		}
};

int main()
{
	Animal *p,a;
	Dog d;
	Horse h;
	
	cout<<"Animal:"<<endl;
	p=&a;
	p->speak();
	p->move();
	
	cout<<"\nDog:"<<endl;
	p=&d;
	p->speak();
	p->move();
	
	cout<<"\nHorse:"<<endl;
	p=&h;
	p->speak();
	p->move();
	
	getch();
	return 0;
}
