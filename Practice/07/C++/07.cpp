#include <iostream>
#include <cmath>


using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    double a,b,c,p,S,s,x1,x2,x3,y1,y2,y3;

    cout << "Выберите способ решения. 1 Через строны, 2 Через координаты: ";
    cin >> a;

    if (a==1){
        cout << "Введите стороны треугольника: ";
        cin >> a >> b >> c;
        
        if (a == 0 or b == 0 or c==0 or a + b > c or a + c > b or c + b > a){
            cout << "Ошибка, это не треугольник" << endl;
            return 0;
        }

        if (a < 0 or b < 0 or c < 0){
            cout << "Ошибка, неверная длина" << endl;
            return 0;
        }
        
        p = (a+b+c)/2;
        S = sqrt(p*(p-a)*(p-b)*(p-c));

        cout << "S = " << S << endl;
    } 

    if (a==2){
        cout << "Введите координаты 3-х вершин треугольника в каждой строке" << endl;

        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;

        if (x1 == x2 and y1 == y2 or x2 == x3 and y2 == y3 or x1 == x3 and x1 == x3){
            cout << "Ошибка, это не треугольник" << endl;
            return 0;

        }
        S = abs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1))/2;

        cout << "S = " << S << endl;
    }

return 0;
}