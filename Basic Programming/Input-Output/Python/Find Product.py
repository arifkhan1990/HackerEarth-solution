"""
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Find Product
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   2/12/2023
               Time         :   0.12151 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
"""

n = int(input())
ar = list(map(int, input().split()))
mod = 1000000007

result = 1
for i in ar:
    result = (result * i) % mod

print(result)