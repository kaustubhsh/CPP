/**
 * 1
 * 2 3
 * 4 5 6
 */

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n=1;
	
	for(int i=1;i<=3;++i)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<n++;
		}
		
		cout<<endl;
	}
	
	getch();
	return 0;
}
