#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int r;
	
	cout<<"Enter rows= ";
	cin>>r;
	
	for(int i=1;i<=r;++i)
	{
		for(int j=r;j>=i;j--)
			cout<<"*";
		
		cout<<endl;
	}
	
	getch();
	return 0;
}
