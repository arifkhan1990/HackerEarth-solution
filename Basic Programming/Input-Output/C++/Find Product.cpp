/*
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Find Product
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   0.03581 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
*/ 

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int mod = 1000000007;
    long long result = 1;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        result = (result * num) % mod;
    }

    cout << result << endl;

    return 0;
}