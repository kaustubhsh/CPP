//Read an Array and find out max and min.
#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
    int a[100];
    int i,n;

    int m=0,p=0;

    cout <<"Enter the size of Array:\n";
    cin>>n;

//    taking input in array
    cout<<"Enter the elements of Array:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0],min=a[0];
//    finding max no.

    for(i=0;i<n;i++)
    {
       if(max<a[i])
       {
           max=a[i];
           m=i+1;
       }
    }

//    finding min no.
      for(i=0;i<n;i++)
      {
          if(min>a[i])
          {
              min=a[i];
              p=i+1;

          }
      }

      cout<<"\nMaximum no. is "<<max<<" at position= "<<m<<"\n\n Minimum no. is "<<min<<" at position= "<<p<<endl;

     getch();
      return 0;

}
