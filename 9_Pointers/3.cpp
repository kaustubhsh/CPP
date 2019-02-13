#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a=12;
	int *p=&a;
	int **ptr=&p;
	int ***ptr2=&ptr;

    cout<<"ptr2= "<<ptr2<<endl;

    cout<<"*ptr2= "<<*ptr2<<endl;

    cout<<"**ptr2= "<<**ptr2<<endl;
    
    cout<<"***ptr2= "<<***ptr2<<endl;

    cout<<"&ptr2= "<<&ptr2<<endl;

    getch();
    return 0;
}
