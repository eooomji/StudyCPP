#include <iostream>
using namespace std;

void get1() {
	cout << "cin.get()로 <Enter> 키까지 입력 받고 출력합니다>>";
	int ch;
	while ((ch = cin.get()) != EOF) {	// 문자 읽기
		cout.put(ch);					// 읽은 문자 출력
		if (ch == '\n')					// <Enter> 키가 입력 되면
			break;						// 읽기 중단
	}
}

void get2() {
	cout << "cin.get(char&)로 <Enter> 키까지 입력 받고 출력합니다>>";
	char ch;
	while (true) {
		cin.get(ch);					// 문자 읽기
		if (cin.eof()) break;			// EOF를 만나면 읽기 종료
		cout.put(ch);					// ch의 문자 출력
		if (ch == '\n')
			break;
	}
}

int main() {
	get1();
	get2();
}