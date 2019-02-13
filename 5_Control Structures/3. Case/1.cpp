#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int choice,a,b;
	
	cout<<"Enter a= ";
	cin>>a;
	
	cout<<"Enter b= ";
	cin>>b;
	
	cout<<"\nMenu:\n----\n";
	cout<<"Press 1 to +\n";
	cout<<"Press 2 to -\n";
	cout<<"Press 3 to *\n";
	cout<<"Press 4 to /\n";
	
	cout<<"\nEnter your choice= ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"Addition= "<<a+b;
			break;
			
		case 2:
			cout<<"Subtraction= "<<a-b;
			break;
			
		case 3:
			cout<<"Multiplication= "<<a*b;
			break;
			
		case 4:
			cout<<"Division= "<<a/b;
			break;
			
		default:
			cout<<"Invalid choice!";
	}
	
	getch();
	return 0;
}
