#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i,j,r,c;

    cout<<"Enter no of row and column in array\t:";
    cin>>r>>c;

    int **ptr=new int*[r];
    for(i=0;i<r;i++)
        ptr[i]=new int[c];
    cout<<"Enter "<<r*c<<" elements in array :\n";
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>ptr[i][j];
    cout<<"Array elements are:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cout<<"ptr["<<i<<"]["<<j<<"]="<<ptr[i][j]<<"\t";
        cout<<endl;
    }
    return 0;
}
