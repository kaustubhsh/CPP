#include<iostream>
using namespace std;

int main()
{
    int i,j,d,b[100][100],a[100][100],r,c,s=0;
    cout<<"Enter no of row and column in array:\t";
    cin>>r>>c;
    cout<<"Enter array elements:\n";
    for(i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
            cin>>a[i][j];
            s+=a[i][j];
        }
    }
    if(s%2==0)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                b[i][j]=a[i][j];
            }
        }
        for(i=0;i<r/2;i++)
        {
            for(j=0;j<c;j++)
            {
                    int c=c+a[i][j];
            }
        }
        for(i=0;i<r/2;i++)
        {
            for(j=0;j<c;j++)
            {
                    int d=d+b[i][j];
            }
        }
        if(c==d)
        {
            for(i=0;i<r/2;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<a[i][j]<<"\t";
                }
                cout<<endl;
            }
            for(i=0;i<r/2;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<b[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
    }
    else
        cout<<"Operation not possible";
    return 0;
}
