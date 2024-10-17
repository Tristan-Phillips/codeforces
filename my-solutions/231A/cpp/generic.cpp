#include <iostream>

using namespace std;

int main() {
    int numberOfProblems;
    cout << "Enter the number of problems: ";
    cin >> numberOfProblems;

    int problemsSolved = 0;
    for (int i = 0; i < numberOfProblems; i++) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
        if (petya + vasya + tonya >= 2) {
            problemsSolved++;
        }
    }

    cout << "Total problems to include: " << problemsSolved << endl;
    return 0;
}