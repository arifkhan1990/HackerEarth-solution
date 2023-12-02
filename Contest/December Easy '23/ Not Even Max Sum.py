for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    od = []
    sm = sum(arr)
    if sm&1:
        print(sm)
    else:
        for i in arr:
            if i&1:
                od.append(i)
        od.sort()
        
        if len(od) == 0:
            print(0)
        else:
            sm -= od[0]
            print(sm)