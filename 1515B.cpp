#include <iostream>
#include <cmath>
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
		uint64_t pieces;
		cin >> pieces;

		bool is_valid = false;

		if (pieces % 2 == 0)
		{
			uint64_t base = pieces / 2;
			if (pow((uint64_t)sqrt(base), 2) == base)
				is_valid = true;
		}

		if (pieces % 4 == 0)
		{
			uint64_t base = pieces / 4;
			if (pow((uint64_t)sqrt(base), 2) == base)
				is_valid = true;
		}

		cout << (is_valid ? "YES" : "NO") << endl;
	}
}