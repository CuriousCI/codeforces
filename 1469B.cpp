#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

vector<int16_t> load(uint16_t size)
{
	vector<int16_t> list(size);
	for (auto &item : list)
		cin >> item;
	return list;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, reds_size, blues_size;

	cin >> cases;
	while (cases--)
	{
		cin >> reds_size;
		auto reds = load(reds_size);

		cin >> blues_size;
		auto blues = load(blues_size);

		int64_t result = 0, temp = 0;
		for (uint16_t r = 0, b = 0; r < reds || b < blues;)
		{
			int64_t red_max = INT64_MIN,
					red_temp = 0,
					blue_max = INT64_MIN,
					blue_temp = 0;
			for (uint16_t idx = r; idx < reds; idx++)
			{
				red_temp += red[idx];
				red_max = max(red_temp, red_max);
			}
			for (uint16_t idx = b; idx < blues; idx++)
			{
				blue_temp += blue[idx];
				blue_max = max(blue_temp, blue_max);
			}

			if (b == blues || (red_max >= blue_max && r < reds))
			{
				temp += red[r];
				r++;
			}
			else if (r == reds || (blue_max > red_max && b < blues))
			{
				temp += blue[b];
				b++;
			}

			result = max(temp, result);
		}

		cout << result << endl;
	}
}