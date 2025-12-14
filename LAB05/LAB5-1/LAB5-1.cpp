#include<iostream>	
#include<string>

using namespace std;

double circleArea(double raduis)
{
	return 3.14 * raduis * raduis;
}

double rectArea (double width, double hight)
{
	return width * hight;
}


int main()
{
	double radius;
	double result;

	cout << "Enter the radius: ";
	cin >> radius;

	result = circleArea(radius);
	cout << "The area of the circle is: " << result << endl;

	double width,hight;
	
	cout << "Enter the width: "; //ใส่ความกว้าง
	cin >> width; //อ่านค่ามาเก็บมาในตัวแปร width

	cout << "Enter the hight: "; //ใส่ความสูง
	cin >> hight; //อ่านค่ามาเก็บมาในตัวแปร hight

	result = rectArea(width, hight);	
	cout << "The area of the rectangle is: " << result << endl;

	
	return 1;
}