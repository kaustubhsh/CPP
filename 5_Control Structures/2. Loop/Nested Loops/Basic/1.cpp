// Nested Loop Control Structure
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=2;j++)
		{
			cout<<"i="<<i<<"\tj="<<j<<endl;
		}
		
		cout<<"\n";
	}
	
	getch();
	return 0;
}
