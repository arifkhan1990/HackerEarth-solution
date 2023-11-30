#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> ans;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            v1.push_back(i + 1);
        else
            v2.push_back(i + 1);
    }
    if (v1.size() < v2.size())
        swap(v1, v2);
    vector<int> v;
    for (int i = 0; i < v2.size(); i++)
    {
        v.push_back(v1[i]);
        v.push_back(v2[i]);
    }
    int len = v1.size() - v2.size();
    for (int i = 1; i < v.size(); i++)
        cout << v[i - 1] << " " << v[i] << "\n";
    for (int i = 0; i < len; i++)
    {
        if (i < len / 3)
            cout << v[1] << " " << v1[v2.size() + i] << "\n";
        else
            cout << v[v.size() - 1] << " " << v1[v2.size() + i] << "\n";
    }
    return 0;
}