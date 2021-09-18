#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	string binary;

	cin >> cases;
	while (cases--)
	{
		cin >> binary;

		map<char, uint16_t> digits;
		for (auto digit : binary)
			digits[digit]++;

		uint16_t ones = 0, deletions = 0;
		for (auto digit : binary)
			switch (digit)
			{
			case '1':
				ones++;
				break;

			default:
				if (ones == digits['1'])
					break;
				if (ones)
					deletions++;
				break;
			}

		cout << deletions << endl;
	}
}