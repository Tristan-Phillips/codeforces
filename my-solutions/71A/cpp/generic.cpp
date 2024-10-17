#include <iostream>
#include <string>

using namespace std;

int main() {
    int totalWords;
    cout << "Enter the total number of words: ";
    cin >> totalWords;

    string words[totalWords];
    for (int i = 0; i < totalWords; i++) {
        cout << "Enter word #" << i + 1 << ": ";
        cin >> words[i];
    }

    for (int i = 0; i < totalWords; i++) {
        string word = words[i];
        if (word.length() > 10) {
            cout << word.front() << word.length() - 2 << word.back() << endl;
        } else {
            cout << word << endl;
        }
    }

    return 0;
}