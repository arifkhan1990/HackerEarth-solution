#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int ans = 0;
        while(n != 0){
            ans += int(n/5);
            n /= 5;
        }
        cout << ans << endl;
    }
    return 0;
}