#include<iostream>
#include<conio.h>

using namespace std;

void sum(int a, int b)
{
	cout<<"Sum "<<a+b;
}

int main()
{
	sum(4,5);
	
	int a,b;
	
	cout<<"\n\nEnter two numbers:"<<endl;
	cin>>a>>b;
	
	sum(a,b);
	
	getch();
	return 0;
}
