#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int x, y;
    x = 3;
    y = 3.14;
    cout << "Переменные типа int:\n" << x << "\n" << y << "\n" << "\n";
    
    double z, k;
    z = 3;
    k = 3.14;
    cout << "Переменные типа double:\n" << z << "\n" << k << "\n" << "\n";
    
    cout << "В результате переменные типа int отбрасывают дробные значения \n" << "\n";
}