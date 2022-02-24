#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint16_t size;
		cin >> size;

		vector<uint64_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		bool has_squares = true;
		for (auto number : numbers)
		{
			if (!has_squares)
				break;

			has_squares = pow(floor(sqrt((double)number)), 2.0) == (double)number;
		}

		cout << (has_squares ? "NO" : "YES") << endl;
	}
}