#include "Tasks.h"

// здесь пишем реализацию всех задачек из "Tasks.h"
// проверять правильно ли работает задачка - можно в main

int seconds(int hours, int minutes, int seconds)
{
	hours = hours * 3600;
	minutes = minutes * 60;
	seconds = hours + minutes + seconds;
	return seconds;
}

int sqr(int x)
{
	return x * x;
}

double discriminant(int a, int b, int c)
{
	double D;
	if (b % 2 == 0)
		D = sqr(b / 2) - a * c;
	else
		D = sqr(b) - 4 * a * c;
	return D;
}

double lengthInMeters(int sagenes, int arshins, int vershoks)
{
	sagenes = sagenes * 48;
	arshins = arshins * 16;
	vershoks = (sagenes + arshins + vershoks) * 4.445;
	return vershoks;
}

//double trackLength(double x1, double y1, double x2, double y2)
//{
//	double res;
//	res = sqrt((sqr(x2 - x1)) + (sqr(y2 - y1)));
//	return res;
//}

//int travelMinutes(int hoursDepart, int minutesDepart, int hoursArrive, int minutesArrive)
//{
//
//}

//bool isNumberHappy(int number)
//{
//	int a, b, c, d;
//	bool res;
//	a = number / 1000;
//	cout << a << endl;
//	b = number / 100;
//	b = b % 10;
//	cout << b << endl;
//	c = number % 100;
//	c = c / 10;
//	cout << c << endl;
//	d = number % 10;
//	cout << d << endl;
//	if ((a + b) == (c + d))
//		res = true;
//	else
//		res = false;
//	return res;
//}
