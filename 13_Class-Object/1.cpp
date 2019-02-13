#include<iostream>
#include<conio.h>

using namespace std;

// Creating class
class Demo
{
	private:
		int x;
		int y;

	public:
		int z;

		void set(int a,int b)
		{
			x=a;
			y=b;
		}

		void show()
		{
			cout<<"x="<<x<<"\ny="<<y;
		}

		void input()
		{
			cout<<"\nEnter three integers:"<<endl;
			cin>>x>>y>>z;
		}

		void display()
		{
			cout<<"\nx="<<x<<"\ty="<<y<<"\tz="<<z<<endl;
		}
};

int main(void)
{
	// Creating objects of class
	Demo d1,d2;

	d1.set(2,3);
	d1.z=10;

	d1.show();
	cout<<"\nz="<<d1.z<<"\n\n";

	d2.set(4,5);
	d2.z=30;

	d2.show();
	cout<<"\nz="<<d2.z<<"\n\n";

	Demo d3;
	d3.input();
	d3.display();

	getch();
	return 0;
}
