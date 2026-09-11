#include <iostream>
#include <iomanip> // Para usar setprecision

using namespace std;

int main() {
    float nums[6];
    int positivos = 0;
    float soma = 0.0;

    for (int i = 0; i < 6; i++) {
        cin >> nums[i];
        
        if (nums[i] > 0) { 
            positivos++;
            soma = soma + nums[i];
        }
    }

    cout << positivos << " valores positivos" << endl;
    
    cout << fixed << setprecision(1) << soma / positivos << endl;

    return 0;
}