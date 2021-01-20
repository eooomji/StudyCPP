#include <iostream>
using namespace std;

int main() {
	char name[100] = "";
	cout << "이름은?";
	cin.getline(name, 100, '\n');

	char address[100] = "";
	cout << "주소는?";
	cin.getline(address, 100, '\n');

	char age[100] = "";
	cout << "나이는?";
	cin.getline(age, 100, '\n');

	cout << name << ", " << address << ", " << age << "세" << endl;
}