#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char Yes[100] = "";
	char answer[100] = "yes";

	while (true) {
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		cin >> Yes;
		
		if (strcmp(Yes, answer) == 0)
			cout << "종료합니다...";
			break;
	}
}