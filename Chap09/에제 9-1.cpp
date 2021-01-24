#include <iostream>
using namespace std;

class Base {
public:
	void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	void f() { cout << "Derived;; f() called" << endl; }
};

void main() {
	Derived d, * pDer;
	pDer = &d;		// °´Ã¼ d¸¦ °¡¸®Å´
	pDer->f();		// DerivedÀÇ ¸â¹ö f() È£Ãâ

	Base* pBase;
	pBase = pDer;	// ¾÷Ä³½ºÆÃ. °´Ã¼ d¸¦ °¡¸®Å´
	pBase->f();		// BaseÀÇ ¸â¹ö f() È£Ãâ
}