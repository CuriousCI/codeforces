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

		bool digits[2] = {false};

		uint32_t total = 0;
		for (auto digit = 0; digit < binary.length() - 1; digit++)
		{
			total += binary[digit] == '0' && binary[digit + 1] != '0';
			digits[binary[digit] - '0'] = true;
		}

		digits[binary.back() - '0'] = true;

		cout << min(uint32_t(!digits[0] ? 0 : !digits[1] ? 1
														 : 2),
					total + (binary.back() == '0'))
			 << endl;
	}
}