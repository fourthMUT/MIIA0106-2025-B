#include <iostream>
#include <string>

using namespace std;

int maxOfthree(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
}
int minOfthree(int a, int b, int c)
{ 
	if (a <= b && a <= c)
	   return a;
	else if (b <= a && b <= c)
	   return b;
	else
	   return c;

}


int main()
{
	int a,b,c;
	int maxvalue = -1000000;
	int minvalue =1000000;


	cout << "Enter first integer: ";
	cin >> a;
	cout << "Enter second integer: ";
	cin >> b;
	cout << "Enter third integer: ";
	cin >> c;

	maxvalue = maxOfthree(a, b, c);
	cout << "The maximum value is: " << maxvalue << endl;
	

	minvalue = minOfthree(a,b,c);
	cout << "The minimum value is: " << minvalue << endl;
	return 1;

}