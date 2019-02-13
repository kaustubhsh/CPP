#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a[5],i;
	
	cout<<"Enter 5 elements in array:\n";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\nArray elements are:\n";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<"\t"<<&a[i]<<endl;
	}
	
	getch();
	return 0;
}
