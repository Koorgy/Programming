﻿
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    // Объявляем переменные и просим ввести значения
    std::cout << "Введите числа:";
    int a, b, c;
    a = 0;
    b = 0;
    std::cin >> a >> b;

    // Меняем местами переменные с помощью третьей переменной
    c = a;
    a = b;
    b = c;

    // Выводим переменные
    std::cout << "\n" << a << "," << b << "\n";
}
// Выполнил Синчак С.С.