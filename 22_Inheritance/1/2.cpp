// 2. Multi-Level Inheritance Example
#include<iostream>
#include <conio.h>

using namespace std;

class A
{
	// private data-members
	int a1;
	int a2;
	
	public:
		
		void setA(int x,int y)	{ a1=x; a2=y; }
		
		void showA() { cout<<"a1="<<a1<<"\na2="<<a2; }
};

class B : public A
{
	// private data-members
	int b1;
	int b2;
	
	public:
		
		void setB(int x,int y)	{ b1=x; b2=y; }
		
		void showB() { cout<<"\n\nb1="<<b1<<"\nb2="<<b2; }
};

class C : public B
{
	// private data-members
	int c1;
	int c2;
	
	public:
		
		void setC(int x,int y)	{ c1=x; c2=y; }
		
		void showC() { cout<<"\n\nc1="<<c1<<"\nc2="<<c2; }
		
		void set(int x1,int x2,int x3,int x4,int x5,int x6)
		{
			setA(x1,x2);
			setB(x3,x4);
			
			c1=x5;
			c2=x6;
		}
		
		void show()
		{
			showA();
			showB();
			
			cout<<"\n\nc1="<<c1<<"\nc2="<<c2;
		}
};

int main(void)
{
	C obj1, obj2;
	
	obj1.setA(1,2);
	obj1.setB(3,4);
	obj1.setC(5,6);
	
	obj1.showA();
	obj1.showB();
	obj1.showC();
	
//		OR

	cout<<endl<<"-------------\n";
	obj2.set(11,22,33,44,55,66);
	obj2.show();
	
	getch();
	return 0;
}
