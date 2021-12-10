#include <iostream>
#include <set>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t balls_count, ball;
	cin >> balls_count;

	set<uint16_t> sorted_balls;
	while (balls_count--)
	{
		cin >> ball;
		sorted_balls.insert(ball);
	}

	vector<uint16_t> balls;
	for (auto ball : sorted_balls)
		balls.push_back(ball);

	bool giftable = false;
	for (auto _ = 1; _ < balls.size() - 1; _++)
		if (balls[_] - balls[_ - 1] == 1 && balls[_ + 1] - balls[_] == 1)
		{
			giftable = true;
			break;
		}

	cout << (giftable ? "YES" : "NO");
}