#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int power_modulo(int a, int b) {
    return static_cast<int>(pow(a, b)) % MOD;
}

int main() {
    // Input
    int A, B;
    cin >> A >> B;

    // Calculate A^B modulo 10^9+7
    int result = power_modulo(A, B);

    // Output
    cout << result << endl;

    return 0;
}
