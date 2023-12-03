"""
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Count Divisors
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   2/12/2023
               Time         :   0.06932 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
"""

l,r,k = map(int, input().split())
ans = 0
for i in range(l,r+1):
    if i%k == 0:
        ans += 1
print(ans)