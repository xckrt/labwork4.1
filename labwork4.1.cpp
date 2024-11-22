#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
using namespace std;
double zadanie_1()
{
#undef e
#undef t
#undef z
#undef y
#undef x
#define e exp(1.0)
#define t 1
#define z t+2
#define y 4
#define x ((8 * (z)) / (pow((e), (t)) + 2) - pow((y), 2))
	return x;
}
double zadanie_2()
{
#undef x
#undef y
#undef z
#undef b
#define x 25.34
#define y 33.85
#define z (sin(x/y))/(2.0*pow(x,2.0))
#define b log(sqrt(x)-sqrt(y+2.0))*pow(z,3.0)
	return b;
}
double zadanie_3()
{
//Я отменил определение директивы Y для того чтобы определить переменную Y
#undef y
	double alfa;
	cout << "Введите alfa: ";
	cin >> alfa;
	double y = sin((2 * alfa) + sin(5 * alfa) - sin(3 * alfa)) / (cos(alfa) + 1 - 2 * sin(3 * alfa - 3.14159265358979323846));
	return y;
	
}
int main()
{
	setlocale(LC_ALL, "Russian");
	system("cls");
	cout << "1 задание: " << endl << "Ответ: ";
	double ans1 = zadanie_1();
	printf("%f\t\n", ans1);
	cout << "2 задание: " << endl << "Ответ: ";
	double ans2 = zadanie_2();
	printf("%f\t\n", ans2);
	double ans3 = zadanie_3();
	cout << "3 задание: " << endl << "Ответ: ";
	printf("%f\t\n", ans3);
	_getch();
}



