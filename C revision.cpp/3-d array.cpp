#include<iostream>

using namespace std;
int main()
{
    int a[2][1][3];
    cout<<"Enter 12 elements:"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=1;j<2;j++)
        {
            for(int k=0;k<3;k++)
            {
                cout<<"a["<<i<<"]["<<j<<"]["<<k<<"]=";
                cin>>a[i][j][k];
            }
        }
    }
    cout<<"matrix output\n\n";
    for(int i=0;i<2;i++)
    {
        for(int j=1;j<2;j++)
        {
            for(int k=0;k<3;k++)
            {
                cout<<a[i][j][k]<<"\t";
            }
            cout<<endl;
        }
    }
    return 0;
}
