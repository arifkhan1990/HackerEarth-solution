def minimize_cost(N, K, arr):
    res = 0
    i = 0

    while i < N:
        j = 1
        res += abs(arr[i])

        if arr[i] > 0:
            while j <= K and i + j < N:
                if arr[i + j] < 0:
                    res += arr[i + j]
                    j += 1
                else:
                    break

        i += j

    return abs(res)

# Example usage
N, K = map(int, input().split())
arr = list(map(int, input().split()))

result = minimize_cost(N, K, arr)
print(result)
