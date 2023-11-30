#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, l, r;
    cin >> n >> l >> r;
    long long int a[n];
    vector<long long int> o, e;

    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            e.push_back(a[i]);
        }
        else
        {
            o.push_back(a[i]);
        }
    }

    long long int ans = 0;

    sort(o.begin(), o.end());
    sort(e.begin(), e.end());

    for (long long int i = 0; i < o.size(); i++)
    {
        if (o[i] + e[0] > r)
            break;
        for (long long int j = 0; j < e.size(); j++)
        {
            long long int y = o[i] + e[j];
            if (y >= l && y <= r)
            {
                ans++;
            }
            else if (y > r)
            {
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}