#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char str[100];
    
    cout << "Enter a string: ";
    cin>>str;	// reads first word only(means untill first space ' ')
    cout << "You entered: " << str << endl;
    
    getch();
    return 0;
}
