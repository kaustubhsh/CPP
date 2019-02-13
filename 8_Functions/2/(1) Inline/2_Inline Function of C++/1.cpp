// Inline function example
#include<iostream>
#include<conio.h>

using namespace std;

inline void cube(double n)
{
	cout<<n*n*n<<endl;
}

int main()
{
	double a=3.0;
	double b;
	
	cube(a);
	
	cube(2.5+1.5);
	
	getch();
	return 0;
}
