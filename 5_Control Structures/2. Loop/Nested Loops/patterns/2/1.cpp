#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i,j,k,n;
	
	cout<<"Enter no of row= ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		// for printing space
		for(k=n-1;k>=i;k--)
		{
			cout<<" ";
		}
			
		// for printing pattern
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	getch();
	return 0;
}
