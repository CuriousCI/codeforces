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

	uint16_t side;
	uint32_t pairs = 0;
	cin >> side;

	vector<string> cake(side);
	for (auto &row : cake)
	{
		cin >> row;
		auto elements = ranges::count(row, 'C');
		pairs += (elements * (elements - 1)) / 2;
	}

	for (auto column = 0; column < side; column++)
	{
		auto elements = 0;
		for (auto row : cake)
			elements += row[column] == 'C';
		pairs += (elements * (elements - 1)) / 2;
	}

	cout << pairs;
}