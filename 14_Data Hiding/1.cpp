// Example to show Data Hiding
#include <iostream>
#include <conio.h>

using namespace std;
//------------------------------------------------------------------------------------------------------------

class Demo
{
	private:
		int a;	// private data-members are tightly-coupled so, they are hidden for the outside context
		
	public:
		int b;	// public data-members are loosly-coupled so, they are visible for the outside context
		
		// public interfaces(layers) for outside context to interact with private data-member 'a'(indirectly)
		void setA(int x)
		{
			a=x;	
		}

		void showA()
		{
			cout<<"a= "<<a<<endl;	
		}
};
//------------------------------------------------------------------------------------------------------------

int main()	// outside context(or world)
{
	Demo d1;
	
	d1.setA(1);	// indirect interaction due to private access
	d1.b=2;		// can be accessed directly due to public access
	
	d1.showA();	// indirect interaction due to private access
	cout<<"b= "<<d1.b<<endl;	// can be accessed directly due to public access
	
	getch();
	return 0;
}
