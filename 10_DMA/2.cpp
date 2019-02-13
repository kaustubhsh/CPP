// Dynamic Memory Allocation
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int r,c;
	
	cout<<"Enter no of rows= ";
	cin>>r;
	
	int **ptr =	new int *[r];
	
	cout<<"Enter no of cols= ";
	cin>>c;
	
	for(int i=0;i<r;i++)
	{
		ptr[i] = new int[c];
	}
	
	// Taking input in 2-D array
	cout<<"\nEnter "<<r*c<<" elements in 2-D array:\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"ptr["<<i<<"]["<<j<<"]= ";
			cin>>ptr[i][j];
		}
	}
	
	// Printing 2-D array
	cout<<"\nArray elements are:\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<ptr[i][j]<<"\t";
		}
		
		cout<<endl;
	}
	
	delete ptr;
	
	getch();
	return 0;
}
