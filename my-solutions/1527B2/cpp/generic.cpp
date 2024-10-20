#include <iostream>

using namespace std;

bool isPalindrome(string s){
    return s == string(s.rbegin(), s.rend());
}

bool winningCondition(string s) {
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '0'){
            return false;
        }
    }
    return true;
}

int zeroCount(string s){
    int count = 0;
    for (char c : s){
        if (c == '0'){
            count++;
        }
    }
    return count;
}

string changeZeroToOne(string s, int index){
    if(s[index] == '0'){
        s[index] = '1';
    }
    return s;
}

int bestZeroIndex(string s) {
    int index = s.find('0');
    if (index != string::npos){
        return index;
    }
    return -1;
}

string reverseString(string s){
    return string(s.rbegin(), s.rend());
}

void winner(string s, string contestant1, string contestant2) {
    int moves = 0, contestant1Pays = 0, contestant2Pays = 0;
    bool previousTurnReverse = false;
    while (!winningCondition(s)){
        if (isPalindrome(s) || previousTurnReverse) {
            int index = bestZeroIndex(s);
            if (index == -1){
                continue;
            }
            s = changeZeroToOne(s, index);
            if (moves % 2 != 0){
                contestant1Pays++;
            } else {
                contestant2Pays++;
            }
            moves++;
            previousTurnReverse = false;
        } else {
            s = reverseString(s);
            moves++;
            previousTurnReverse = true;
        }
    }
    if (contestant1Pays == contestant2Pays){
        cout << "DRAW" << endl;
    } else if (contestant1Pays > contestant2Pays){
        cout << "Winner: " << contestant1 << endl;
    } else {
        cout << "Winner: " << contestant2 << endl;
    }
}

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;

    while (t--){
        string s;
        cout << "Enter the string: ";
        cin >> s;

        string contestant1 = "ALICE", contestant2 = "BOB";
        winner(s, contestant1, contestant2);
    }
}