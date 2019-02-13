// Example of function template with multiple parameters
// and overloading of generic functions(functions with templates)
#include<iostream>
#include<conio.h>

using namespace std;

template<class T1, class T2>	// Declaring function template with multiple parameters
void area(T1 length, T2 breadth)
{
	cout<<"Area of rectangle= "<<length*breadth<<endl;
}

template<class R>
void area(R radius)
{
	cout<<"Area of circle= "<<3.14*radius*radius<<endl;
}

int main()
{
	int l1,b1;
	float l2,b2;

	cout<<"Area of Rectangle-1:"<<endl;
	cout<<"Enter length= ";
	cin>>l1;
	cout<<"Enter breadth= ";
	cin>>b1;
	area(l1,b1);

	cout<<"\nArea of Rectangle-2:"<<endl;
	cout<<"Enter length= ";
	cin>>l2;
	cout<<"Enter breadth= ";
	cin>>b2;
	area(l2,b2);

	int l3;
	float b3;
	cout<<"\nArea of Rectangle-3:"<<endl;
	cout<<"Enter length= ";
	cin>>l3;
	cout<<"Enter breadth= ";
	cin>>b3;
	area(l3,b3);

	float r;
	cout<<"\nArea of circle:"<<endl;
	cout<<"Enter radius= ";
	cin>>r;
	area(r);

	getch();
	return 0;
}