#include <iostream>
#include <cstring>
using namespace std;

int stringToInt(const char x[]) {
	int sum = 0;
	int len = strlen(x);
	for (int i = 0; i < len; i++) {
		if
			(x[i] >= '0' && x[i] <= '9')	// '0'-'9' 사이 숫자인 경우
			sum = sum * 10 + x[i] - '0';
		else    // 숫자가 아닌 문자의 경우, 수로 변환할 수 없음
			throw x;
	}
	return sum;
}

int main() {
	int n;
	try {
		n = stringToInt("123");
		cout << "\"123\" 은 정수 " << n << "로 변환됨" << endl;
		n = stringToInt("1A3");
		cout << "\"1A3\" 은 정수 " << n << "로 변환됨" << endl;
	}
	catch (const char* s) {
		cout << s << " 처리에서 예외 발생!!" << endl;
		return 0;
	}
}