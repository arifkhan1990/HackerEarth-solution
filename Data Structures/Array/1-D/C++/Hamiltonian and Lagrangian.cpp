/*
             ...........................................................

               Solver      :   Arif Khan
               Problem     :   Hamiltonian and Lagrangian
               Judge       :   HackerEarth
               Date        :   3/9/19
               Time        :   O(N*N)
               Memory      :   64KB
               Difficulty  :   Easy

             ...........................................................
*/

    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        int ar[n+1];
        for(int i = 0; i < n; i++) cin >> ar[i];
        for(int i = 0; i < n; i++) {
            bool b = true;
            for(int j = i+1; j < n; j++){
               if(ar[i] < ar[j]) {
                   b = false;
                   break;
               }
            }
            if(b) cout << ar[i] << " ";
        }
        cout << endl;
        return 0;
    }
