#include<iostream>
#include<conio.h>

using namespace std;

int factorial(int);		// Function declaration/prototype

int main()
{
	cout<<"Result= "<<factorial(5);
	
	int a;
	cout<<"\nEnter a= ";
	cin>>a;
	
	int r=factorial(a);
	
	cout<<"Factorial of "<<a<<" = "<<r;
	
	getch();
	return 0;
}

// Function definition
int factorial(int n)
{
	int  product=1;
	
	for(int i=n;i>=1;i--)
	{
		product=product*i;
	}
	
	return product;
}
