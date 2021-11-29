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

	vector<int16_t> sides(3);
	for (auto &side : sides)
		cin >> side;

	ranges::sort(sides);
	cout << max(-1, sides.back() - (sides[0] + sides[1])) + 1;
}
