#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;

	while (cases--)
	{
		uint64_t number, operations;
		cin >> number >> operations;

		while (--operations)
		{
			auto stringified = to_string(number);
			uint64_t
				biggest = *max_element(stringified.begin(), stringified.end()) - '0',
				smallest = *min_element(stringified.begin(), stringified.end()) - '0';

			number += smallest * biggest;

			if (!smallest)
				break;
		}

		cout << number << endl;
	}
}