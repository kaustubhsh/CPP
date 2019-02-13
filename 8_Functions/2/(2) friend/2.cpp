#include<iostream>
#include<conio.h>

using namespace std;

class ABC;	// Declaration of class

class XYZ
{
	int x;

	public:
		void setValue(int i) { x=i; }

		friend void max(XYZ,ABC);
};

//-------------------------------------//
class ABC
{
	int a;

	public:
		void setValue(int i) { a=i; }

		friend void max(XYZ,ABC);
};

//-------------------------------------//
void max(XYZ m, ABC n)
{
	if(m.x >= n.a)
		cout<< m.x;
	else
		cout<< n.a;
}

//-------------------------------------//
int main()
{
	ABC abc;
	abc.setValue(10);

	XYZ xyz;
	xyz.setValue(20);

	max(xyz,abc);

	getch();
	return 0;
}