#include<iostream>
#include<conio.h>

using namespace std;

// Creating class
class Demo
{
	private:
		int x;
		int y;
		double z;
	
	public:
		// Special member-functions(Constructors)
		Demo();					//Default Constructor
		Demo(int);				//Parameterized Constructor
		Demo(int, int);			//Parameterized Constructor
		Demo(int, int, double);	//Parameterized Constructor
		Demo(const Demo&);		//Copy Constructor

		// Member-functions
		void set(int, int, double);
		void show();
};

Demo::Demo()
{
	cout<<"From Default constructor\n";
	x=0;
	y=0;
	z=0.0;
}

Demo::Demo(int a)
{
	cout<<"From Parametrized constructor 1\n";
	x=a;
	y=0;
	z=0.0;
}

Demo::Demo(int a,int b)
{
	cout<<"From Parametrized constructor 2\n";
	x=a;
	y=b;
	z=0.0;
}

Demo::Demo(int a,int b,double c)
{
	cout<<"From Parametrized constructor 3\n";
	x=a;
	y=b;
	z=c;
}

Demo::Demo(const Demo &obj)
{	
	cout<<"From Copy constructor\n";
	
	x=obj.x;
	y=obj.y;
	z=obj.z;
}

void Demo::set(int x,int y,double z)
{
	cout<<"Using set() function:\n";
	this->x=x;
	this->y=y;
	this->z=z;
}

void Demo::show()
{
	cout<<"x="<<x<<"\ty="<<y<<"\tz="<<z<<"\n\n";
}
		
int main(void)
{
	// Creating objects of class
	Demo d1;	//Implicit constructor call
	cout<<"Object: d1\n";
	d1.show();
	
	Demo d2(33);	//Implicit constructor call
	cout<<"Object: d2\n";
	d2.show();
	
	Demo d3(33,67);	//Implicit constructor call
	cout<<"Object: d3\n";
	d3.show();
	
	Demo d4(33,45,8.67);	//Implicit constructor call
	cout<<"Object: d4\n";
	d4.show();
	
	Demo d5(d4);	//Implicit constructor call
	cout<<"Object: d5\n";
	d5.show();
	
	d1.set(2,3,6.8);
	cout<<"Object: d1\n";
	d1.show();
	
	getch();
	return 0;
}
