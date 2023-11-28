def rotate_right(mat):
    return [list(row) for row in zip(*mat[::-1])]

def rotate_left(mat):
    return [list(row) for row in zip(*mat)][::-1]

n = int(input())
mat = [list(map(int, input().split())) for _ in range(n)]

rotation_query = input()

for rotation in rotation_query:
    if rotation == 'R':
        mat = rotate_right(mat)
    else:
        mat = rotate_left(mat)

for row in mat:
    print(*row)