def find_substring(mat, searching_word, r, c):
    sub_len = len(searching_word)
    ans = 0

    for i in range(r):
        for j in range(c - sub_len + 1):
            if mat[i][j: j + sub_len] == list(searching_word):
                ans += 1

    for j in range(c):
        for i in range(r - sub_len + 1):
            if all(mat[i + k][j] == searching_word[k] for k in range(sub_len)):
                ans += 1

    for i in range(r - sub_len + 1):
        for j in range(c - sub_len + 1):
            if all(mat[i + k][j + k] == searching_word[k] for k in range(sub_len)):
                ans += 1

    for i in range(sub_len - 1, r):
        for j in range(c - sub_len + 1):
            if all(mat[i - k][j + k] == searching_word[k] for k in range(sub_len)):
                ans += 1

    return ans

# Example usage:
n, m = map(int, input().split())
mat = [list(input()) for _ in range(n)]

searching_word = "saba"

print(find_substring(mat, searching_word, n, m))
