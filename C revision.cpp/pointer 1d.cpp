#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,i,j;

    cout<<"Enter size of array:\t";
    cin>>n;

    int*p=new int[n];

    cout<<"Enter "<<n<<" array elements:\n";

    for(i=0;i<n;i++)
        cin>>p[i];

    cout<<"Array elements are :\n";

    for(i=0;i<n;i++)
        cout<<p[i]<<"\t"<<&p[i]<<endl;

    delete p;
    return 0;
}
