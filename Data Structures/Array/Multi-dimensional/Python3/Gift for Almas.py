
def rotate_right(mat,n):
    tmp = [[0]*n for _ in range(n)]

    for i in range(n):
        for j in range(n):
            tmp[j][n-1-i] = mat[i][j]
    
    return tmp


def rotate_left(mat, n):
    tmp = [[0]*n for _ in range(n)]

    for i in range(n):
        for j in range(n):
            tmp[n-1-j][i] = mat[i][j]
    
    return tmp



n = int(input())
mat = [list(map(int, input().split())) for _ in range(n)]

rotationQuery = input()

for i in rotationQuery:
    if i == 'R':
        mat = rotate_right(mat,n)
    else:
        mat = rotate_left(mat, n)

for row in mat:
    print(*row)