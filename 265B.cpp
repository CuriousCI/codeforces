#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t trees_count;
	cin >> trees_count;

	vector<uint64_t> trees_heights(trees_count);
	for (auto &height : trees_heights)
		cin >> height;

	uint64_t time = trees_heights.front();
	for (auto tree = 1; tree < trees_count; tree++)
		if (trees_heights[tree - 1] <= trees_heights[tree])
			time += trees_heights[tree] - trees_heights[tree - 1] + 1;
		else
			time += trees_heights[tree - 1] - trees_heights[tree] + 1;

	cout << time + trees_count;
}