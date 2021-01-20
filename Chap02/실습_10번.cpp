#include <iostream>
using namespace std;

// 미완
int main() {
	char str[100] = "";
	cout << "문자열 입력>>";
	cin >> str;

	for (int i = 0; i != '\0'; i++) {
		cout << str[i] << endl;
	}
}