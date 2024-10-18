#include <iostream>

using namespace std;

int main() {
    string sum;
    cout << "Enter the sum: ";
    cin >> sum;

    for (int i = 0; i < sum.length(); i += 2) {
        for (int j = i + 2; j < sum.length(); j += 2) {
            if (sum[i] > sum[j]) {
                char temp = sum[i];
                sum[i] = sum[j];
                sum[j] = temp;
            }
        }
    }

    cout << "Rearranged: " << sum << endl;
    return 0;
}