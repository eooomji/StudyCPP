#include <iostream>
#include <istream>
#include <string>
using namespace std;

// 미완
int main() {
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n>>";
	
	char name[100] = {};

	cin >> name;
	
	cin.getline(name, 100, ';');
		for (int i = 0; i < 5; i++)
			cout << i + ':' + name << endl;

}