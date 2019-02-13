#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int ins(int,int[]);
int del(int,int[]);
int print(int,int[]);
int input(int ,int []);

int main()
{
    int n,a,c[100],t,p,p1;
    cout<<"Enter no of test cases:\t";
    cin>>t;
    while(t--)
    {
        cout<<"Enter no of elements in array\n";
        cin>>n;
        input(n,c);
        cout<<"Enter your choice \n1. Insert a number\n2.Delete a number\n";
        cin>>a;

        switch(a)
        {
            case 1:
                system("CLS");
                print(n,c);
                p=ins(n,c);
                print(p,c);
                getch();
                system("CLS");
                break;
            case 2:
                system("CLS");
                print(n,c);
                p1=del(n,c);
                print(p1,c);
                getch();
                system("CLS");
                break;
            default :
                cout<<"Invalid Input";
        }

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
    if((x-1)<=n)
    {
        for(int i=n;i>=x;i--)
            c[i]=c[i-1];
            c[x-1]=y;
            n=n+1;
    }
    else
    {
        cout<<"INVALID INPUT\n\n";
    }
    return n;
}


int del(int n, int a[])
{
    int x,y,found=0;

    cout<<"Enter the element you want to delete:\t";
    cin>>x;

    for(int j=0;j<n;j++)
    {
        if(x==a[j])
        {
            for(int i=j;i<n;i++)
                a[i]=a[i+1];
                n=n-1;
             found++;
            break;
        }
    }
    if(found==0)
    {
        cout<<"Element not found\n";

    }
    return n;
}


int print(int n,int c[])
{
    cout<<"The array is :\n";
    cout<<"***********************************************\n\n";
    for(int i=0;i<n;i++)
        cout<<c[i]<<"\t";
        cout<<"\n\n***********************************************\n"<<endl;
    return 0;
}
