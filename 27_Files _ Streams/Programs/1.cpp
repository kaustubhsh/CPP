// writing to a text file
#include <iostream>  
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{  
	ofstream ofs("a.txt");
	
	if(ofs.is_open())
	{  
		ofs << "Hello !\n";
		ofs << "Welcome to Object Oriented Programming through C++.\n";
		
		ofs.close();
	}  
	else 
		cout <<"File opening failed!";
	
	getch();
	return 0;  
}  
