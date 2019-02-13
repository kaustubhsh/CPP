#include<iostream>
#include<conio.h>
using namespace std;
int pow(int i)
{
    return (i*i*i);
}
int main()
{
    int n;
    cout<<"Enter n for series";
    cin>>n;
    int a=0;
    for(int i=1;i<=n;i++)
    {
        a+=pow(i);
    }
    cout<<"the sum of"<<n<<"series is \t"<<a;
    return 0;
}
