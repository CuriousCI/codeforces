#include <iostream>
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
		uint64_t result;
		cin >> size >> result;

		while (--size)
		{
			uint64_t number;
			cin >> number;
			result |= number;
		}

		cout << result << endl;
	}
}