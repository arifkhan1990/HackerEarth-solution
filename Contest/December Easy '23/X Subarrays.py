def count_subarrays(arr, X):
    n = len(arr)
    count = 0
    right = n - 1

    for left in range(n):
        # Move the right pointer to the left until the sum is less than or equal to X
        while right >= 0 and arr[left] + arr[right] > X:
            right -= 1

        # Count the subarrays between left and right (including the single element case)
        count += max(0, right - left + 1)

    return count

# Take user input for Test Case 1
for _ in range(int(input())):
    N1, X1 = map(int, input().split())
    A1 = list(map(int, input().split()))
    result1 = count_subarrays(A1, X1)
    print(result1)
