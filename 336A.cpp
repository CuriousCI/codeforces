#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Point
{
	int64_t x, y;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	Point origin, alpha, beta;
	cin >> origin.x >> origin.y;

	int64_t distance = abs(origin.x) + abs(origin.y);

	alpha.x = 0;
	alpha.y = distance * (origin.y < 0 ? -1 : 1);

	beta.y = 0;
	beta.x = distance * (origin.x < 0 ? -1 : 1);

	if (alpha.x > beta.x)
	{
		auto copy = alpha;
		alpha = beta;
		beta = copy;
	}

	cout << alpha.x << ' ' << alpha.y << ' ' << beta.x << ' ' << beta.y;
}