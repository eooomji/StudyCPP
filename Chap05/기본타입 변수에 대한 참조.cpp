#include <iostream>
using namespace ste;

int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int& refn = n;	// i = 1, n = 2, refn = 2
	int n = 4;		// i = 1, n = 4, refn = 4
	refn++;			// i = 1, n = 5, refn = 5
	cout << i << '\t' << n << '\t' << refn << endl;	//	1 5 5

	refn = i;		// i = 1, n = 1, refn = 1
	refn++;			// i = 1, n = 2, refn = 2
	cout << i << '\t' << n << '\t' << refn << endl;	// 1 2 2

	int* p = &refn;	// i = 1, n = 2, refn = 2
	*p = 20;		// i = 1, n = 20, refn = 20, 
	cout << i << '\t' << n << '\t' << refn << endl;	// 1 20 20
}

// 참조 변수는 같이 계속 바뀌나봐