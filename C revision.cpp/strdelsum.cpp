#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
        int a[100],n,i;
        cout<<"Enter size of array \t:";
        cin>>n;
        cout<<"Enter array elements:\n";
        for(i=0;i<n;i++)
            cin>>a[i];
        int b;
        b=a[0];

        for(i=0;i<n;i++)
        {
            if(b==a[i])
            {
                a[i]=a[i+1];
                n--;
            }
            b=a[i];
        }
        int s=0;
        for(i=0;i<=n;i++)
        {
//            s=s+a[i];
                cout<<a[i]<<"\t";

        }
//        cout<<"Sum = "<<s<<endl;
        return 0;
}
