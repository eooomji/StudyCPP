// 동적 메모리 할당
int* pInt = new int;	// int 타입의 정수 공간 할당
char* pChar = new char;	// char 타입의 문자 공간 할당
Circle* pCircle = new Circle;	// Circle 클래스 타입의 객체 할당

delete pInt;	// 할당받은 정수 공간 반환
delete pChar;	// 할당받은 문자 공간 반환
delete pCircle;	// 할당받은 객체 공간 반환

// 힙 메모리가 부족하면 new는 NULL을 리턴 
// new의 리턴 값이 NULL인지 검사하는 것이 좋음 !!!!!!!!!!!!!!!!?
int* p = new int;	// 힙으로부터 int 타입의 정수 공간 할당
if (!p) {	// == if(p==NULL)
	return;	// 메모리 할당받기 실패
}
*p = 5;		// 할당받은 정수 공간에 5 기록
int n = *p;	// 할당받은 정수 공간에서 값 읽기. n=5
delete p;	// 할당받은 정수 공간 반환

// 배열을 delete 할 때 주의사항
int* p = new int[10];
delete p;	// 비정상 반환. delete [] p;로 해야 함.
int* q = new int;
delete[] q;	// 비정상 반환. delete q;로 해야 함.

// 객체 배열의 사용
Circle* pArray = new Circle[3];	// 객체 배열의 동적 생성

pArray[0].setRadius(10);
pArray[1].setRadius(20);
pArray[2].setRadius(30);

for (int i = 0; i < 3; i++)
	cout << pArray[i].getArea();

delete[] pArray;