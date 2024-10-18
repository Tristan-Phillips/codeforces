#include <iostream>

using namespace std;

int main(){
    int matrix[5][5];
    int x, y;
    for (int i = 0; i < 5; i++) {
        cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2] >> matrix[i][3] >> matrix[i][4];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                x = i;
                y = j;
                break;
            }
        }
    }

    cout << abs(x - 2) + abs(y - 2) << endl;
    return 0;
}