#include <iostream>
#include <set>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Point
{
	uint16_t y, x;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint16_t side;
		cin >> side;

		vector<string> matrix(side);
		for (auto &row : matrix)
			cin >> row;

		vector<Point> points;
		for (uint16_t y = 0; y < side; y++)
			for (uint16_t x = 0; x < side; x++)
				if (matrix[y][x] == '*')
					points.insert({y, x});
		}
}