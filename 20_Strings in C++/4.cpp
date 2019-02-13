#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.get(str,100);	// to read a line(means untill '\n')
    cout << "You entered: " << str << endl;

    getch();
    return 0;
}
