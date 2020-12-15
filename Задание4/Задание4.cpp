#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	float x, y, d;
	char znak;
begin:
	cout << "Введите первое число: ";
	cin >> x;
	cout << endl;
	cout << "Введите действие(+,-,*,/): ";
	cin >> znak;
	cout << endl;
	cout << "Введите второе число: ";
	cin >> y;
	cout << endl;
	if (znak == '+') {
		d = x + y;
		cout << "Ответ: " << d << endl << endl << endl;
		goto begin;
	}
	else if (znak == '-') {
		d = x - y;
		cout << "Ответ: " << d << endl << endl << endl;
		goto begin;
	}
	else if (znak == '*') {
		d = x * y;
		cout << "Ответ: " << d << endl << endl << endl;
		goto begin;
	}
	else if (znak == '/') {
		d = x / y;
		cout << "Ответ: " << d<< endl << endl << endl;
		goto begin;
	}
	system("pause");
}
