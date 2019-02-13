// writing data to a text file b.txt and then, reading data from it to write in another file
// and displaying it on console screen
#include <fstream>  
#include <iostream>  
#include <conio.h>

using namespace std;  

int main()
{  
	char input[75];  
	// OR
	//string input;
	
	ofstream file1;
	file1.open("b.txt");
	
	cout <<"Writing to a text file:" << endl;  
	cout << "Please Enter your name: ";   
	cin.getline(input, 40);
	file1 << input << endl;  
	
	cout << "Please Enter your age: ";
	cin >> input;  
	cin.ignore();
	file1 << input << endl;
	 
	file1.close();  
	
	ifstream file2;   
	string line;  
	
	file2.open("b.txt");   
	cout << "\nReading from a text file:" << endl;   
	
	ofstream file3("c.txt"); 
	if(file3.is_open())
	{
		file3<<"Testing file copy:"<<endl;
		while( getline(file2,line) )  
		{  
			file3 << line << endl;
			cout << line << endl;
		}
	}	
	
	file2.close();
	file3.close();
	
	getch();
	return 0;  
}
