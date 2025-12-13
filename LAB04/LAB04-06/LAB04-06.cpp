

#include <iostream>
#include <string>
using namespace std;

// ฟังก์ชันควบคุมรถ
void turnLeft() {
    cout << "รถเลี้ยวซ้าย" << endl;
}
void turnRight() {
    cout << "รถเลี้ยวขวา" << endl;
}
void moveForward() {
    cout << "รถวิ่งตรงไปข้างหน้า" << endl;
}

int main() {
    string sensorInput;
    // จำลองอ่านค่าจาก sensor
    // ค่าที่รับเข้า: "LEFT" "RIGHT" "CENTER" (หรือ "STOP" เพื่อหยุดโปรแกรม)
    while (true) {
        cout << "กรุณากรอกตำแหน่งเส้น (LEFT, RIGHT, CENTER, STOP): ";
        cin >> sensorInput;
        if (sensorInput == "STOP") {
            cout << "หยุดการทำงาน" << endl;
            break;
        }
        if (sensorInput == "LEFT") {
            turnLeft();
        }
        else if (sensorInput == "RIGHT") {
            turnRight();
        }
        else if (sensorInput == "CENTER") {
            moveForward();
        }
        else {
            cout << "ข้อมูลไม่ถูกต้อง กรุณากรอกใหม่" << endl;
        }
    }
    return 0;
}