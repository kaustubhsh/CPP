// Example of Pointer to Array
#include <iostream>
#include <conio.h>
//#include <stdio.h>

using namespace std;

int main()
{
    int a[5];
    int *p=&a[0];
//      OR
//	int *p=a;

    cout<<"Enter 5 elements in array:"<<endl;
    for(int i=0;i<5;i++)
    {
    	cin>>p[i];
	}

    for(int i=0;i<5;i++)
    {
    	cout<<"a["<<i<<"]= "<<p[i]<<"\t"<<&p[i]<<endl;
//    	printf("a[%d]= %d\t%u\n",i,p[i],&p[i]);
	}

    getch();
    return 0;
}
