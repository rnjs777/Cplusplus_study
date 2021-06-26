

#include <iostream>
#include <cstring>
using namespace std;


int main(void) {
	const char* str1 = "abc 123";
	const char* str2 = "def 456";
	char* str3[1];

	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;
	strcpy_s(*str3,1, str1);
	strcat_s(*str3,1, str2);
	cout << str3 << endl;

	if (strcmp(str1, str2) == 0)
		cout << "asdf" << endl;
	else
		cout << "qwer" << endl;
	return 0;
}
