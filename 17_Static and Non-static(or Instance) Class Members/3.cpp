#include<iostream>
#include<conio.h>

using namespace std;

class Demo
{
	int a,b;	// instance data-members
	static int count;	// static data-members
	
	public:
		Demo()
		{
			a=b=0;
			count++;
		}
		
		Demo(int x, int y)
		{
			a=x;
			b=y;
			
			count++;
		}
		
		Demo(const Demo &obj)
		{
			count++;
			
			a=obj.a;
			b=obj.b;
		}
		
		static void objectCount()
		{
			cout<<"No. of objects created at current instant= "<<count<<endl;
		}
};

int Demo::count;

int main()
{
	Demo::objectCount();
	
	Demo d1;
	Demo::objectCount();
	
	Demo d2(7,8);
	Demo::objectCount();
	
	Demo d3(d2);
	Demo::objectCount();
	
	getch();
	return 0;
}
