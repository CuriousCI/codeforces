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

	int64_t slimes;
	cin >> slimes;

	vector<int64_t> result;

	for (auto digit = 0; (1 << digit) <= slimes; digit++)
		if (slimes & (1 << digit))
			result.push_back(1 << digit);

	ranges::reverse(result);
	for (uint64_t value : result)
		cout << value << ' ';
}