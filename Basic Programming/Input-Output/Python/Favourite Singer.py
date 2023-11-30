"""
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Favourite Singer
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   30/11/2023
               Time         :   0.92459 sec
               Memory       :   3.5MB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/favourite-singer-a18e086a/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
"""

n = int(input())
arr = list(map(int, input().split()))
 
freq = {}
ans, mx = 0, 0
for i in range(n):
    if arr[i] in freq:
        freq[arr[i]] += 1
    else:
        freq[arr[i]] = 1
    mx = max(mx, freq[arr[i]])
 
for i in freq:
    if freq[i] == mx:
        ans += 1
 
print(ans)