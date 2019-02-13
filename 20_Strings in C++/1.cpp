/**
 * A String constant is a one-dimensional array of characters
 * terminated by null character('\0').
 */
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char ch[]={'H','e','l','l','o',' ','W','o','r','l','d','\0'};
//			OR
//	char ch[]="Hello World";

	int i=0;

	while(ch[i]!='\0')
	{
		cout<<ch[i];
		i++;
	}
//		OR
//	cout<<ch<<endl;

	getch();
	return 0;
}
