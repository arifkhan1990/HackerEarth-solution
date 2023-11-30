#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{

    int n;
    cin >> n;

    vector<int> a(n), pre(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pre[i] = a[i];
        if (i > 0)
        {
            pre[i] = pre[i] + pre[i - 1];
        }
    }

    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++)
    {
        x[i] = abs(pre[i]);
        y[i] = abs(pre[i]);
        if (i > 0)
        {
            x[i] = max(x[i], x[i - 1]);
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if ((i + 1) < n)
        {
            y[i] = max(y[i], y[i + 1]);
        }
    }
    reverse(y.begin(), y.end());

    int q;
    cin >> q;
    while (q--)
    {
        int w;
        cin >> w;

        int ind1 = lower_bound(x.begin(), x.end(), w) - x.begin();
        if (ind1 == n)
        {
            cout << -1 << endl;
            continue;
        }
        ind1 = ind1 + 1;
        int ind2 = lower_bound(y.begin(), y.end(), w) - y.begin();
        ind2 = n - ind2;

        cout << ind1 << ' ' << ind2 << endl;
    }
}

#undef int
int main()
{
#define int long long int
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++)
    {
        // cout << "Case #" << tc << ": ";
        solve();
    }

    return 0;
}