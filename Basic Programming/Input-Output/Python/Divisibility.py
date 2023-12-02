"""
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Divisibility
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   2/12/2023
               Time         :   0.10119 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
"""

n = int(input())
arr = list(map(int, input().split()))

if arr[-1]%10 == 0:
    print("Yes")
else:
    print("No")