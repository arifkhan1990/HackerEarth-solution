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
from collections import Counter

n = int(input())
arr = list(map(int, input().split()))

freq = Counter(arr)
mx = max(freq.values())

ans = sum(1 for count in freq.values() if count == mx)

print(ans)
