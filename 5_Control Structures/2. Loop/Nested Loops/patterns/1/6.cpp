/**
 * Print pattern:
 * A
 * A B
 * A B C
 * A B C D
 */

#include<iostream>

using namespace std;

int main()
{
	for(char i=65;i<=68;++i)
	{
		for(char j=65;j<=i;j++)
		{
			cout<<j<<" ";
		}
		
		cout<<endl;
	}
	
	return 0;
}
