#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
};
Point::Point() { x = 0; y = 0; }
Point::Point(int a, int b) { x = a; y = b; }


Point::Point() : x(0), y(0) {
}
Point::Point(int a, int b)
	: x(a), y(b) {
}

//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	double getArea();
//};
//
//inline Circle::Circle() {			// inline 멤버 함수
//	radius = 1;
//}
//
//Circle::Circle(int r) {
//	radius = r;
//}
//	
//inline double Circle::getArea() {	// inline 멤버 함수
//	return 3.14 * radius * radius;
//}

class Circle {
private:
	int radius;
public:
	Circle() {		// 자동 인라인 함수
		radius = 1;
	}

	Circle(int r);
	double getArea() {
		return 3.14 * radius * radius;
	}
};

Circle::Circle(int r) {
	radius = r;
}