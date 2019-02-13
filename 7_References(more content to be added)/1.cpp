// Reference variable example
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int x = 4;

	//Declaring reference variable y
	int &y = x;

	cout<<"x= "<<x<<"\ty= "<<y<<endl;

	y=88;

	cout<<"\nx= "<<x<<"\ty= "<<y;

	getch();
	return 0;
}
