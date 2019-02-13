//Polymorphism: Compile-Time(Static)-->Early Binding
// Function Overloading Example
#include <iostream>
#include <conio.h>

using namespace std;  

class Cal 
{  
    public:  
		
		// On the base of order of arguments
		float add(int a,float b)
		{  
			cout<<"add1\t";  
	        return a + b;    
	    }    
		
		float add(float a, int b)    
	    {    
	    	cout<<"add2\t";
	        return a + b;
	    }
};
  
int main(void)
{  
	Cal C;  
	
	cout<<C.add(10, 20.40f)<<endl;
	cout<<C.add(12.2f,8)<<endl;
	
	getch();
	return 0;  
}
