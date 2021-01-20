#include <iostream>
using namespace std;

int main() {
	int num = 0;
	int people = 0;

	cout << " ***** 승리장에 오신 것을 환영합니다. *****" << endl;
	while (1) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
		cin >> num;
		if (num >= 5) {
			cout << "다시 주문하세요!!" << endl;
			cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
			cin >> num;
		}
		else if (num == 4) {
			cout << "오늘 영업은 끝났습니다." << endl;
			return 0;
		}

		cout << "몇인분?";
		cin >> people;

		if (num == 1)
			cout << "짬뽕 " << people << "인분 나왔습니다" << endl;
		else if (num == 2)
			cout << "짜장 " << people << "인분 나왔습니다" << endl;
		else if (num == 3)
			cout << "군만두 " << people << "인분 나왔습니다" << endl;
	}
}