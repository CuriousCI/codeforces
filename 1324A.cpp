#include <iostream>
#include <vector>
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
		uint32_t columns_number, column;
		cin >> columns_number;

		bool odd = false, even = false;
		while (columns_number--)
		{
			cin >> column;
			if (column & 1)
				odd = true;
			else
				even = true;
		}

		cout << (odd && even ? "NO" : "YES") << endl;
	}
}