// Friend function example
#include<iostream>
#include<conio.h>

using namespace std;  

class Box  
{    
    int length;  
    
	friend int printLength(Box);
};  

int printLength(Box b)  
{  
	b.length=10;
	
    b.length += 10;  
    
	return b.length;  
}  

int main()  
{  
    Box b;
//	b.length=10;
	cout<<"Length of box: "<< printLength(b)<<endl;
    
    getch();
	return 0;  
}
