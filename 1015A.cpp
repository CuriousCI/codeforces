#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size, bound, left, right;
	cin >> size >> bound;

	vector<bool> axis(bound + 1, false);
	while (size--)
	{
		cin >> left >> right;
		for (auto x = left; x <= right; x++)
			axis[x] = true;
	}

	vector<uint16_t> points;
	auto position = 0;
	for (auto x : axis)
	{
		if (!x && position)
			points.push_back(position);
		position++;
	}

	cout << points.size() << endl;
	for (auto point : points)
		cout << point << ' ';
}