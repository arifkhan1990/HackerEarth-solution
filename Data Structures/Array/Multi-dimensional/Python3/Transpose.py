n, m = map(int, input().split())
mat = [
    [int(x) for x in input().split()]
    for i in range(n)
]
ans = [[0 for _ in range(n)] for _ in range(m)]

# print(ans)
for i in range(n):
    for j in range(m):
        ans[j][i] = mat[i][j]


for i in ans:
    print(*i)