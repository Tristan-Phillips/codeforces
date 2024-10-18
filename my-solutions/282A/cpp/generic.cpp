#include <iostream>

using namespace std;

int main() {
    int numberOfOperations;
    cout << "Enter the number of operations: ";
    cin >> numberOfOperations;

    int sum = 0;
    for (int i = 0; i < numberOfOperations; i++) {
        string operation;
        cout << "Enter the Bit++ operation: ";
        cin >> operation;
        if (operation == "++x" || operation == "x++") {
            sum++;
        } else if (operation == "--x" || operation == "x--") {
            sum--;
        } else {
            cout << "Invalid operation" << endl;
            return 1;
        }
    }

    cout << "Final value of x: " << sum << endl;
    return 0;
}