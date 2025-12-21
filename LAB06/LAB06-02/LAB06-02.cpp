#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// ฟังก์ชันสำหรับแสดงข้อมูลนักเรียน
void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "-----------------------------" << endl;
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

// ฟังก์ชันคำนวณเกรด (ใช้ Pass by Reference สำหรับเกรด)
void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    const int N = 5; // จำนวนนักเรียน
    string name[N], id[N];
    double score[N];
    char grade[N];

    // 1. วนรอบรับข้อมูล N คน
    for (int i = 0; i < N; i++)
    {
        cout << "Enter information for student " << (i + 1) << ":" << endl;

        cout << "Enter student name: ";
        getline(cin >> ws, name[i]); // ใช้ ws เพื่อข้ามช่องว่าง/ขึ้นบรรทัดใหม่ที่ค้างอยู่

        cout << "Enter student ID: ";
        cin >> id[i];

        cout << "Enter student Score: ";
        cin >> score[i];

        // 2. เรียกใช้ฟังก์ชันคำนวณเกรด
        calculateGrade(score[i], grade[i]);
        cout << endl;
    }

    // 3. วนรอบแสดงผล N คน
    cout << "\n======= STUDENT RESULTS =======" << endl;
    for (int i = 0; i < N; i++)
    {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
    }

    return 0;
}
