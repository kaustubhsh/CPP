// Program to print sum of array elements
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a[5],i,sum=0;
	
	// For taking input in array and sum up array elements
	cout<<"Enter 5 elements in array:\n";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	
	// For printing array elements
	cout<<"\nArray elements are:\n";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}
	
	cout<<"\n\nSum of array elements= "<<sum;
	
	getch();
	return 0;
}
