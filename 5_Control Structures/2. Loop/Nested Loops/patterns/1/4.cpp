/**
 * 1
 * 2 1
 * 3 2 1
 * 4 3 2 1
 */

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{	
	for(int i=1;i<=4;++i)
	{
		for(int j=i;j>=1;j--)
		{
			cout<<j;
		}
		
		cout<<endl;
	}
	
	getch();
	return 0;
}
