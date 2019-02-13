#include <iostream>
#include <conio.h>

using namespace std;

namespace First
{
   void sayHello()
   {
      cout << "Hello First Namespace" << endl;
   }

   class A
   {
   		public:

   		void display()
   		{
   			cout<<"From class A and namespace First"<< endl;
		}
   };
}

namespace Second
{
   void sayHello()
   {
      cout << "Hello Second Namespace" << endl;
   }

   class A
   {
   		public:

   		void display()
   		{
   			cout<<"From class A and namespace Second"<< endl;
		}
   };
}

using namespace First;

int main()
{
   sayHello();

   A a1;
   a1.display();

   Second::sayHello();

   Second::A a2;
   a2.display();

   getch();
   return 0;
}
