"""
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Maximum borders
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   01/12/2023
               Time         :   1.35144 sec
               Memory       :   6888 KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/maximum-border-9767e14c/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
"""

t = int(input())

for _ in range(t):
    # Number of rows and columns
    n, m = map(int, input().split())

    matrix = []
    # Input matrix
    for _ in range(n):
        row = list(input().strip())
        matrix.append(row)
    
    ans = 0
    for i in range(n):
        curr_mx = 0
        for j in range(m):
            if matrix[i][j] == "#":
                curr_mx += 1
            else:
                ans = max(ans, curr_mx)
                curr_mx = 0

    for i in range(m):
        curr_mx = 0
        for j in range(n):
            if matrix[j][i] == "#":
                curr_mx += 1
            else:
                ans = max(ans, curr_mx)
                curr_mx = 0
    print(ans)