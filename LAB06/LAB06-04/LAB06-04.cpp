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
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore(); // เคลียร์ newline ก่อน getline

    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];

    for (int i = 0; i < size; i++)
    {
        cout << "__________________________\n";
        cout << "Enter student name: ";
        getline(cin, name[i]);
        cout << "Enter student ID: ";
        cin >> id[i];
        cout << "Enter student Score: ";
        cin >> score[i];
        cin.ignore(); // เคลียร์ newline ก่อน getline ในรอบถัดไป
		calculateGrade(score[i], grade[i]);
    }
	cout << "\n======= STUDENT RESULTS =======" << endl;
    for (int i = 0; i < size; i++)
    {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
	}
	delete[] name;
	delete[] id;
	delete[] score; 
	delete[] grade; 

    // TODO: วนรับข้อมูล size คน
    // TODO: calculateGrade(score[i], grade[i]);

    // TODO: วนแสดงผล size คน ด้วย displayStudentInfo

    // TODO: delete[] ให้ครบทุกตัวแปร

    return 0;
}
