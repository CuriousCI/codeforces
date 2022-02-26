#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Point
{
	int64_t y, x;
};

int64_t distance(Point origin, Point destination)
{
	return abs(origin.x - destination.x) + abs(origin.y - destination.y);
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		int64_t height, width;
		Point escape;
		cin >> height >> width >> escape.y >> escape.x;

		cout << max({
					distance(escape, {1, 1}),
					distance(escape, {height, 1}),
					distance(escape, {1, width}),
					distance(escape, {height, width}),
				})
			 << endl;
	}
}