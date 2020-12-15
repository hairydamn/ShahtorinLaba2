#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	float a, b, c, d, x, x1, x2;
	cout << "Введите 3 числа уравнения: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "Ваше уравнение: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

	d = b * b - 4 * a * c;
	cout << "Дискриминант равен: " << d << endl;

	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "Корни уравнения равны: " << x1 << " и " << x2 << endl;
	}
	else if (d == 0)
	{
		x = (-b) / (2 * a);
		cout << "Корень уравнения равен: " << x << endl;
	}
	else
	{
		cout << "Корни отсутствуют!" << endl;
	}
	system("pause");
}
