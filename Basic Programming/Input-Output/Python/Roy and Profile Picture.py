"""
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Roy and Profile Picture
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   2/12/2023
               Time         :   0.12151 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
"""

l = int(input())
n = int(input())

for _ in range(n):
    w,h = map(int, input().split())

    if w < l or h < l:
        print("UPLOAD ANOTHER")
    elif w >= l and h >= l:
        if w == h:
            print("ACCEPTED")
        else:
            print("CROP IT")