#include <iostream>
using namespace std;

int main() {
    int kilos;
    cout << "Enter the weight of the watermelon: ";
    cin >> kilos;
    if (kilos % 2 == 0 && kilos > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}