#include <iostream>
using namespace std;

int main()
{
   setlocale(LC_ALL, "Russian");
   std::cout << "Результат выражения 2+2*2 = " + 2+2*2;
   return 0;
}