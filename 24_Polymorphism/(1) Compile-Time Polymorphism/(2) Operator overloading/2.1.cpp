//Polymorphism: Compile-Time-->Early(Static) Binding
// Operator Overloading Example
#include <iostream>  
#include<conio.h>

using namespace std;  

class Test  
{  
	private:  
		int num;  
	
	public:
	
		void set(int a)
		{
			num=a;
		}
		
		void Print(string obj_name)
		{   
		   cout<<obj_name<<".num= "<<num<<endl;
		}
		
		//Overloading unary operator: '++' for prefix
		Test operator ++()
		{
			Test temp;
			temp.num = ++num;
			
			return temp;
		}
		
		//Overloading unary operator: '++' for postfix
		Test operator ++(int)
		{
			Test temp;
			temp.num = num++;
			
			return temp;
		}
};

int main()  
{
	cout<<"For primitive types:"<<endl;
	int a1=1,b1;
	b1 = ++a1;
	cout<<"Prefix:    a1= "<<a1<<"\tb1= "<<b1<<endl;
	
	int a2=1,b2;
	b2 = a2++;
	cout<<"Postfix:   a2= "<<a2<<"\tb2= "<<b2<<endl;
	
	cout<<"\nFor non-primitive types:"<<endl;
	cout<<"Prefix:"<<endl;
	Test t1,t2;
	t1.set(1);
	// calling of function "operator ++()"
	t2 = ++t1;    // Compiler will translate it into: 't2 = t1.operator ++();'
	t1.Print("t1");
	t2.Print("t2");
	
	cout<<"\nPostfix:"<<endl;
	Test t3,t4;
	t3.set(1);
	// calling of function "operator ++(int)"
	t4 = t3++;    // Compiler will translate it into: 't4 = t3.operator ++(int);'
	t3.Print("t3");
	t4.Print("t4");
	
	getch();
	return 0;  
}
