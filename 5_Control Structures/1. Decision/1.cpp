#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a,b,c;

	cout<<"Enter three numbers:"<<endl;
	cin>>a>>b>>c;

	// Nested if-else
	if(a>b)
	{
		if(a>c)
			cout<<"a is max";
		else
			cout<<"c is max";
	}
	else
	{
		if(b>c)
			cout<<"b is max";
		else
			cout<<"c is max";
	}


	getch();
	return 0;
}
