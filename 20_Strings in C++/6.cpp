#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char str1[]="Hello World";
	cout<<str1<<endl;

	char name[32];
	cout<<"\nEnter your name: ";
	cin.get(name,32);

	string city;
	cout<<"\nEnter your city: ";
	cin.ignore();
	getline(cin,city);

	cout<<"Welcome "<<name<<" from "<<city<<endl;

	getch();
	return 0;
}
