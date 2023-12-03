/*
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Palindromic String
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   2/12/2023
               Time         :   0.03514 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
*/ 

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string reversed = s;
    reverse(reversed.begin(), reversed.end());

    cout << (s == reversed ? "YES" : "NO") << endl;

    return 0;
}