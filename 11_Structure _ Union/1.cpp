#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

struct book
{
	char name[32];
	int pages;
	float price;
}b1;

typedef struct book Book;

void display(Book);
void show(Book *);

int main()
{	
	Book b2;
	Book *b3;
	
	strcpy(b1.name,"C++ Book");
	b1.pages=300;
	b1.price=680.560;
	
	strcpy(b2.name,"Java Book");
	b2.pages=600;
	b2.price=980.760;
	
	b3=&b1;
	
	cout<<"Book1 Info:\n";
	show(b3);
	
	b3=&b2;
	
	cout<<"\n----------------\nBook2 Info:\n";
//	show(b3);
//		OR
	display(b2);
	
	getch();
	return 0;
}

void display(Book b)
{
	cout<<"Name="<<b.name<<endl;
	cout<<"Pages="<<b.pages<<endl;
	cout<<"Price="<<b.price<<endl;
}

void show(Book *b)
{
	cout<<"Name="<<b->name<<endl;
	cout<<"Pages="<<b->pages<<endl;
	cout<<"Price="<<b->price<<endl;
}
