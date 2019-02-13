//Polymorphism: Compile-Time --> Early(Static) Binding
// Function Overloading Example
#include <iostream>  
#include <conio.h>

using namespace std;  

class Cal 
{  
    public:  
		
		// On the base of no. of arguments
		int add(int a,int b)
		{  
			cout<<"add1\n";  
	        return a + b;    
	    }    
		
		int add(int a, int b, int c)    
	    {    
	    	cout<<"add2\n";
	        return a + b + c;
	    }    
};
  
int main(void)
{
	Cal C;  
	
	cout<<C.add(10, 20)<<endl;
	cout<<C.add(12, 20,32)<<"\n\n";   
	
	getch();
	return 0;
}  
