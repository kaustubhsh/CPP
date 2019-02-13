#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int ins(int,int[]);
int del(int,int[]);
int print(int,int[]);
int input(int ,int []);

int main()
{
    int n,a,c[100];

    cout<<"Enter no of elements in array\n";
    cin>>n;

    input(n,c);

    cout<<"Enter your choice \n1. Insert a number\n2.Delete a number\n";
    cin>>a;

    switch(a)
    {
      case 1:
        ins(n,c);
        print(n+1,c);
        break;
    case 2:
        del(n,c);
        print(n-1,c);
        break;
    default :
        cout<<"Invalid Input";
        exit(1);
    }
    return 0;
}

int input(int n,int c[])
{
    cout<<"Enter ARRAY elements :\n";

    for(int i=0;i<n;i++)
            cin>>c[i];

    return 0;
}

int ins(int n , int c[])
{
    int x,y;

    cout<<"Enter the position :\t";
    cin>>x;
    cout<<"Enter number";
    cin>>y;
    for(int i=n;i>=x;i--)
        c[i]=c[i-1];
    c[x-1]=y;

    return 0;
}


int del(int n, int a[])
{
    int x,y,t=0;

    cout<<"Enter the element you want to delete:\t";
    cin>>x;

    for(int j=0;j<n;j++)
    {
        if(x==a[j])
        {
              for(int i=x-1; i<n-1; i++)
                  a[i] = a[i + 1];
             t++;
            break;
        }
    }
    if(t==0)
        cout<<"Element not found\n";
    else
    {
        return 0;
    }
    return 0;
}


int print(int n,int c[])
{
    cout<<"The array is :\n";
    for(int i=0;i<n;i++)
        cout<<c[i]<<"\t";

    return 0;
}
