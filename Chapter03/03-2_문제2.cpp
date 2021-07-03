// p.135 문제 03-2 [클래스의 정의]
// 문제 2

#include <iostream>
#include <cstring>
using namespace std;

class Printer {
private:
	char str[50];
public:
	void SetString(const char* s);
	void SetString();
	void ShowString();
};

void Printer::SetString(const char* s) {
	strcpy_s(str, s);
}

void Printer::ShowString() {
	cout << str << endl;
}

int main(void) {
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I don't love C++");
	pnt.ShowString();
	return 0;
}