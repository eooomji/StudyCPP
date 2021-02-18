#include <iostream>
using namespace std;

int main() {
	char name[100];
	char callNum[100];

	cout << "이름을 입력하세요: ";
	cin >> name;

	cout << "전화번호를 입력하세요: ";
	cin >> callNum;

	cout << "이름: " << name << endl;
	cout << "전화번호: " << callNum << endl;
}