#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char ch[]="Hello World";

	char *ptr=ch;	// stores the base address(&ch[0]) of string

	while(*ptr!='\0')
	{
		cout<<*ptr;
		ptr++;
	}
//		OR
//	cout<<ptr<<endl;

	getch();
	return 0;
}
