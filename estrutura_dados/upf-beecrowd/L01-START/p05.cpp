#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int time, speed;

    cin >> time >> speed;

    int distance = time * speed;

    double litros = distance / 12.0;

    cout << fixed << setprecision(3);
    cout << litros << endl;

    return 0;
}