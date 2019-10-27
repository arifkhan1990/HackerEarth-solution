def SimilarElementsPairs (arr,n):
    arr=sorted(arr)
    tot , count, start = 0, 0, arr[0]

    for i in range(1,n):
        if arr[i]-arr[i-1]>1:
            if arr[i-1]!=start:
                tot=tot+count*(count+1)//2
            count=0
            start=arr[i]
        else:
            count=count+1
    if arr[-1]!=start:
        tot=tot+count*(count+1)//2
    return tot
            
 
N = int(input())
A = list(map(int,input().split()))
out_ = SimilarElementsPairs(A,N)
print (out_)