// Program to show shallow copy
#include<iostream>
#include<conio.h>

using namespace std;

class Demo
{
	int size;
	int *p;

	public:
		Demo(int size)
		{
			this->size=size;

			p = new int[size];
		}
		
		// compiler version of copy constructor
		Demo(const Demo &obj)
		{
			size = obj.size;
			p    = obj.p;
		}

		int getSize()
		{
			return size;
		}

		void inputArray()
		{
			cout<<"\nEnter array elements:"<<endl;
			for(int i=0;i<size;i++)
			{
				cin>>p[i];
			}
		}

		void printArray()
		{
			cout<<"\nArray elements are:"<<endl;
			for(int i=0;i<size;i++)
			{
				cout<<p[i]<<"\t";
			}
		}
};

int main()
{
	int n;
	cout<<"Enter size of array1= ";
	cin>>n;

	Demo d1(n);
	cout<<"\nSize of array: "<<d1.getSize();
	d1.inputArray();
	d1.printArray();

	//-------------------------------------
	cout<<"\nEnter size of array2= ";
	cin>>n;

	Demo d2(n);
	cout<<"\nSize of array: "<<d2.getSize();
	d2.inputArray();
	d2.printArray();

//	d2=Demo(d1);
//	cout<<"\nSize of array: "<<d2.getSize();
//	d2.printArray();

	//--------------------------------------
	Demo d3(d2);
	cout<<"\nSize of array: "<<d3.getSize();
	d3.printArray();

	getch();
	return 0;
}
