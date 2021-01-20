#include <iostream>
using namespace std;

int main() {
	char str[100] = {};

	cout << "문자들을 입력하라(100개 미만)." << endl;
	
	int count = 0;
	cin.getline(str, 100);

	for (int i = 0; i < 100; i++)
		if (str[i] == 'x')
			count++;

	cout << "x의 개수는 " << count;

	return 0;
}