#include <iostream>
using namespace std;

bool getExp(int base, int exp, int& ret) {	// base의 exp 지수승을 계산해 ret에 저장
	if (base <= 0 || exp <= 0) {	// 매개 변수 중 하나라도 음수이면
		return false;		// 오류 리턴
	}
	int value = 1;
	for (int n = 0; n < exp; n++)
		value = value * base;
	ret = value;
	return true;	// 정상 리턴. 계산된 값은 ret에 있음
}

int main() {
	int v = 0;
	if (getExp(2, 3, v))
		cout << "2의 3승은 " << v << "입니다." << endl;	// 8
	else
		cout << "오류. 2의 3승은 " << "계산할 수 없습니다." << endl;

	int e = 0;
	if (getExp(2, -3, e))
		cout << "2의 -3승은 " << e << "입니다." << endl;
	else
		cout << "오류. 2의 -3승은 " << "계산할 수 없습니다." << endl;
}