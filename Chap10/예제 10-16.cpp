#include <iostream>
#include <string>
using namespace std;

int main() {
	auto love = [](string a, string b) {
		cout << a << "보다 " << b << "가 좋아" << endl;
	};

	love("돈", "너");		// 돈보다 너가 좋아
	love("냉면", "만두");	// 냉면보다 만두가 좋아
}