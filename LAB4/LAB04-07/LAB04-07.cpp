#include <cmath>
#include <iostream>
using namespace std;

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
bool isPrime(int n) {
    // จำนวนที่น้อยกว่าหรือเท่ากับ 1 ไม่เป็นจำนวนเฉพาะ
    if (n <= 1) return false;
    // ตรวจทุกตัวตั้งแต่ 2 ถึง sqrt(n)
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// ตัวอย่างการเรียกใช้งาน
int main() {
    int num;
    cout << "กรอกจำนวน: ";
    cin >> num;
    if (isPrime(num)) {
        cout << num << " เป็นจำนวนเฉพาะ" << endl;
    }
    else {
        cout << num << " ไม่เป็นจำนวนเฉพาะ" << endl;
    }
    return 0;
}