#include <iostream>
#include <vector>

using namespace std;

// Function to rotate the matrix 90 degrees to the right
vector<vector<int>> rotateRight(vector<vector<int>>& mat, int n) {
    vector<vector<int>> tmp(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            tmp[j][n - 1 - i] = mat[i][j];
        }
    }

    return tmp;
}

// Function to rotate the matrix 90 degrees to the left
vector<vector<int>> rotateLeft(vector<vector<int>>& mat, int n) {
    vector<vector<int>> tmp(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            tmp[n - 1 - j][i] = mat[i][j];
        }
    }

    return tmp;
}

int main() {
    int n;
    cin >> n;

    // Input matrix
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }

    string rotationQuery;
    cin >> rotationQuery;

    // Perform rotations based on the query
    for (char rotation : rotationQuery) {
        if (rotation == 'R') {
            mat = rotateRight(mat, n);
        } else {
            mat = rotateLeft(mat, n);
        }
    }

    // Print the final matrix
    for (const vector<int>& row : mat) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
