#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t min_excluded, array_xor;
		cin >> min_excluded >> array_xor;

		uint64_t
			xor_type = min_excluded % 4,
			min_xor;

		if (xor_type == 1)
			min_xor = min_excluded - 1;
		else if (xor_type == 2)
			min_xor = 1;
		else if (xor_type == 3)
			min_xor = min_excluded;
		else
			min_xor = 0;

		if (min_xor == array_xor)
			cout << min_excluded;
		else if ((min_xor ^ min_excluded) != array_xor)
			cout << min_excluded + 1;
		else
			cout << min_excluded + 2;

		cout << endl;
	}
}