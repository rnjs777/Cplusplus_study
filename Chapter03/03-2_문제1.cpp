// p.135 ¹®Á¦ 03-2 [Å¬·¡½ºÀÇ Á¤ÀÇ]
// ¹®Á¦1

#include <iostream>
using namespace std;

class Calculator {
private:
	int numOfAdd;
	int numOfMin;
	int numOfMul;
	int numOfDiv;
public:
	void Init();
	float Add(float num1, float num2);
	float Min(float num1, float num2);
	float Mul(float num1, float num2);
	float Div(float num1, float num2);
	void ShowOpCount();
};

void Calculator::Init() {
	numOfAdd = 0;
	numOfMin = 0;
	numOfMul = 0;
	numOfDiv = 0;
}

float Calculator::Add(float num1, float num2) {
	numOfAdd++;
	return num1 + num2;
}

float Calculator::Min(float num1, float num2) {
	numOfMin++;
	return num1 + num2;
}

float Calculator::Mul(float num1, float num2) {
	numOfMul++;
	return num1 + num2;
}

float Calculator::Div(float num1, float num2) {
	numOfDiv++;
	return num1 + num2;
}

void Calculator::ShowOpCount() {
	cout << "µ¡¼À: " << numOfAdd << ' ';
	cout << "»¬¼À: " << numOfMin << ' ';
	cout << "°ö¼À: " << numOfMul << ' ';
	cout << "³ª´°¼À: " << numOfDiv << endl;
}

int main(void) {
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.5) << endl;
	cout << "2.2 - 1.5 =" << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 =" << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}