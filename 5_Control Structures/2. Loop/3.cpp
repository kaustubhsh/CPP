#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n;
	
	cout<<"Enter n= ";
	cin>>n;
	
	for(int i=1;i<=10;i++)
	{
		cout<<n<<" X "<<i<<" = "<<n*i<<endl;
	}
	
	getch();
	return 0;
}
