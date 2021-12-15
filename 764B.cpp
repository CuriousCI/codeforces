#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cubes_count;
	cin >> cubes_count;

	vector<uint64_t> cubes(cubes_count);
	for (auto &cube : cubes)
		cin >> cube;
}