
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	std::cout << "Введите числа:" << "\n";

	//Объявляем переменные типа double
	double a, b;
	a = 0;
	b = 0;

	//Вводим значения
	std::cin >> a >> b;

	//Выводим результаты вычислений 
	std::cout << a + b << "," << a - b << "," << a * b << "," << a / b << "\n";
	//В результате тип double, в отличии от int, позволяет выводить дробные значения
	return 0;
}
//Выполнил Синчак С.С.