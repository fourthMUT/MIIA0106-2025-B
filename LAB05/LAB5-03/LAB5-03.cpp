#include <iostream>
#include <string>
using namespace std;


void swapValues(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "Inside swapValues function: " << endl;
	cout << "a = " << a << " b = " << b << endl; 
}
void swapRef(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "Inside swapValues function: " << endl;
	cout << "a = " << a << " b = " << b << endl;
}


int main()
{
	int a, b;
	cout << "Enter first integer: ";
	cin >> a;
	cout << "Enter second integer: ";
	cin >> b;
	cout << "Before calling swapValues function: " << endl; 
	cout << "a = " << a << " b = " << b << endl;
	swapValues(a, b);
	cout << "a = " << a << " b = " << b << endl; 

	swapRef(a, b);
	cout << "a = " << a << " b = " << b << endl;

	return 1;
}