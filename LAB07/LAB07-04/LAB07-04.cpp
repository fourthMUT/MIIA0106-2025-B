// TODO: แสดงค่าทุกตัวใน array โดยใช้ pointer เท่านั ้น 
#include <iostream> 
using namespace std;

int main() {
    int arr[] = { 10, 20, 30, 40 };
    int* p = arr;

    // TODO 
    //(p) 
 //(p + 1) 
 //(p + 2) 
 //(p + 3) 

    cout << *(p) << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;


    for (int i = 0; i < 4; i++)

    {
        cout << *(p + i) << endl;
    }

    return 0;
}