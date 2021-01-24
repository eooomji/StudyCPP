#include <iostream>
using namespace std;

class Circle {	// Circle 선언부
	//Circle();		// 정상적인 생성자 선언. 리턴 선언X
	//void Circle(int r);		// 오류. 생성자는 리턴 타입 없음
	//int Circle(double r);	// 오류. 생성자는 리턴 타입 없음
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};
//Circle::Circle() {
//	return;	// 생성자 함수를 종료하는 정상적인 리턴문
//}
//
//Circle::Circle() {
//	return 0;	// 오류. 생성자 함수는 값을 리턴하면 안 됨
//}

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;	// 반지름 1 원 생성
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;	// 반지름 30 원 생성
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;	// donut 면적은 3.14

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;	// pizza 면적은 2826
}