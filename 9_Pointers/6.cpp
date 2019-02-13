/*
Callback Function:
-----------------
A callback is any executable code that is passed as an argument to other code,
which is expected to callback(execute) the argument at a given time. In simple
language, if a reference of a function is passed to another function as an argument
to call it, then it will be called as a callback function.

In C++, a callback function is a function that is called through a function pointer.
*/

// Program to demonstrate callback function
#include <iostream>
#include <conio.h>
using namespace std;

void B1()
{
    cout<<"I am function B1"<<endl;
}

void B2()
{
    cout<<"I am function B2"<<endl;
}

void A( void (*ptr)() )
{
    (*ptr) (); // callback to function pointed by ptr
}

int main()
{
    void (*ptr)() = &B1;

    // calling function A and passing
    // address of the function B1 as argument
    A(ptr);

    A(&B2);

    getch();
    return 0;
}
