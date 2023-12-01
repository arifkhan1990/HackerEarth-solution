/*
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Maximum borders
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   01/12/2023
               Time         :   0.02651 sec
               Memory       :   2 KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/maximum-border-9767e14c/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n , m;
        cin >> n >> m;

        vector<string> mat(n);
        for (int i = 0; i < n; ++i) {
            cin >> mat[i];
        }

        int ans = 0;

        for (const string& line : mat){
            int cur = 0;
            for (char x : line){
                cur = (x == '#') ? cur + 1: 0;
                ans = max(ans, cur);
            }
        }

        for (int col = 0; col < m; col++) {
            int cur = 0;
            for (int row = 0; row < n; ++row) {
                cur = (mat[row][col] == '#') ? cur + 1 : 0;
                ans = max(ans, cur);
            }
        }

        cout << ans << endl;
    }
    return 0;
}