#include <iostream>
#include <cstring>
using namespace std;

// 미완
int main() {
	char str1[100] = "";
	cout << "새 암호를 입력하세요>>";
	cin >> str1;
	cout << "str1은 " << str1 << endl;

	char str2[100] = "";
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> str2;
	cout << "str2는 " << str2 << endl;

	if (strcmp(str1, str2) == 0)	// strcmp로 안 하고 str1 == str로 비교해서 오류가 뜸
		cout << "같습니다" << endl;
	else
		cout << "같지 않습니다" << endl;

	return 0;
}