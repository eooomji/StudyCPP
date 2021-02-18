#include <iostream>
using namespace std;

int main() {
	int num, result;

	while (1) {
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> num;
		if (num == -1) {
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else {
			result = 50 + num * 0.12;
			cout << "이번달 급여: " << result << "만원" << endl;
		}
	}
}