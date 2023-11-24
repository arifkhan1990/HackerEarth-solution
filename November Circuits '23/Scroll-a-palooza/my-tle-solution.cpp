// get pass 7 / 10 testcase , 65 mark

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long int t;
    cin >> t;

    while (t--)
    {
        long int n, w;
        cin >> n;

        vector<long int> a(n), pre(n);

        for (long int i = 0; i < n; i++)
        {
            cin >> a[i];
            pre[i] = (i > 0 ? pre[i - 1] : 0) + a[i];
        }

        cin >> w;

        for (long int i = 0; i < w; i++)
        {
            long int q;
            cin >> q;

            long int start = -1, end = -1;
            long int ft[n], lt[n], fti = 0, lti = 0;
            long int sum = 0;

            // Find start index
            for (long int l = 0, r = n - 1; l < n; l++, r--)
            {
                if (start == -1 && abs(pre[l]) >= q)
                {
                    start = l + 1;
                }
                if (end == -1 && abs(pre[r]) >= q)
                {
                    end = r + 1;
                }
                if (start != -1 && end != -1)
                    break;
            }

            if (start == -1 && end == -1)
            {
                cout << start << endl;
            }
            else
            {
                cout << max(start, 1L) << " " << max(end, 1L) << endl;
            }
        }
    }

    return 0;
}