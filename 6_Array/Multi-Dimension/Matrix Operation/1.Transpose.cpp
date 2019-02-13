#include<iostream>
#include<conio.h>

#define ROW 10
#define COL 10

using namespace std;

int main()
{
	int m[ROW][COL];
	int r,c,i,j;

	cout<<"Enter rows & columns for Matrix:\n";
	cin>>r>>c;

	// Matrix Input
	cout<<"Enter "<<r*c<<" elements in Matrix:\n";
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout<<"m["<<i<<"]["<<j<<"]=";
			cin>>m[i][j];
		}
		
	// Print Matrix
	cout<<"\nEntered Matrix:\n";
	for (i = 0; i < r; ++i)
	{
		for (j = 0; j < c; ++j)
			cout<<m[i][j]<<"\t";
		
		cout<<endl;
	}

	// Matrix Transpose
	cout<<"\nTransposed Matrix:\n";
	for (i = 0; i < c; ++i)
	{
		for (j = 0; j < r; ++j)
			cout<<m[j][i]<<"\t";

		cout<<endl;
	}
	
	getch();
	return 0;
}
