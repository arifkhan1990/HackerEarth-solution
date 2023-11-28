#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Input matrix
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mat[i][j];
        }
    }

    // Transpose matrix
    vector<vector<int>> ans(m, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            ans[j][i] = mat[i][j];
        }
    }

    // Print transposed matrix
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
