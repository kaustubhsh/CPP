#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	for(int i=1;i<=4;++i)
	{
		for(int j=1;j<=i;j++)
			cout<<"*";
		
		cout<<endl;
	}
	
	getch();
	return 0;
}
