// Factorial using recursion
#include<iostream>
#include<conio.h>

using namespace std;

int factorial(int n);

int main()
{
	int n;
	
	cout<<"Enter n= ";
	cin>>n;
	
	int r=factorial(n);
	cout<<"Factorial of "<<n<<"= "<<r;
	
	getch();
	return 0;
}

int factorial(int n)
{
    if(n>1)
        return n*factorial(n-1);
    else
        return 1;
}
