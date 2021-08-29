#include <iostream>
#include <cstdint>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size;
	int16_t multiplier, adder;
	string bits;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> multiplier >> adder >> bits;

		int32_t result = size * multiplier;
		if (adder >= 0)
			result += size * adder;
		else
		{
			vector<pair<char, int16_t>> ranges{{bits.front(), 0}};
			auto range = &ranges.back();

			for (auto bit : bits)
				if (bit == range->first)
					range->second++;
				else
				{
					ranges.push_back({bit, 1});
					range = &ranges.back();
				}

			int16_t zero = 0;
			for (auto range : ranges)
				zero += range.first == '0' ? 1 : -1;

			result += adder;
			for (auto range : ranges)
				if ((zero >= 0 && range.first == '1') || (zero < 0 && range.first == '0'))
					result += adder;
		}

		cout << result << endl;
	}
}