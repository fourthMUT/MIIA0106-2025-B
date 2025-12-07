#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "start for \n";
	for(int i = 1;
		i < 11;
		i++)
{ 
	cout << i << "\n";
}
	cout << "start while \n";
int j =1;
while (j<11)
{
	cout << j << "\n";
	j++;
}
	cout << "start do  \n";
	int k = 1;
	do

{
	cout << k << "\n";
		k++;
} while (k < 11);
	
	return 1;
}