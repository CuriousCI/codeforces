#include <iostream>
#include <cmath>
#include <vector>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size;
	cin >> size;

	vector<int32_t> permutation(size);
	for (auto &number : permutation)
		cin >> number;

	ranges::sort(permutation);

	uint64_t operations = 0;
	for (int32_t target = 1; target <= size; target++)
		operations += abs(target - permutation[target - 1]);

	cout << operations;
}