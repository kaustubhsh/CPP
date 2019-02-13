// 3. Hierarchical Inheritance Example
#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

class Employee
{
	int e_id;
	float salary;
		
	public:
		
		void setEmployeeDetail(int id, float s)
		{ 
			e_id=id; 
			salary=s; 
		}
		
		void showEmployeeDetail()
		{ 
			cout<<"Employee id="<<e_id<<"\nEmployee salary="<<salary; 
		}
};

class Company1 : public Employee
{
	// private data-members
	char c_name[32];
	
	public:
		void setName(char n[])
		{
			strcpy(c_name,n);
		}
		
		void displayName()
		{
			cout<<"Name of company: "<<c_name<<endl;
		}
};

class Company2 : public Employee
{
	// private data-members
	char c_name[32];
	
	public:
		void setName(char n[])
		{
			strcpy(c_name,n);
		}
		
		void displayName()
		{
			cout<<"Name of company: "<<c_name<<endl;
		}
};

int main(void)
{
	Company1 c1;
	Company2 c2;
	
	char n1[]="Company-1";
	c1.setName(n1);
	c1.displayName();
	
	c1.setEmployeeDetail(1001,1040.467);
	c1.showEmployeeDetail();
	
	cout<<"\n--------------------------\n";
	
	char n2[]="Company-2";
	c2.setName(n2);
	c2.displayName();
	
	c2.setEmployeeDetail(1008,2500.890);
	c2.showEmployeeDetail();
	
	getch();
	return 0;
}
