#include<iostream>
#include<conio.h>
#include<math.h>
#define pi 3.14159265

using namespace std;
void mode();
int sin();
int cos();


class A
{
    int x,y;

    public:
//        int z;
        double a,b,c;
        cal(int z)
        {
            switch(z)
            {
                case 1:
                mode();
                break;
            case 2:

                double d;
                cout<<"Enter degree :";
                cin>>d;
                a=sin(d*pi/180);
                cout<<a<<endl;
            break;
        case 3:
            double d;
            cout<<"Enter degree :";
            cin>>d;
            b=cos(d*pi/180);
            cout<<b<<endl;
                break;
        case 4:
            c=a/b;
            cout<<c<<endl();
            break;
        }
        }
};
int main()
{
    A a1,a2;
    int z;
    cout<<"Enter your choice \n 1. Modulas\n 2. Sine Function\n 3. Cosine Function \n 4. Tangent Function "<<endl;
    cin>>z;
    a1.cal(z);

    getch(;
    return 0;
}
int mode()
{
    int i;
    for(i=0;i<a/2;i++)
    {
        if (a%i==0)
        cout<<i<<endl();
    }
}
