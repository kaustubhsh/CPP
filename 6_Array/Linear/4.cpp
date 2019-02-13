// Program to find/search an element in an array
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a[5] = { 1, 23, 73, 46, 9 };
	int i,n,found=0;

	cout<<"Enter the element you want to find= ";
	cin>>n;

	for(i=0;i<5;i++)
	{
		if(a[i] == n)
		{
			found=1;
			break;
		}
	}

	if(found == 1)
	{
		cout<<"Element found at "<<i+1<<" position.";
	}
	else
	{
		cout<<"Element not found!";
	}

	getch();
	return 0;
}
