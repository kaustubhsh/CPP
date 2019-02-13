#include<iostream>
#include<conio.h>

using namespace std;

class A
{
    int x,y;
    public:
        int z;
        void set(int a,int b)
        {
            x=a;
            y=b;
        }
        void show()
        {
            cout<<"x="<<x<<"\ny="<<y<<endl;
        }
        void input()
        {
            cout<<"Enter 3 numbers:";
            cin>>x>>y>>z;
        }
        void display()
        {
            cout<<"\nx="<<x<<"\ny="<<y<<"\nz="<<z;
        }
};
int main()
{
    A a1,a2;

    a1.set(2,3);
    a1.z=10;
    a1.show();

    cout<<"\nz="<<a1.z<<endl<<endl;

    a2.input();
    a2.display();

    return 0;
}
