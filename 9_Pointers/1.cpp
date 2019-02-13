#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a=12;
    
    int *p;
    p=&a;

//      OR

// int *p=&a;

    cout<<"a= "<<a<<endl;
    cout<<"a= "<<&a<<endl;

    cout<<"p= "<<p<<endl;
    cout<<"*p= "<<*p<<endl;

    cout<<"&p= "<<&p<<endl;

    getch();
    return 0;
}
