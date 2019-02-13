#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a[2][2][3];
	int i,j,k;
	
	// For taking user input in 3-D array
	cout<<"Enter 12 elements in array:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++)
			{
				cout<<"a["<<i<<"]["<<j<<"]["<<k<<"]= ";
				cin>>a[i][j][k];
			}
		}
	}
	
	// For printing 3-D array
	cout<<"\nArray elements are:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++)
			{
				cout<<a[i][j][k]<<"\t";
			}
			
			cout<<endl;
		}
		
		cout<<"\n-----------------------\n";
	}
	
	getch();
	return 0;
}
