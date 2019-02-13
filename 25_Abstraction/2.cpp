#include<iostream>
#include<conio.h>

using namespace std;

class vehicle		// Abstract class
{
	private:
		int a;
		int b;
		
	public:
		// pure-virtual function
		virtual void spec()=0;
};

class LVM : public vehicle
{
	public:
		// do nothing function(or empty function)
		void spec()
		{
			
		}
};

class HVM : public vehicle
{
	public:
		// do nothing function(or empty function)
		void spec()
		{
			
		}
};

class TW : public vehicle
{
//		not overriding pure-virtual function 'spec()'
//		so, TW class becomes abstract class
};

int main()
{
	LVM l1;	//OK
	HVM h1;	// OK
	
	TW v1;	// C.T. Error(Abstract class can't be instantiated)

	getch();
	return 0;
}
