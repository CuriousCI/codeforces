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

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t elements_number;
		cin >> elements_number;

		int64_t sum = 0;
		while (elements_number--)
		{
			int64_t element;
			cin >> element;
			if (element <= 2048)
				sum += element;
		}

		cout << (sum >= 2048 ? "YES" : "NO") << endl;
	}
}