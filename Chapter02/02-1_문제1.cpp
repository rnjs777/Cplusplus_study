

#include <iostream>
using namespace std;

void addone(int &num) {
	num++;
}

void changesign(int &num) {
	num = -num;
}

int main(int &num) {
	int val = 10;
	
	addone(val);
	cout << val << endl;

	changesign(val);
	cout << val << endl;
}