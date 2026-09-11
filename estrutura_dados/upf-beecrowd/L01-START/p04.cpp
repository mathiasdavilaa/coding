#include <iostream>

using namespace std;

int main() {
    int numA, numB, numC, numD;

    cin >> numA >> numB >> numC >> numD;

    int diff = (numA * numB - numC * numD);

    cout << "DIFERENCA = " << diff << endl;

    return 0;
}