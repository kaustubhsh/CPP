// writing and appending to a text file
#include <iostream>  
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{  
	ofstream ofs("d.txt",ios::app);
//				OR
//	ofstream ofs;
//	ofs.open("d.txt",ios::app);
	
	if(ofs.is_open())
	{  
		ofs << "Hello Matrix!\n";
		ofs << "Welcome to Object Oriented Programming through C++.\n";
		
		ofs.close();
	}  
	else 
		cout << "File opening failed!";
	
	getch();
	return 0;
}
