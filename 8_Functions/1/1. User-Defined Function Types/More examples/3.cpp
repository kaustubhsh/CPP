#include<iostream>
#include<conio.h>
#include"test.hpp"

using namespace std;

int main()
{
	cout<<"Factorial of 5 = "<<factorial(5);

	int a;
	cout<<"\nEnter a= ";
	cin>>a;

	int r=factorial(a);

	cout<<"Factorial of "<<a<<" = "<<r;

	//--------------------------------------

	int b,e,c;

	cout<<"\n\nEnter base=";
	cin>>b;

	cout<<"Enter exponent=";
	cin>>e;

	c=power(b,e);	// Function call

	cout<<b<<"^"<<e<<"="<<c;

	getch();
	return 0;
}
