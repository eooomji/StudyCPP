#include <iostream>
using namespace std;

int main() {

	cout.put('A');	// A
	cout.put(33);	// ! (ASCII 코드 33은 문자 !이므로
	cout.put('C').put('+').put('+').put(' ');	// C++ 이 출력됨

	char str[] = "I love programming";
	cout.write(str, 6);		// str에 있는 6개의 문자 "I love" 출력

	cout.flush();
}