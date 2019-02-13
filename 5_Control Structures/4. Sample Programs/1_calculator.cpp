#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main()
{
	int choice,a,b;
	char ch;

	ch='y';	// Initialization Part

	while( ch == 'y' )	// Condition Part
	{
		cout<<"Enter a=";
		cin>>a;

		cout<<"Enter b=";
		cin>>b;

		cout<<"\nMenu:\n----\n";
		cout<<"1 to +\n";
		cout<<"2 to -\n";
		cout<<"3 to *\n";
		cout<<"4 to /\n\n";

		cout<<"Enter your choice= ";
		cin>>choice;

		switch(choice)
		{
			case 1:
				cout<<"Sum= "<<a+b<<endl;
				break;

			case 2:
				cout<<"Sub= "<<a-b<<endl;
				break;

			case 3:
				cout<<"Mul= "<<a*b<<endl;
				break;

			case 4:
				cout<<"Div= "<<a/b<<endl;
				break;

			default:
				cout<<"Invalid choice!\n";
		}

		cout<<"Do you want to continue? Enter (y/n): ";
		cin>>ch;	// Action Part

		system("cls");
	}

	system("cls");
	cout<<"\t\t\t*** Thank you for using calculator ***"<<endl;

	getch();
	return 0;
}
