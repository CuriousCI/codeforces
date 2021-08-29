#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size;
	cin >> cases;

	while (cases--)
	{
		cin >> size;
		vector<uint16_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		uint32_t odd = 0, even = 0, position = 0;
		for (auto &number : numbers)
		{
			if ((number & 1) != (position & 1))
				if ((number & 1))
					odd++;
				else
					even++;

			position++;
		}

		cout << (odd == even ? (int32_t)odd : -1) << endl;
	}
}