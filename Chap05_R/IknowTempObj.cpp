#include <iostream>
using namespace std;

class Temporary {
private:
	int num;
public:
	Temporary(int n) : num(n) {
		cout << "create obj: " << num << endl;
	}

	~Temporary() {
		cout << "destroy obj: " << num << endl;
	}

	void ShowTempInfo() {
		cout << "My num is " << num << endl;
	}
};

int main() {
	Temporary(100);
	cout << "************* after make!" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "************* after make!" << endl << endl;

	const Temporary& ref = Temporary(300);
	cout << "************* end of main!" << endl << endl;
	return 0;
}

/*
출력창

create obj: 100
destroy obj: 100
************* after make!


create obj: 200
My num is 200
destroy obj: 200
************* after make!

create obj: 300
************* end of main!

destroy obj: 300

*/
