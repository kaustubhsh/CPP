// Dynamic Memory Allocation
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n;
	cout<<"No of elements u want:";
	cin>>n;
	
	int *ptr =	new int[n];
	
	cout<<"Enter "<<n<<" elements in array:\n";
	for(int i=0;i<n;i++)
		cin>>ptr[i];
	
	cout<<"\n\nArray elements:\n";
	for(int i=0;i<n;i++)
		cout<<ptr[i]<<"\t"<<&ptr[i]<<endl;
	
	delete ptr;
	
	getch();
	return 0;
}
