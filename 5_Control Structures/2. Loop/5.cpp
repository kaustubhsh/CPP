#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	for(int i=1;i<11;i++)
	{
		for(int j=2; j<=5; j++)
		{
			cout<<j<<" X "<<i<<" = "<<j*i<<"\t";
		}
		
		cout<<endl;
	}
	
	getch();
	return 0;
}
