//Example of Array of Pointers
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
   int a[5];
   int *p[5];
   
   cout<<"Enter 5 elements in array:\n";
   for(int i=0;i<5;i++)
   {
   		cin>>a[i];
   }
   
   for(int i=0;i<5;i++)
   {
   		p[i]=&a[i];
   }
   
   cout<<"Array elements are:\n";
   for(int i=0;i<5;i++)
   {
   		cout<<*p[i]<<endl;
   }
    
    getch();
    return 0;
}
