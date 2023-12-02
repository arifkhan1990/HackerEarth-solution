/*
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Seven-Segment Display
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   2/12/2023
               Time         :   0.09002 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
*/ 

#include <bits/stdc++.h>
using namespace std;

string max_number_with_matchsticks(const string& matchsticks) {
    // Define the number of matchsticks needed for each digit (0 to 9)
    vector<int> matchsticks_required = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    int largest_number = accumulate(matchsticks.begin(), matchsticks.end(),
                                    0, [&matchsticks_required](int sum, char digit) {
                                        return sum + matchsticks_required[digit - '0'];
                                    });

    string ans;

    if (largest_number % 2 == 1) {
        ans += '7';
        largest_number -= 3;
    }

    if (largest_number > 0) {
        ans += string(largest_number / 2, '1');
    }

    return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Input the number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        // Input the number for the current test case
        string n;
        cin >> n;

        // Calculate the result and print it
        string result = max_number_with_matchsticks(n);
        cout << result << endl;
    }

    return 0;
}
