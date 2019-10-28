            #  ...........................................................
            #    Solver      :   Arif Khan
            #    Problem     :   Charged Up Array
            #    Judge       :   HackerEarth
            #    Date        :   28/10/19
            #    Time        :   3.21291 Sec
            #    Memory      :   1308KB
            #    Difficulty  :   Easy
            #  ...........................................................
def solve (A,N):
    subset = 2**(N-1)
    return sum([i for i in A if i >= subset]) % 1000000007

T = int(input())
for _ in range(T):
    N = int(input())
    A = map(int, input().split())

    out_ = solve(A,N)
    print (out_)