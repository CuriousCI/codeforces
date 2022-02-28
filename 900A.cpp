#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t points_count, left = 0, right = 0;
	cin >> points_count;

	int64_t x, y;
	while (points_count--)
	{
		cin >> x >> y;
		if (x < 0)
			left++;
		else if (x > 0)
			right++;
	}

	cout << (left <= 1 || right <= 1 ? "Yes" : "No");
}