"""
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Find Mex
               Level        :   Medium
               Judge        :   HackerEarth
               Date         :   30/11/2023
               Time         :   1.30031 sec
               Memory       :   25.98MB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/find-mex-62916c25/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
"""

def find_mex(arr):
    mex_values = []
    seen_set = set()
    max_seen = -1

    for num in arr:
        seen_set.add(num)

        while max_seen + 1 in seen_set:
            max_seen += 1

        mex_values.append(max_seen + 1)

    return mex_values

# Take user input for the array size
n = int(input())

# Take user input for the array elements
arr_str = input()
arr = list(map(int, arr_str.split()))

# Call the function with user input and print the result
print(*find_mex(arr))
