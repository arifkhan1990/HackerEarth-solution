def solve(n, a, b):
    l,r = 0, float('inf')
    for i in range(n):
        if a[i] != b[i]:
            l = max(l, i)
            break
    for i in range(n-1, -1, -1):
        if a[i] != b[i]:
            r = min(r, i)
            break
    return r - l + 1




# Number of test cases
T = int(input())

# Process each test case
for _ in range(T):
    # Input for each test case
    N = int(input())
    array_A = list(map(int, input().split()))
    array_B = list(map(int, input().split()))

    # Process the test case
    print(solve(N, array_A, array_B))