for _ in range(int(input())):
    n = int(input())
    coin = list(map(int, input().split()))
    back = list(map(int, input().split()))

    ans = 0
    for i in range(n):
        if coin[i] >= back[i]:
            d = coin[i]//back[i]
            if coin[i] % back[i]:
                d += 1
            ans = max(ans, d)
    print(ans)
