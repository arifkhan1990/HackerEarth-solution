/*
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Count Divisors
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   0.03634 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/
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
    int l, r, k;
    cin >> l >> r >> k;

    int ans = (r/k) - ((l-1)/k);

    cout << ans << endl;

    return 0;
}