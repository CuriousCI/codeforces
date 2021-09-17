#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cases, number;

	cin >> cases;
	while (cases--)
	{
		cin >> number;
		uint64_t result = 1, mask = 1;

		while ((1 << mask) <= number)
		{
			result |= (1 << (mask - 1));
			mask++;
		}

		cout << (number == 1 ? 0 : result) << endl;
	}
}