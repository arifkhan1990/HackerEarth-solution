"""
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Seven-Segment Display
               Level        :   Easy
               Judge        :   HackerEarth
               Date         :   2/12/2023
               Time         :   0.17054 sec
               Memory       :   2KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
"""

def max_number_with_matchsticks(matchsticks):
    # Define the number of matchsticks needed for each digit (0 to 9)
    matchsticks_required = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]

    largest_number = sum(matchsticks_required[int(digit)] for digit in matchsticks)
    ans = ""

    if largest_number % 2 == 1:
        ans += '7'
        largest_number -= 3

    ans += '1' * (largest_number // 2)

    return ans

# Input the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    # Input the number for the current test case
    n = input()
    
    # Calculate the result and print it
    result = max_number_with_matchsticks(n)
    print(result)
