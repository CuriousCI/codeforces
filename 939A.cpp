#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t planes_count;
	cin >> planes_count;
	vector<uint16_t> planes(planes_count);
	for (auto &plane : planes)
		cin >> plane;

	bool triangle = false;
	for (auto index = 0; index < planes_count && !triangle; index++)
		triangle = index == planes[planes[planes[index] - 1] - 1] - 1;

	cout << (triangle ? "YES" : "NO");
}