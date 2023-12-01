"""
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Maximum borders
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   01/12/2023
               Time         :   1.27406 sec
               Memory       :   5448 KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/maximum-border-9767e14c/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
"""

for _ in range(int(input())):
    n, m = map(int, input().split())
    mat = [input().split() for _ in range(n)]

    ans = 0
    for line in mat + [''.join(k) for k in zip(*mat)]:
        cur = 0
        for x in line:
            cur = cur + 1 if x == '#' else 0
            ans = max(ans, cur)
    print(ans)
