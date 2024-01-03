def count_good_pairs(A, B, C):
    # Create a dictionary to store occurrences of B[C[j]]
    b_c_occurrences = {}
 
    # Count the occurrences of B[C[j]]
    for j in C:
        if 0 <= j < len(B):
            b_c_occurrences[B[j]] = b_c_occurrences.get(B[j], 0) + 1
 
    # Count the good pairs during a single pass through A
    good_pairs_count = 0
 
    for a in A:
        if a in b_c_occurrences:
            good_pairs_count += b_c_occurrences[a]
 
    return good_pairs_count
 
# Take the number of test cases as input
t = int(input())
 
# Process each test case
for _ in range(t):
    # Take user input for arrays A, B, and C
    n=int(input())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    C = list(map(int, input().split()))
 
    # Calculate and print the result for each test case
    result = count_good_pairs(A, B, C)
    print(result)