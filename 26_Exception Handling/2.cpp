/**
 * Eg.:- Handling arithmetic exception using exception
 * handlers(try,catch,throw) in C++
 */
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a,b,c;
	
	while(1)
	{	
		cout<<"Enter numerator= ";
		cin>>a;
		
		cout<<"Enter denominator= ";
		cin>>b;
		
		try
		{
			if(b!=0)
			{
				c=a/b;
				cout<<"Division= "<<c<<"\n--------------------\n\n";
			}
			else
			{
				throw b;
			}
		}
		catch(int ex)
		{
			cout<<"\nCannot divide by "<<ex<<"!\n===================\n\n";
		}
	}
	
	getch();
	return 0;
}
