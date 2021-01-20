#include <iostream>
using namespace std;

int main() {
	float a = 0, b = 0, c = 0, d = 0, e = 0, max = 0;

	cout << "5 개의 실수를 입력하라>>";
	cin >> a >> b >> c >> d >> e;

	float array[] = { a,b,c,d,e };

	max = array[0];
	for (int i = 0; i < 5; i++)
		if (max < array[i + 1])
			max = array[i + 1];

	cout << "제일 큰 수 = " << max << endl;
}