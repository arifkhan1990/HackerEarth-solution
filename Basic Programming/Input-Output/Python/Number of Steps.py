n = int(input())
first_array = list(map(int, input().split()))
second_array = list(map(int, input().split()))

steps = 0

for i in range(n):
    if second_array[i] != 0:
        steps += (first_array[i] - min(first_array)) // second_array[i]

# Check if it's possible to make all elements equal
if steps == float('inf'):
    print(-1)
else:
    print(steps)