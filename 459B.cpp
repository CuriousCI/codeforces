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

	uint64_t flowers_count;
	cin >> flowers_count;

	vector<uint64_t> flowers(flowers_count);
	for (auto &flower : flowers)
		cin >> flower;

	ranges::sort(flowers);

	int64_t max_beauty = flowers.back() - flowers.front(), left = 0, right = 0;

	for (auto _ = 0; _ < flowers_count && flowers[_] == flowers.front(); _++)
		left++;

	for (auto _ = flowers_count - 1; _ >= 0 && flowers[_] == flowers.back(); _--)
		right++;

	cout << max_beauty << ' ' << (flowers.front() == flowers.back() ? (flowers_count * (flowers_count - 1)) / 2 : left * right);
}