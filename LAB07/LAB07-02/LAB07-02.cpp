#include <iostream> 
using namespace std;

int main() {
    int score = 50;
    int* ptr = &score;

    // TODO 
    cout << "Value of score is=\t" << score << endl;
    cout << "VAlue of ptr is  =\t" << ptr << endl;

    cout << "address of score is\t" << &score << endl;
    cout << "address of ptr is\t" << &ptr << endl;



    return 0;
}
