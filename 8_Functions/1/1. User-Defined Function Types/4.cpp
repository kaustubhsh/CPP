#include<iostream>
#include<conio.h>

using namespace std;

int sum(int, int);	// Function Prototype/declaration

int main()
{
	// Function call
	int r1=sum(4,5);	// Actual Parameters
	cout<<"r1= "<<r1;
	
	int a,b;
	
	cout<<"\n\nEnter two numbers:"<<endl;
	cin>>a>>b;
	
	// Function call
	int r2=sum(a,b);	// Actual Parameters
	cout<<"r2= "<<r2;
	
	int total=r1+r2;
	cout<<"\nTotal= "<<total;
	
	getch();
	
	return 0;
}

// Function definition
int sum(int a, int b)	// Formal Parameters
{
	return (a+b);
}
