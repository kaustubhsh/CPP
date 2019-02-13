/*
Using 'string' Object
---------------------
In C++, we can also create a string object for holding strings.
Unlike using char arrays, string objects has no fixed length, and
can be extended as per your requirement.
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // Declaring a string object
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "You entered: " << str << endl;

    getch();
    return 0;
}
