#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string sum;
    cout << "Enter the sum: ";
    cin >> sum;
    
    if (sum.length() > 100 || sum.empty()) {
        cout << "Invalid input" << endl;
        return 1;
    }
    for (size_t i = 0; i < sum.length(); i++) {
        if (i % 2 == 0) {
            if (sum[i] != '1' && sum[i] != '2' && sum[i] != '3') {
                cout << "Invalid input" << endl;
                return 1;
            }
        } else {
            if (sum[i] != '+') {
                cout << "Invalid input" << endl;
                return 1;
            }
        }
    }

    string numbers;
    for (size_t i = 0; i < sum.length(); i += 2) {
        numbers += sum[i];
    }

    sort(numbers.begin(), numbers.end());

    string result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        result += numbers[i];
        if (i != numbers.size() - 1) {
            result += '+';
        }
    }

    cout << "Rearranged: " << result << endl;
    return 0;
}