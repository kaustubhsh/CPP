#include<iostream>
#include<conio.h>
#include<stdlib.h>

#define ROW 10
#define COL 10

using namespace std;

int main()
{
	int m1[ROW][COL], m2[ROW][COL], m3[ROW][COL];
	int r1, c1, r2, c2, i, j, k;

	cout<<"Enter rows & columns for Matrix m1:\n";
	cin>>r1>>c1;

	cout<<"Enter rows & columns for Matrix m2:\n";
	cin>>r2>>c2;

	if( c1 != r2 )
	{
		cout<<"Matrices of these orders cannot be multiplied!\n";
		getch();
		exit(1);	// stdlib.h or process.h
	}

	// Matrix Input: m1
	cout<<"\nEnter "<<r1*c1<<" elements in Matrix m1:\n";
	for (i = 0; i < r1; ++i)
		for (j = 0; j < c1; ++j)
		{
			cout<<"m1["<<i<<"]["<<j<<"]=";
			cin>>m1[i][j];
		}

	// Matrix Input: m2
	cout<<"\nEnter "<<r2*c2<<" elements in Matrix m2:\n";
	for (i = 0; i < r2; ++i)
		for (j = 0; j < c2; ++j)
		{
			cout<<"m2["<<i<<"]["<<j<<"]=";
			cin>>m2[i][j];
		}

	// Matrix multiplication
	for (i = 0; i < r1; ++i)
	{
		for (j = 0; j < c2; ++j)
		{
			m3[i][j]=0;

			for (k = 0; k < c1; k++)	//or r2(as both are equal)
			{
				m3[i][j] = m3[i][j] + m1[i][k] * m2[k][j];
			}
		}
	}	

	// Matrix Output: m3
	cout<<"\n------------------------------------\n";
	cout<<"Matrix Multiplication(m3 = m1 x m2):";
	cout<<"\n------------------------------------\n";
	for (i = 0; i < r1; ++i)
	{
		for (j = 0; j < c2; ++j)
			cout<<m3[i][j]<<"\t";

		cout<<endl;
	}

	getch();

	return 0;
}
