#include <iostream>

using namespace std;

int main(){

    double a,b,c;
    char A;

    cin >> a >> A >> c;

    if (A == '+'){
        cout << a+c << endl;
    }
    if (A == '-'){
        cout << a-c << endl;
    }
    if (A == '*'){
        cout << a*c << endl;
    }
    if (A == '/'){
        if (c==0){
            cout << "На ноль делить нельзя";
            return(0);
        }
        cout << a/c << endl;
    }
    else {
        cout << 
    }
}
//Выполнил Синчак С.С.