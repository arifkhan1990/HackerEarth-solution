#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> odd, even;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x & 1)
            odd.push_back(x);
        else
            even.push_back(x);
    }
    if (even.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
    sort(even.begin(), even.end());
    int ans = 0;
    for (auto &it : odd)
    {
        auto ind = lower_bound(even.begin(), even.end(), l - it) - even.begin();
        auto right = upper_bound(even.begin(), even.end(), r - it) - even.begin();
        ans += right - ind;
    }
    cout << ans << endl;
}

signed main()
{
    FastIO;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    // cin>>t;
    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}