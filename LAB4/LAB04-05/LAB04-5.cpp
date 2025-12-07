#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int answer, guess;
    srand(time(0));          // กำหนด seed สำหรับสุ่มเลข
    answer = rand() % 100 + 1; // สุ่มเลข 1-100

    do {
        cout << "กรุณาทายเลข (1-100): ";
        cin >> guess;

        if (guess < answer) {
            cout << "น้อยกว่าเลขที่ถูกต้อง" << endl;
        }
        else if (guess > answer) {
            cout << "มากกว่าเลขที่ถูกต้อง" << endl;
        }
        else {
            cout << "ยินดีด้วย! คุณทายถูกแล้ว" << endl;
        }
    } while (guess != answer);

    return 0;
}