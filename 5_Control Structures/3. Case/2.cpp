#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char choice;
	int a,b;
	
	cout<<"Enter a= ";
	cin>>a;
	
	cout<<"Enter b= ";
	cin>>b;
	
	cout<<"\nMenu:\n----\n";
	cout<<"Press + to add\n";
	cout<<"Press - to subtract\n";
	cout<<"Press * to multiply\n";
	cout<<"Press / to divide\n";
	
	cout<<"\nEnter your choice= ";
	cin>>choice;
	
	switch(choice)
	{
		case '+':
			cout<<"Addition= "<<a+b;
			break;
			
		case '-':
			cout<<"Subtraction= "<<a-b;
			break;
			
		case '*':
			cout<<"Multiplication= "<<a*b;
			break;
			
		case '/':
			cout<<"Division= "<<a/b;
			break;
			
		default:
			cout<<"Invalid choice!";
	}
	
	getch();
	return 0;
}
