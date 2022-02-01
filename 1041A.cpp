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

	uint16_t remaining_keyboards;
	cin >> remaining_keyboards;

	vector<uint64_t> keyboards(remaining_keyboards);
	for (auto &keyboard : keyboards)
		cin >> keyboard;

	cout << *ranges::max_element(keyboards) - *ranges::min_element(keyboards) - remaining_keyboards + 1;
}