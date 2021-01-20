#include <iostream>
using namespace std;

int main() {
	int num = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> num;

	int sum = 0;
	for (int i = 0; i <= num; i++)
		sum += i;
	cout << "1에서 " << num << "까지의 합은 " << sum << "입니다" << endl;

}