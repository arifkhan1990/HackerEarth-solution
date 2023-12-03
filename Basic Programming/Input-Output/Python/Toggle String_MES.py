"""
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Toggle String
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   2/12/2023
               Time         :   0.12151 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
"""

s = input()
result = ''.join([char.upper() if char.islower() else char.lower() for char in s])
print(result)