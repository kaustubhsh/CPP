#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int a=12;
	int *p=&a;
	int **ptr=&p;

    cout<<"ptr= "<<ptr<<endl;
    cout<<"&p= "<<&p<<endl;

    cout<<"*ptr= "<<*ptr<<endl;
    cout<<"p= "<<p<<endl;

    cout<<"**ptr= "<<**ptr<<endl;

    cout<<"&ptr= "<<&ptr<<endl;
    printf("%u\n",&ptr);

    getch();
    return 0;
}
