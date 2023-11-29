
/*
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
*/

#include <bits/stdc++.h>
using namespace std;

double squared_distance(pair<int, int> point1, pair<int, int> point2) {
    return pow(point1.first - point2.first, 2) + pow(point1.second - point2.second, 2);
}

pair<int, int> find_bottom_left_point(const vector<pair<int, int>>& square_points) {
    return *min_element(square_points.begin(), square_points.end(), [](const auto& p1, const auto& p2) {
        return (p1.second == p2.second) ? (p1.first < p2.first) : (p1.second < p2.second);
    });
}

vector<pair<int, int>> find_largest_square(const vector<pair<int, int>>& points) {
    int n = points.size();
    set<pair<int, int>> point_set(points.begin(), points.end());

    double max_side_length = 0;
    vector<pair<int, int>> result_points;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (points[i].first != points[j].first && points[i].second != points[j].second) {
                pair<int, int> diagonal1 = {points[j].first, points[i].second};
                pair<int, int> diagonal2 = {points[i].first, points[j].second};

                if (point_set.count(diagonal1) && point_set.count(diagonal2)) {
                    double side_length = squared_distance(points[i], points[j]);
                    if (side_length > max_side_length) {
                        max_side_length = side_length;
                        result_points = {points[i], points[j], diagonal1, diagonal2};
                    }
                }
            }
        }
    }

    return result_points;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> points;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        points.emplace_back(x, y);
    }

    vector<pair<int, int>> result = find_largest_square(points);

    if (!result.empty()) {
        pair<int, int> bottom_left_point = find_bottom_left_point(result);
        cout << bottom_left_point.first << " " << bottom_left_point.second << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
