#include <iostream>

using namespace std;

int main() {
    int number = 0, steps = 0;
    cout << "Enter the number: ";
    cin >> number >> steps;
    while (steps--){
        if (number % 10 == 0){
            number /= 10;
        } else {
            number--;
        }
    }
    cout << "Answer: " << number << endl;
    return 0;
}