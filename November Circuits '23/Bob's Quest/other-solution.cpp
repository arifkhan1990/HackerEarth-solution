#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// less_equal to ordered multiset

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int j = 0, ans = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
        while (mp.size() > x)
        {
            mp[v[j]]--;
            if (mp[v[j]] == 0)
                mp.erase(v[j]);
            j++;
        }
        if (mp.size() == x && mp.find(y) != mp.end())
        {
            ans = max(ans, i - j + 1);
        }
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
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}