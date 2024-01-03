#include <bits/stdc++.h>
using namespace std;
 
long long count_ordered_pairs_with_indices(int n, const vector<int>& arr) {
    long long count = 0;
    map<int, int> diff_count;
 
    for (int i = 0; i < n; ++i) {
        int diff = arr[i] - i;
        count += diff_count[diff];
        diff_count[diff]++;
    }
 
    return count+count;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
 
    int result = count_ordered_pairs_with_indices(n, arr);
    cout << result << endl;
 
    return 0;
}