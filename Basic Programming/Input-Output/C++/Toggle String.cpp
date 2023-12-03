/*
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Toggle String
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   0.03581 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/
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
    string s;
    cin >> s;

    for (char& c : s) {
        if (islower(c)) {
            c = toupper(c);
        } else {
            c = tolower(c);
        }
    }

    cout << s << endl;

    return 0;
}