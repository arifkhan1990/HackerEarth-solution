def find_max_length(n, m, A, B):
    sum_A = sum(A)
    sum_B = sum(B)
 
    if sum_A != sum_B:
        return -1
 
    common_length = 0
    i, j = 0, 0
 
    while i < n and j < m:
        if A[i] == B[j]:
            common_length += 1
            i += 1
            j += 1
        elif A[i] < B[j]:
            A[i] += A[i + 1]
            A.pop(i + 1)  # Remove the next element
            n -= 1  # Adjust the length of A
        else:
            B[j] += B[j + 1]
            B.pop(j + 1)  # Remove the next element
            m -= 1  # Adjust the length of B
 
    return common_length
 
 
 
# Example
for _ in range(int(input())):
	n, m = map(int, input().split())
	A = list(map(int, input().split()))
	B = list(map(int, input().split()))
	result = find_max_length(n,m,A, B)
	print(result)