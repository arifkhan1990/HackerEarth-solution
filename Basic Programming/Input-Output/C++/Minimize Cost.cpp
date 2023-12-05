#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long res = 0;
    int i = 0;

    while (i < n) {
        int j = 1;
        res += abs(arr[i]);

        if (arr[i] > 0) {
            while (j <= k && i + j < n) {
                if (arr[i + j] < 0) {
                    res += arr[i + j];
                    ++j;
                } else {
                    break;
                }
            }
        }

        i += j;
    }

    cout << abs(res) << endl;

    return 0;
}