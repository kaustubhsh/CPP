#include<iostream>
#include<conio.h>

using namespace std;

template<class T>
T sum(T a, T b)
{
	T c;

	c = a + b;

	return c;
}

int main()
{
	int r1;
	double x,y,r2;

	r1=sum(3,6);
	cout<<r1;

	cout<<"\nEnter two double constants:"<<endl;
	cin>>x>>y;

	r2=sum(x,y);
	cout<<r2;

	getch();
	return 0;
}