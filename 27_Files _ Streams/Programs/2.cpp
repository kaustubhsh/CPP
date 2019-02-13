// reading from a text file
#include <iostream>  
#include <fstream> 
#include <conio.h>

using namespace std;  

int main() 
{  
	string str;  
	ifstream ifs("a.txt");
	
	if (ifs.is_open())  
	{  
		while( getline (ifs,str) )  
		{  
			cout << str <<endl;
		} 
		
		ifs.close();  
	}  
	else 
	{  
		cout << "File opening failed."<<endl;   
	} 
	
	getch();
	return 0;  
}
