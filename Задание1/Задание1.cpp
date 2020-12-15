#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a;
	cout << "Введите произвольное число: " << endl;
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "Введенное вами число является чётным" << endl;
	}
	else { cout << "Введенное вами число является нечётным" << endl; }
	system("pause");
}