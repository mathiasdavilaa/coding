#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int C;
    char T;
    double M[12][12];
    double soma = 0.0;

    cin >> C;
    cin >> T;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }

    for(int i = 0; i < 12; i++){
        soma += M[i][C];
    }

    if(T == 'M'){
        soma /= 12.0;
    }

    cout << fixed << setprecision(1);
    cout << soma << endl;

    return 0;
}