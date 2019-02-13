// Multi-catch block example
#include<iostream>
#include<conio.h>

using namespace std;

void test(int a)
{
	try
	{
		if(a==1)	throw a;		//int
		else if(a==0) throw 'a';	//char
		else if(a==-1) throw 1.0;	//double
		
		cout<<"\nEnd of try-block \n";
	}
	catch(char c)
	{
		cout<<"Caught a character\n";
	}
	catch(int i)
	{
		cout<<"Caught an integer\n";
	}
	catch(double d)
	{
		cout<<"Caught a double\n";
	}
	
	cout<<"\nEnd of try-catch system\n\n";
}

int main()
{
	cout<<"Testing Multiple Catches:\n";
	cout<<"x == 1 \n";
	test(1);
	
	cout<<"x == 0 \n";
	test(0);
	
	cout<<"x == -1 \n";
	test(-1);
	
	cout<<"x == 2 \n";
	test(2);
	
	getch();
	return 0;
}
