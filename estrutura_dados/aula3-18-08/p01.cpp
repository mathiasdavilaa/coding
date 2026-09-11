#include <iostream>

using namespace std;

void adiciona(double &a, double b){a = a + b; cout << "Na funcao adiciona: " << a << endl;}

int main(){
    double x = 10, y = 0.5;

    adiciona(x,y);
    cout << "na main: " << x;

    return 0;
}