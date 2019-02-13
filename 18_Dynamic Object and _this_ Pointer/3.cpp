#include<iostream>
#include<conio.h>

using namespace std;

class Demo
{
	private:
		int x;
		int y;
	
	public:
		
		void set(int a,int b)
		{
			x=a;
			y=b;
			
			show();
		}
		
		void input()
		{
			cout<<"\nEnter three integers:"<<endl;
			cin>>x>>y;
			
			show();
		}
		
		void show()
		{
			cout<<"x="<<x<<"\ny="<<y;
		}
};

int main(void)
{
	Demo d1;
	
	d1.set(3,4);
//	d1.show();
	
	return 0;
}
