/*
             ...........................................................

               Solver      :   Arif Khan
               Problem     :   Micro and Array Update
               Judge       :   HackerEarth
               Date        :   3/9/18
               Time        :   O(N)
               Memory      :   412KB
               Difficulty  :   Very-Easy

             ...........................................................
*/
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t,n,m,mn = INT_MAX,k;
        cin >> t;
        while(t--){
            mn = INT_MAX;
            cin >> n >> m;
            while(n--){
                cin >> k;
                mn = min(mn,k);
            }
            if(m <= mn)
               cout << 0 << endl;
            else
               cout << m - mn << endl;
        }
        return 0;
    }
