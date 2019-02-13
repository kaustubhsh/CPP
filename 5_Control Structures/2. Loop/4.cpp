#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	for(int i=2; i<=5; i++)
	{
		for(int j=1;j<=10;j++)
		{
			cout<<i<<" X "<<j<<" = "<<i*j<<endl;
		}
		
		cout<<"-----------\n";
	}
	
	getch();
	return 0;
}
