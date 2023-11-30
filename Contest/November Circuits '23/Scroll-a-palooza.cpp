#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long int t;
    cin >> t;
    for (long int j = 0; j < t; j++)
    {
        long int n, w;

        cin >> n;

        long int a[n], pre[n];

        for (long int i = 0; i < n; i++)
        {
            cin >> a[i];
            pre[i] = 0;
        }

        pre[0] = a[0];

        for (long int i = 1; i < n; i++)
        {
            if (a[i] == 0)
            {
                pre[i] = pre[i - 1];
            }
            else if (a[i] > 0)
            {
                pre[i] = a[i] + pre[i - 1];
            }
            else
            {
                pre[i] = (a[i] + pre[i - 1]);
            }
        }

        cin >> w;

        for (long int i = 0; i < w; i++)
        {
            long int q;
            cin >> q;
            long int l = 0, r = n - 1;
            long int f = -1, e = -1;

            while (l < n)
            {
                if (l < n && f == -1 && abs(pre[l]) >= q)
                {
                    f = l + 1;
                }
                l++;

                if (r > 0 && e == -1 && abs(pre[r]) >= q)
                {
                    e = r + 1;
                }

                r--;

                if (f != -1 && e != -1)
                {
                    break;
                }
            }
            if (f == -1 && e == -1)
            {
                cout << f << endl;
            }
            else
            {
                if (f == -1)
                {
                    cout << e << " " << e << endl;
                }
                else if (e == -1)
                {
                    cout << f << " " << f << endl;
                }
                else
                {
                    cout << f << " " << e << endl;
                }
            }
        }
    }

    return 0;
}