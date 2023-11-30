/*
               Solver       :   Arif Khan
               Problem      :   Favourite Singer
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   30/11/2023
               Time         :   0.33385 sec
               Memory       :   1.1 MB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/favourite-singer-a18e086a/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<long long> arr(n);
    unordered_map<long long, int> freq;

    int mx = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
        mx = max(mx, freq[arr[i]]);
    }

    for (const auto& num : freq) {
        if (num.second == mx) ans++;
    }

    cout << ans << endl;

    return 0;
}
