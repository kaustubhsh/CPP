#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	string s1("Hello Martin");		// implicit constructor call
	s1 = s1 + ". How are you?";		// string concatenation using overloaded operator '+'
	cout<<s1<<endl;
	
	string s2=string("Hello Matrix");	// explicit constructor call
	cout<<s2<<endl;
	
	string s3="Hello World";	// implicit constructor call
	cout<<s3<<endl;
	
	string s4(s3);
//			OR
//	string s4 = string(s3);
//			OR
//	string s4 = s3;	
	cout<<s4<<endl;
	
	string s5;
	s5 = s1;
	cout<<s5<<endl;
		
	string s6;
	cout<<"\nEnter your name= ";
	cin>>s6;
	cout<<"Hello "<<s6<<"! Welcome to Object Oriented Programming through C++."<<endl;

	string s7;
	cout<<"\nEnter your name= ";
	cin.ignore(INT_MAX,'\n');
//			OR
//	while( getchar() != '\n' );
	getline(cin,s7);
	cout<<"Hello "<<s7<<"! You are also, welcome to Object Oriented Programming through C++."<<endl;
	
	cout<<s7.length();
	
	getch();
	return 0;
}
