#include<iostream>
#include<string>
using namespace std;

int main() {
	
	// 첫 번째 방법
	std::cout << "Hello\n";	// \n == end1
	std::cout << "첫 번째 맛보기입니다.";
	// 두 번째 방법
	std::cout << "Hello\n" << "첫 번째 맛보기입니다.";

	int width, height;
	cout << "너비와 높이를 입력하세요 >> ";
	cin >> width >> height;
	cout << width << "\n" << height << "\n";

	char address[100];
	cin.getline(address, 100, '\n'); // cin.getline(address, 100)과 동일

	string song("Falling in love with you");	// 문자열 song
	string elvis("Elvis Presley");
	string singer;

	cout << song + "를 부른 가수는";
	cout << "(힌트 : 첫 글자는" << elvis[0] << ")? ";

	getline(cin, singer);	// 문자열 입력
	if (singer == elvis)
		cout << "맞았습니다.";
	else
		cout << "틀렸습니다." + elvis + "입니다." << endl; // +로 문자열 연결

	return 0;
}