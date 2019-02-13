/**
 * Recursion: calling self
 * -----------------------
 * Recursive function: A function calling itself
 */
#include<iostream>
#include<conio.h>

using namespace std;



int main(void)
{
    static int n=0;
	cout<<"Function main() is called "<<++n<<" times..."<<endl;

	if(n!=5)
		main();

	getch();
	return 0;
}
