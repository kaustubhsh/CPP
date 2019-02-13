// Swap function example using call by address
#include <iostream>
#include <conio.h>

using namespace std;

void swap(int*,int*);

int main(void)
{
	int a=2;
	int b=5;
	
	cout<<"\nInside main1: a= "<<a<<"\tb= "<<b<<endl;
	swap(&a,&b);
	cout<<"\nInside main2: a= "<<a<<"\tb= "<<b<<endl;

	getch();
	return 0;
}

void swap(int* x,int* y)
{
	int temp;
	
	temp=*x;
	*x=*y;
	*y=temp;
	
	cout<<"Inside swap: x= "<<*x<<"\ty= "<<*y<<endl;
}
