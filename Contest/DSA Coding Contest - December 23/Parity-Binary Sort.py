def count_set_bits(num):
    count = 0
    while num:
        count += num & 1
        num >>= 1
    return count

def custom_sort(arr):
    return sorted(arr, key=lambda x: (count_set_bits(x) % 2, x))

for _ in range(int(input())):
    n = int(input())
    ar = list(map(int, input().split()))
    output = custom_sort(ar)
    print(*output)