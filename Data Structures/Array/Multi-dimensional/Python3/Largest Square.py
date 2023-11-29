"""
             ...........................................................
               Solver       :   Arif Khan
               Problem      :   Largest Square
               Level        :   Medium
               Judge        :   HackerEarth
               Date         :   29/11/2023
               Time         :   O(N)
               Memory       :   3.5KB
               Difficulty   :   Easy
               problem_link :   https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/largest-square-3d7a938a/
               github       :   https://github.com/arifkhan1990
               portfolio    :   https://arif-portfolio-orcin.vercel.app/
               gamil        :   arifkhanshubro@gmail.com
               phone        :   01960518551
             ...........................................................
"""
def squared_distance(point1, point2):
    return (point1[0] - point2[0])**2 + (point1[1] - point2[1])**2

def find_largest_square(points, n):
    point_set = set(points)

    max_side_length = 0
    result_points = None

    for i in range(n - 1):
        for j in range(i + 1, n):
            if points[i][0] != points[j][0] and points[i][1] != points[j][1]:
                diagonal1 = (points[j][0], points[i][1])
                diagonal2 = (points[i][0], points[j][1])

                if diagonal1 in point_set and diagonal2 in point_set:
                    side_length = squared_distance(points[i], points[j])
                    if side_length > max_side_length:
                        max_side_length = side_length
                        result_points = (points[i], points[j], diagonal1, diagonal2)

    return result_points

# Take user input for points
n = int(input())
points = []

for _ in range(n):
    x, y = map(int, input().split())
    points.append((x, y))

result = find_largest_square(points, n)

if result:
    bottom_left_point = min(result, key=lambda x: (x[1], x[0]))
    print(bottom_left_point[0], bottom_left_point[1])
else:
    print("-1")