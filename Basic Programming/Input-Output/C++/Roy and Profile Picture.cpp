/*
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Roy and Profile Picture
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   2/12/2023
               Time         :   0.06459 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
*/ 

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l;
    scanf("%d", &l);

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int w, h;
        scanf("%d %d", &w, &h);

        if (w < l || h < l) {
            printf("UPLOAD ANOTHER\n");
        } else if (w >= l && h >= l) {
            if (w == h) {
                printf("ACCEPTED\n");
            } else {
                printf("CROP IT\n");
            }
        }
    }

    return 0;
}
