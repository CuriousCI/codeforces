#include <iostream>
#include <set>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Point
{
	int16_t y, x;
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
		for (int16_t y = 0; y < side; y++)
			for (int16_t x = 0; x < side; x++)
				if (matrix[y][x] == '*')
					points.push_back({y, x});

		if (points.front().x != points.back().x && points.front().y != points.back().y)
		{
			matrix[points.front().y][points.back().x] = '*';
			matrix[points.back().y][points.front().x] = '*';
		}
		else if (points.front().x == points.back().x)
		{
			auto distance = max(points.front().y, points.back().y) - min(points.front().y, points.back().y);
			if (points.front().x + distance < side && points.back().x + distance < side)
			{
				matrix[points.front().y][points.front().x + distance] = '*';
				matrix[points.back().y][points.back().x + distance] = '*';
			}
			else
			{
				matrix[points.front().y][points.front().x - distance] = '*';
				matrix[points.back().y][points.back().x - distance] = '*';
			}
		}
		else
		{
			auto distance = max(points.front().x, points.back().x) - min(points.front().x, points.back().x);
			if (points.front().y + distance < side && points.back().y + distance < side)
			{
				matrix[points.front().y + distance][points.front().x] = '*';
				matrix[points.back().y + distance][points.back().x] = '*';
			}
			else
			{
				matrix[points.front().y - distance][points.front().x] = '*';
				matrix[points.back().y - distance][points.back().x] = '*';
			}
		}

		for (auto y = 0; y < side; y++)
		{
			for (auto x = 0; x < side; x++)
				cout << matrix[y][x];
			cout << endl;
		}
	}
}