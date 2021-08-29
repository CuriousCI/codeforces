#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size, number;
	cin >> size;

	uint32_t longest = 0, current, last = UINT32_MAX;
	while (size--)
	{
		cin >> number;
		if (number < last || last == UINT32_MAX)
		{
			last = number;
			current = 1;
		}
		else
		{
			current++;
			last = number;
		}
		longest = max(longest, current);
	}

	cout << longest;
}