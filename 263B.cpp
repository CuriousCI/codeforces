#include <iostream>
#include <ranges>
#include <cstdint>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t squares_count, stacked;
	cin >> squares_count >> stacked;

	vector<uint64_t> squares(squares_count);
	for (auto &square : squares)
		cin >> square;

	ranges::sort(squares);

	if (squares_count < stacked)
		cout << -1;
	else
		cout << squares[squares_count - stacked] << ' ' << 0;
}