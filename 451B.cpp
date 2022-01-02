#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t size, start = 0;
	cin >> size;
	vector<uint64_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	vector<pair<uint64_t, uint64_t>> rngs;

	bool doable = true;

	for (auto index = 0; index < size - 1 && doable; index++)
	{
		if (numbers[index] < numbers[index + 1])
		{
			if (start == index)
				start++;
			else
			{
				rngs.push_back({start, index});
				start = index + 1;
			}
		}
		else if (max(numbers[index], numbers[index + 1]) - min(numbers[index], numbers[index + 1]) != 1)
			doable = false;
	}

	if (start != size - 1)
		rngs.push_back({start, size - 1});

	if (!doable)
		cout << "no";
	else if (!rngs.size())
		cout << "yes\n1 1";
	else if (rngs.size() > 1)
		cout << "no";
	else
		cout << "yes\n"
			 << rngs.front().first + 1 << ' ' << rngs.front().second + 1;
}