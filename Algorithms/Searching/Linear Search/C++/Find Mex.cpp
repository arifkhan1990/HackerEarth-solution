/*
                Solver       :   Arif Khan
                Problem      :   Find Mex
                Level        :   Medium
                Judge        :   HackerEarth
                Date         :   30/11/2023
                Time         :   0.39031 sec
                Memory       :   4MB
                Difficulty   :   Easy
                problem_link :   https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/find-mex-62916c25/
                github       :   https://github.com/arifkhan1990
                portfolio    :   https://arif-portfolio-orcin.vercel.app/
                gamil        :   arifkhanshubro@gmail.com
                phone        :   01960518551
*/


#include<bits/stdc++.h>
using namespace std;

vector<int> find_mex(const vector<int>& arr) {
    vector<int> mex_values;
    unordered_set<int> seen_set;
    int max_seen = -1;

    for(int num: arr) {
        seen_set.insert(num);

        while(seen_set.find(max_seen + 1) != seen_set.end()) {
            max_seen++;
        }

        mex_values.push_back(max_seen + 1);
    }

    return mex_values;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> result = find_mex(arr);

    for(int mex: result) {
        cout << mex << " ";
    }

    return 0;
}