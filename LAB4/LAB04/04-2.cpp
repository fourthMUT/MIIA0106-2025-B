#include <iostream>
using namespace std;

int main() 
{
	int score = 85;

	if (score	>= 90) {
		cout << "A" << endl;
	}
	else if (score >=80) {
		cout << "B" << endl;
	}
	else if (score >= 70) {
		cout << "C" << endl;
	}
	else
	{
		cout << "F" << endl;
	}
	return 0;	
}