// C++ program to find factorial

#include <iostream>
using namespace std;


unsigned int factorial(unsigned int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

// Driver code
int main()
{
	int num = 5;
	cout << "Factorial of " << num << " is "
		<< factorial(num) << endl;
	return 0;
}