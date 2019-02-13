#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

class String
{
	private:
		char *s;
		int size;
		
	public:
		String(const char*); // constructor
		~String();	 // destructor
		
		void show();
};

String::String(const char *str)
{
	size = strlen(str);
	s = new char[size+1];
	strcpy(s,str);
}

String::~String()
{
	delete s;
	cout<<"\nDynamic memory hold by the String object has been released before going out of scope"<<endl;
}

void String::show()
{
	cout<<s<<endl;
}

int main()
{
	char str[40];
	
	cout<<"Enter a string:\n";
	cin.get(str,40);
	
	String s1(str);
	s1.show();
	
	getch();
	return 0;
}
