#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
    // Create a vector containing integers
    vector<int> v(5);
 
    // Add two more integers to vector
    v.push_back(25);
    v.push_back(13);
 
    // Iterate and print values of vector
	// using foreach loop/enhanced for loop/range-based for loop
    for(int n : v)
	{
        cout << n << '\n';
    }
    
	getch();
	return 0;
}
