// Hybrid Inheritance: (using Virtual-Base class)
#include<iostream>
#include <conio.h>

using namespace std;

class student
{
	protected:
		int rollno;
	
	public:
		void set_rollno(int a)
		{
			rollno = a;
		}
		
		void get_rollno()
		{
			cout<<"Roll no: "<<rollno<<"\n";
		}
};

class test : virtual public student
{
	protected:
		float part1, part2;
	
	public:
		void set_marks(float x, float y)
		{
			part1=x;
			part2=y;
		}
		
		void get_marks()
		{
			cout<<"Marks obtained:\n"
				<<"Part1= "<<part1 <<"\n"
				<<"Part2= "<<part2 <<"\n";
		}
};

class sports : public virtual student
{
	protected:
		float score;
	public:
		void set_score(float s)
		{
			score=s;
		}
		
		void get_score(void)
		{
			cout<<"Sports wt: "<<score<<"\n\n";
		}
};

class result : public test, public sports
{
	float total;
	
	public:
		void display(void);
};

void result::display(void)
{
	total = part1 + part2 + score;
	
	get_rollno();
	get_marks();
	get_score();
	
	cout<<"Total score: "<< total <<"\n";
}

int main()
{
	result s1;
	
	s1.set_rollno(121);
	s1.set_marks(30.5,25.5);
	s1.set_score(7.0);
	
	s1.display();
	
	getch();
	return 0;
}
