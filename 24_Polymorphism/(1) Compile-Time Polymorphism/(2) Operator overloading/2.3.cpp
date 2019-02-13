//Polymorphism: Compile-Time-->Early(Static) Binding
//Operator Overloading Example using Friend function
#include <iostream>  
#include<conio.h>

using namespace std;
typedef unsigned int uInt;

class Money  
{  
	private:  
		uInt rs;
		uInt ps;  
	
	public:
	
		void set(uInt a, uInt b)
		{
			rs=a;
			
			ps=b;
		}
		
		void show()
		{   
		   cout<<rs<<"."<<ps<<endl;   
		}
		
		friend Money operator +(Money, Money);
		
		friend Money operator *(int, Money);
};

//Overloading binary operator '+'
Money operator +(Money m1, Money m2)
{   
	Money temp;
	
	temp.rs = m1.rs + m2.rs;
	temp.ps = m1.ps + m2.ps;
	
	return temp;
}

//Overloading binary operator '*'
Money operator *(int n, Money m)
{   
	Money temp;
	
	temp.rs = n * m.rs;
	temp.ps = m.ps;
	
	return temp;
}
		
int main()  
{  
	int a=4,b=2;	//Primitive types
	Money m1, m2,m3;	//Non-Primitive types
	
	int c = a + b;
	cout<<"c="<<c<<endl<<"----------------------\n\n";
	
	cout<<"Object m1:";
	m1.set(100,10);
	m1.show();
	
	cout<<"\nObject m2:";
	m2.set(200,40);
	m2.show();
	
	cout<<"\nAdding objects m1 and m2\n";
	m3 = m1 + m2;
	m3.show();
	
	cout<<"\nMultiplying rupees\n";
	(3 * m3).show();
	
	getch();
	return 0;
}
