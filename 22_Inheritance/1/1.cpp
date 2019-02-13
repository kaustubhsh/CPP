// 1. Single Inheritance Example
#include <iostream>  
#include <conio.h>

using namespace std;

class A
{	 
	private:
		int a;
		
	public:  
		float salary;
		
		void setA(int x,float s)
		{
			a=x;
			salary=s;
		}
		
		void showA()
		{
			cout<<"a="<<a<<"\nSalary="<<salary<<"\n\n";
		}
};  

class B : public A
{  
	private:
		int b;
		
	public:  
		float bonus;
		
		void setB(int x,float bs)
		{
			b=x;
			bonus=bs;
		}
		
		void showB()
		{
			cout<<"b="<<b<<"\nBonus="<<bonus<<"\n\n";
		}
		
		//---------------------------------------------
		void setAB(int x,int y,float s,float bs)
		{
			setA(x,s);
			
			b=y;
			bonus=bs;
		}
		
		void showAB()
		{
			showA();
			cout<<"b="<<b<<"\nBonus="<<bonus<<"\n\n";
		}
};       


int main(void)
{
	B b1;

	b1.setA(2,6000.89);
	b1.showA();

	b1.setB(3,2000.76);
	b1.showB();
	
//		OR

//	b1.setAB(2,3,6000.89,2000.76);
//	b1.showAB();
	
	getch();
	return 0;  
}
