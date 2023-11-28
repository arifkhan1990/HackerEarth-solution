def find_substring(mat, searching_word, r, c):
    sub_len = len(searching_word)
    ans = 0

    for i in range(r):
        for j in range(c):
            # Check right
            if j + sub_len <= c and mat[i][j:j + sub_len] == list(searching_word):
                ans += 1

            # Check down
            if i + sub_len <= r and all(mat[i + k][j] == searching_word[k] for k in range(sub_len)):
                ans += 1

            # Check diagonal (top-left to bottom-right)
            if i + sub_len <= r and j + sub_len <= c and all(mat[i + k][j + k] == searching_word[k] for k in range(sub_len)):
                ans += 1

            # Check diagonal (top-right to bottom-left)
            if i - sub_len + 1 >= 0 and j + sub_len <= c and all(mat[i - k][j + k] == searching_word[k] for k in range(sub_len)):
                ans += 1

    return ans

# Example usage:
n, m = map(int, input().split())
mat = [list(input()) for _ in range(n)]

searching_word = "saba"

print(find_substring(mat, searching_word, n, m))
