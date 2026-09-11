#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double nota1, nota2, nota3;

    cin >> nota1;
    cin >> nota2;
    cin >> nota3;

    double media1 = nota1 * 0.2;
    double media2 = nota2 * 0.3;
    double media3 = nota3 * 0.5;

    double media_final = media1 + media2 + media3;

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << fixed << setprecision(1) << media_final << endl;

    return 0;
}