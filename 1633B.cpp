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
		string binary;
		cin >> binary;

		uint64_t zeros = 0, ones = 0;
		for (auto digit : binary)
			if (digit - '0')
				ones++;
			else
				zeros++;

		if (zeros < ones && zeros)
			cout << zeros;
		else if (ones < zeros && ones)
			cout << ones;
		else if (ones == zeros && ones && zeros)
			cout << ones - 1;
		else
			cout << 0;

		cout << endl;
	}
}