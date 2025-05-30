﻿// hw1 task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//Эллипс в аналитической геометрии обычно определяется координатами его
//центра C(h, k), длинами большой полуоси a и малой полуоси b.В
//зависимости от того, где расположена большая ось, уравнения эллипса
//могут быть определены следующими уравнениями :
//атрибуты: координаты центра (h, k), длина большой полуоси a, длина малой полусои b.
// 
// h int
// k int 
// a int
#include <iostream>
#include "libellipse.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	double h, k, a, b;
	cout << "Введите координаты эллипса ";
	cin >> h >> k;
	cout << "Введите длины полуосей ";
	cin >> a >> b;

	Ellipse el(h, k, a, b);
	el.printEll();

	double px, py; //проверки того, находится ли некоторая точка P(x, y) внутри, над или снаружи эллипса.

	cout << "Введите координаты точки P: ";
	cin >> px >> py;

	int res = el.checkPoint(px, py);
	if (res == 0) {
		cout << "Точка Р находится внутри эллипса" << endl;
	}
	else if (res == 1) {
		cout << "Точка Р находится на эллипсе" << endl;
	}
	else {
		cout << "Точка Р находится вне эллипса" << endl;
	}

	cout << "Параметр С = " << el.calcC() << endl;
	cout << "Длина фокальной хорды = " << el.focalChord() << endl;
	cout << "Эксцентриситет = " << el.calcE() << endl;
	cout << "Периметр эллипса = " << el.calcP() << endl;
	cout << "Площадь эллипса = " << el.calcS() << endl;
	
	double ex, ey;
	cout << "Введите координату х точки Е ";
	cin >> ex;
	cout << "Координата у точки Е = " << el.calcY(ex)<< endl;

	cout << "Введите координату у точки Е ";
	cin >> ey;
	cout << "Координата х точки Е = " << el.calcX(ey) << endl;


}

