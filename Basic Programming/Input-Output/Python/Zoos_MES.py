"""
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Zoos
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   2/12/2023
               Time         :   0.10119 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
"""

s = input()
z, o = 0, 0
for i in s:
    if i == 'z':
        z += 1
    else:
        o += 1
if z*2 == o:
    print("Yes")
else:
    print("No")