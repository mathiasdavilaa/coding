#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;
    int num[n];

    int dentro = 0;
    int fora = 0;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
        if (num[i] >= 10 && num[i] <= 20) {
            dentro = dentro + 1;
        } else {
            fora++;
        }
    }

    cout << dentro << " in" << endl;
    cout << fora << " out" << endl;

    return 0;
}