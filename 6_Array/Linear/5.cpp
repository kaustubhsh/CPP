// Program to sort an array elements without using sortArray() function
#include<iostream>
#include<conio.h>

using namespace std;

void printArray(int [], int);

int main()
{
	int a[5],temp;
	
	// For taking input in array
	cout<<"Enter 5 values in array:\n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\nBefore sorting:\n";
	printArray(a,5);
	
	// Sorting array elements
	for(int i=0;i<4;i++)
	{	
		for(int j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	cout<<"\n\nAfter sorting:\n";
	printArray(a,5);
	
	getch();
	return 0;
}

// Function for printing an array
void printArray(int arr[], int size)
{
	for(int i=0;i<size;i++)
		cout<<arr[i]<<"\t";
}
