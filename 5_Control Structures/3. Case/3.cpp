#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int month;
	
	cout<<"Enter month(1-12): ";
	cin>>month;
	
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"No of days= 31"<<endl;
			break;
			
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<"No of days= 30"<<endl;
			break;
		
		case 2:
			cout<<"No of days either 28 or 29(Leap year)"<<endl;
			break;
			
		default:
			cout<<"You have entered invalid choice! Enter between: 1 to 12"<<endl;
	}
	
	getch();
	return 0;
}
