
def construct_tree(N, A):
 
    tree = [[] for _ in range(N)]
    for i in range(N - 1):
        tree[i].append(i + 1)
 
    return tree

N = int(input())
A = input()
tree = construct_tree(N, A)
 
for i in range(N):
    for j in tree[i]:
        print(i + 1, j + 1)