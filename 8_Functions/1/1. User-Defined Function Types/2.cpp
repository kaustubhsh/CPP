#include<iostream>
#include<conio.h>

using namespace std;

int sum()
{
	int a,b;
	
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	
	return a+b;
}

int main()
{
	int r=sum();
	
	cout<<"Sum= "<<r;
	
	getch();
	return 0;
}
