#include<iostream>
#include<conio.h>

using namespace std;

int power(int, int);	// Function declaration/prototype

int main()
{
	int b,e,r;
	
	cout<<"Enter base= ";
	cin>>b;
	
	cout<<"Enter exponent= ";
	cin>>e;
	
	// Function call
	r=power(b,e);	// Actual parameters
	
	cout<<b<<" ^ "<<e<<"= "<<r;
	
	getch();
	return 0;
}

// Function definition
int power(int b, int e)		// Formal parameters
{
	int product=1;
	
	for(int i=1;i<=e;i++)
	{
		product=product*b;
	}
	
	return product;
}
