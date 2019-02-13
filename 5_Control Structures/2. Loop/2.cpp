#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i;
	
	i=1;	// Initialization Part
	
	do
	{
		cout<<i<<endl;
		
		i++;	// Action Part
	}
	while(i<=10);	// Condition Part
	
	getch();
	return 0;
}
