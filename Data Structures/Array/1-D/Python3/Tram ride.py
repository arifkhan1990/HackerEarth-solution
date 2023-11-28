def solve (N, start, finish, Ticket_cost):
    ls ,rs = 0, 0
    l,r = finish-1,start-1
    while r != finish-1:
        rs += Ticket_cost[r]
        r = (r+1)%N
        while l != start-1:
            ls += Ticket_cost[l]
            l = (l+1)%N
        ans = min(ls,rs)
    return ans

N = int(input())
start = int(input())
finish = int(input())
Ticket_cost = list(map(int, input().split()))

out_ = solve(N, start, finish, Ticket_cost)
print (out_)