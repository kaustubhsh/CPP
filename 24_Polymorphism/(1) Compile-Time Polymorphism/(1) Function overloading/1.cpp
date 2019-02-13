#include<iostream>
#include<conio.h>

using namespace std;

int area(int length, int breadth)
{
    return (length * breadth);
}

float area(float radius)
{
    return (3.14*radius*radius);
}

int main()
{
    int len,brdth;
    float r;

    cout<< "Enter length and breadth of rectangle:\n";
    cin>>len>>brdth;
    cout<<"Area of rectangle= "<<area(len,brdth)<<endl;

    cout<<"\nEnter radius of circle:\n";
    cin>>r;
    cout<<"Area of circle= "<<area(r);

    getch();
    return 0;
}
