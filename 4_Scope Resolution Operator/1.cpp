// Example1 of scope resolution operator(::)
#include <iostream>
#include <conio.h>

using namespace std;
int a=1;

int main()
{
    cout<<a<<endl;

    int a=2;
    cout<<a<<endl;
    cout<<::a<<endl;

    {
        int a=3;
        cout<<a<<endl;
        cout<<::a<<endl;
    }

    getch();
    return 0;
}
