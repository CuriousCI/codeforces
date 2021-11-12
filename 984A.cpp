#include <iostream>
#include <vector>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	cin >> size;

	vector<uint64_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;
	ranges::sort(numbers.begin(), numbers.end());
	cout << numbers[(size & 1 ? size / 2 : size / 2 - 1)];
}