#include <iostream>

using namespace std;


int main(){
    
    double g, v, t ,xt, x;
    g=9.8;

    cout << "Введите координаты, скорость, время через пробел: "; 
    cin >> x >> v >> t;

    xt = x + v*t - ((g*t*t)/2);

    cout << abs(xt - x) << endl;

    return 0;
}
//Выполнил Синчак С.С.