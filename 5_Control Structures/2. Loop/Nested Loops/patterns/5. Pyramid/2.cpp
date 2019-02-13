#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n,p;
	
	cout<<"Enter no. of rows= ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n-1;j++)
		{
			cout<<" ";
		}
		
		p=i;
		
		for(int k=1; k<=2*i-1; k++)
		{
			if(k>i)
				cout<<--p;
			else
				cout<<k;
		}
		
		cout<<endl;
	}
	
	getch();
	return 0;
}
