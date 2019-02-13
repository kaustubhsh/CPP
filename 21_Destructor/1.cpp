#include<iostream>
#include<conio.h>

using namespace std;
int count=0;

class test
{
	public:
		test()	//Default Constructor
		{
			count++;
			cout<<"\n\nConstructor Msg: Object number-"<<count<<" created..";
		}
		
		~test()	//Destructor
		{
			cout<<"\n\nDestructor Msg: Object number-"<<count<<" destroyed..";
			count--;
		}
};

int main()
{
	cout<<"Inside the main block..";
	cout<<"\n\nCreating first object t1..";
	test t1;
	
	{	//Block 1
		cout<<"\n\nInside Block 1..";
		cout<<"\n\nCreating two more objects t2 and t3..";
		test t2,t3;
		
		cout<<"\n\nLeaving Block 1..";
	}
	
	cout<<"\n\nBack inside the main block..";
	
	getch();
	return 0;
}
