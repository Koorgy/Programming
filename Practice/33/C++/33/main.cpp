#include <iostream>

int create()
{
    setlocale(LC_ALL, "Russian");

    int n = 0, x0 = 0, step = 0;
    std::cout << "Enter 3 parameters: " << "\n" <<"Array length:  ";
    std::cin >> n;
    std::cout << "Initial member:";
    std::cin >> x0;
    std::cout << "Arithmetic progression step: ";
    std::cin >> step;

    int *a = new int[n];
    for (int i = 0; i < n; i++ ) {
        a[x0] = x0 + step;
    }
    return 0;
}
