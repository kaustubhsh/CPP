// A program to demonstrate the use of stringstream
#include <iostream>
#include <sstream>
#include <conio.h>

using namespace std;

int main()
{
	string str = "12345";

	// object from the class stringstream
	stringstream ss(str);

	// The object has the value 12345 and stream
	// it to the integer x
	int x = 0;
	ss >> x;

	// Now the variable x holds the value 12345
	cout << "Value of x : " << x;
	
	getch();
	return 0;
}
