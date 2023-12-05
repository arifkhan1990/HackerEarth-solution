for _ in range(int(input())):
    n = int(input())

    ans = 0
    while n != 0:
        ans += n//5
        n //= 5
    print(ans)