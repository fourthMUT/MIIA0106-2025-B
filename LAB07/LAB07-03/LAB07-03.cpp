// TODO: เปลี่ยนค่า a ผ่าน pointer 
#include <iostream> 
using namespace std;

int main() {
    int a = 5;
    int* p = &a;

    // TODO 
    *p = 100;

    cout << "a = " << a << endl;
    return 0;
}