#include <iostream>
#include <string>	// std::getline()이 들어가있음.
#include <cstring>
using namespace std;


int main() {
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n>>";
	//string name;

	//getline(cin, name, ';');	// ;앞까지만 나옴 ==> 처음 거에서 짤림...
	//cout << name.size();

	//char name[100] = "";

	//cin.getline(name, 10, ';');
	//cout << name << endl;	// 위와 똑같이 나옴. 반복문이 필요해보임..

	char name[100], lar_name[100];
	int len = 0;
	for (int i = 0; i < 5; i++) {	// 됐다.. 이제 가장 긴 것만 구분해주면 됨 !
		cin.getline(name, 10, ';');
		cout << i + 1 << ":" << name << endl;
		if (len < strlen(name)) {	// len을 0으로 지정해두고, 계속해서 큰 거 구분
			len = strlen(name);		// strlen(name)이 len보다 크면 len에 들어감
			strcpy(lar_name, name);	// name을 lar_name에 복사하기
		}
	}
	cout << "가장 긴 이름은" << lar_name << endl;
}