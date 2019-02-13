// Reading and Writing class objects
#include <iostream>  
#include <fstream>
#include <string>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class Student
{
	int rollno;
	string name;
	
	public:
		void getInfo(void);
		void showInfo(void);
};

void Student::getInfo(void)
{
	cout<<"\nEnter roll no: ";
	cin>>rollno;
	
	cin.ignore();
	
	cout<<"Enter name: ";
	getline(cin, name);
}

void Student::showInfo(void)
{
	cout<<"\nRoll no: "<<rollno<<endl;
	cout<<"Name   : "<<name<<endl;
}

int main()
{
	Student s[3];
	
	fstream file;
	file.open("stud.dat", ios::binary | ios::out | ios::in);
	
	if(!file.is_open())
	{
		cout<<"File opening failed!!"<<endl;
		getch();
		exit(1);
	}
	
	cout<<"Enter details of 3 students:"<<endl;
	for(int i=0;i<3;i++)
	{
		s[i].getInfo();
		file.write( (char *) &s[i] , sizeof(s[i]) );
	}
	
	// Set the get_pointer to 0, for reading from beginning of the file
	cout<<"\nGet Pointer's current position: "<<file.tellg()<<endl;
	file.seekg(0);
	
	cout<<"\nDisplaying details of 3 students:"<<endl;
	for(int i=0;i<3;i++)
	{
		file.read( (char *) &s[i] , sizeof(s[i]) );
		s[i].showInfo();
	}
	
	file.close();
	
	getch();
	return 0;
}
