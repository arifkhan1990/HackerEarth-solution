t = int(input())
for _ in range(t):
    n, d, e = map(int, input().split())
    a = list(map(int, input().split()))

    l = 0
    ans , res = 0, 0
    f = {}
    b = 0
    for i in range(n):
        if a[i] == e:
            b = 1
        if a[i] not in f:
            f[a[i]] = 1
            ans += 1
        else:
            f[a[i]] += 1

        if b == 1:
            if ans > d:
                while ans > d:
                    f[a[l]] -= 1
                
                    if f[a[l]] == 0:
                        ans -= 1
                        if f[e] == 0:
                            b = 0
                        del f[a[l]]
                    l += 1
            res = max(res, i - l + 1)
        else:
            while ans >= d:
                f[a[l]] -= 1
              
                if f[a[l]] == 0:
                    ans -= 1 
                    del f[a[l]]
                l += 1
 
    print(res)
