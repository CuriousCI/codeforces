#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t points_number;
	uint64_t max_distance;

	cin >> points_number >> max_distance;

	vector<int64_t> points(points_number);
	for (auto &point : points)
		cin >> point;

	uint32_t right = points_number - 1;
	while (points[right] - points.front() > max_distance)
		right--;

	uint64_t total = 0;
	for (auto number = 2; number <= right; number++)
		total += ((right - 1) * right) / 2;
	cout << total;
}