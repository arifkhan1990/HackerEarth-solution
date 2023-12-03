/*
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Factorial!
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   0.03581 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
*/ 


#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * factorial(n-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    cout << factorial(num) << endl;
    return 0;
}