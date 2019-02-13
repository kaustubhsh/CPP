#include<iostream>
#include<conio.h>

using namespace std;

class test
{
	int code;
	static int count;	// static member variable(or class variable)

	public:

		void setCode(void)
		{
			code = ++count;
		}

		void showCode(void)
		{
			cout<<"Object number: "<<code<<endl;
		}

		static void showCount(void)	  // static member function
		{
			cout<<"count: "<<count<<endl;
		}
};

int test :: count;

int main()
{
	test t1, t2;

	t1.setCode();
	t2.setCode();

	test::showCount();	// accessing static member function
//			OR
//	t1.showCount();
//			OR
//	t2.showCount();

	test t3;
	t3.setCode();

	test::showCount();

	t1.showCode();
	t2.showCode();
	t3.showCode();
	
	getch();
	return 0;
}
