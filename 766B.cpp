#include <iostream>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t segments_number;
	cin >> segments_number;

	vector<uint64_t> segments(segments_number);
	for (auto &segment : segments)
		cin >> segment;

	ranges::sort(segments);

	bool triangel_found = false;
	for (auto segment = 0; segment < segments_number - 2 && !triangel_found; segment++)
	{
		triangel_found =
			(segments[segment] + segments[segment + 1] > segments[segment + 2]) &&
			(segments[segment + 1] + segments[segment + 2] > segments[segment]) &&
			(segments[segment] + segments[segment + 2] > segments[segment + 1]);
	}

	cout << (triangel_found ? "YES" : "NO");
}