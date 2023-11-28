#include <iostream>
using namespace std;

int main() {
    int a, b, num = 0;
    cin >> a >> b;

    char arr[a][b];

    // Input matrix
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            cin >> arr[i][j];

    // Check for 'saba' substrings
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            if (arr[i][j] == 's') {
                // Right
                if (i < a - 3 && arr[i + 1][j] == 'a' && arr[i + 2][j] == 'b' && arr[i + 3][j] == 'a')
                    ++num;

                // Down
                if (j < b - 3 && arr[i][j + 1] == 'a' && arr[i][j + 2] == 'b' && arr[i][j + 3] == 'a')
                    ++num;

                // Diagonal (top-left to bottom-right)
                if (i >= 3 && j < b - 3 && arr[i - 1][j + 1] == 'a' && arr[i - 2][j + 2] == 'b' && arr[i - 3][j + 3] == 'a')
                    ++num;

                // Diagonal (top-right to bottom-left)
                if (i < a - 3 && j < b - 3 && arr[i + 1][j + 1] == 'a' && arr[i + 2][j + 2] == 'b' && arr[i + 3][j + 3] == 'a')
                    ++num;
            }
        }
    }

    cout << num << endl;

    return 0;
}
