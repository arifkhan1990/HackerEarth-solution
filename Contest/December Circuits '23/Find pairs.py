def count_ordered_pairs_with_indices(n, arr):
    count = 0
    diff_count = {}
 
    for i in range(n):
        diff = arr[i] - i
        count += diff_count.get(diff, 0)
        diff_count[diff] = diff_count.get(diff, 0) + 1
 
    return count + count
 
# Input reading
n = int(input())
arr = list(map(int, input().split()))
 
# Output
result = count_ordered_pairs_with_indices(n, arr)
print(result)