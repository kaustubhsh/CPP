#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a[2][3];
	int i,j;
	
	// For taking user input in 2-D array
	cout<<"Enter 6 elements in array:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	
	// For printing 2-D array
	cout<<"\nArray elements are:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		
		cout<<endl;
	}
	
	getch();
	return 0;
}
