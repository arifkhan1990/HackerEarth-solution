/*
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Zoos
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   2/12/2023
               Time         :   0.0542 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/
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

    int z_count = count(s.begin(), s.end(), 'z');
    int o_count = count(s.begin(), s.end(), 'o');

    if (z_count*2 == o_count){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}