#include <iostream>
using namespace std;

ostream& fivestar(ostream& outs) {
	return outs << "*****";
}

ostream& rightarrow(ostream& outs) {
	return outs << "-----";
}

ostream& beep(ostream& outs) {
	return outs << '\a';		// 시스템 비프 음(삑 소리) 발생
}

int main() {
	cout << "벨이 울립니다" << beep << endl;
	cout << "C" << rightarrow << "C++" << rightarrow << "JAVA" << endl;
	cout << "Visual" << fivestar << "C++" << endl;
}