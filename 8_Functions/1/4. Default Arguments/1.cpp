// Default arguments example
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	float amount;

	float value(float p,int n,float r=0.15);	//prototype
	void printline(char ch='*',int len=30);		//prototype

	printline();	//use default values for arguments

	amount=value(5000.00,5);	//defualt value for 3rd argument
	cout<<"\n Final Value = "<<amount<<"\n\n";

	amount=value(10000.00,5,0.30);	//pass all arguments explicitly
	cout<<"\n Final Value = "<<amount<<"\n\n";

	printline('^');		//use defualt value for 2nd argument

	getch();
	return 0;
}

float value(float p,int n,float r)
{
	int year = 1;
	float sum = p;

	while(year<=n)
	{
		sum = sum * (1+r);
		year = year+1;
	}

	return (sum);
}

void printline(char ch, int len)
{
	for(int i=1;i<=len;i++)
		cout<<ch;

	cout<<endl;
}
