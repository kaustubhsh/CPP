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
		for(k=i;k<=n-1;k++)
		{
			cout<<" ";
		}
			
		// for printing '*'
		for(j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	getch();
	return 0;
}
