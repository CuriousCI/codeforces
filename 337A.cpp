#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t students, count;
	cin >> students >> count;

	vector<uint32_t> puzzles(count);
	for (auto &puzzle : puzzles)
		cin >> puzzle;

	sort(puzzles.begin(), puzzles.end());

	uint32_t distance = UINT32_MAX;
	for (size_t index = 0; index <= count - students; index++)
		distance = min(distance, puzzles[index + students - 1] - puzzles[index]);

	cout << distance;
}