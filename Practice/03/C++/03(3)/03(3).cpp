﻿
#include <iostream>

int main()
{

	setlocale(LC_ALL, "Russian");
	std::cout << "Введите числа через пробел:" << "\n";

	//Объявляем переменные типа double и int
	double a;
	a = 0;
	int b;
	b = 0;

	//Вводим значения
	std::cin >> a >> b;

	//Выводим результаты вычислений 
	std::cout << a + b << "," << a - b << "," << a * b << "," << a / b << "\n";

	/*В результате при вычислениях вторая переменная будет отбрасывать дробную часть
и будет считаться как целое значение */
}
//Выполнил Синчак С.С.