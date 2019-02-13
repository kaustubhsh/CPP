// Swap function example using call by reference
#include<iostream>
#include <conio.h>

using namespace std;
void swap(int &,int &);

int main(void)
{
	int a=2;
	int b=5;
	
	cout<<"Before swapping:\na= "<<a<<"\tb= "<<b<<endl;
	swap(a,b);
	cout<<"\nAfter swapping:\na= "<<a<<"\tb= "<<b<<endl;
	
	getch();
	return 0;
}

void swap(int &x , int &y)
{
	int temp;
	
	temp=x;
	x=y;
	y=temp;
}
