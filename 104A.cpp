#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<uint16_t> values = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	uint16_t points;
	cin >> points;

	auto result = 0;

	for (auto value : values)
		if (points == value + 10)
			if (value == 10)
				result += 15;
			else
				result += 4;

	cout << result;
}