#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, sum;
	cin >> cases;

	while (cases--)
	{
		cin >> sum;
		vector<uint16_t> digits;
		uint16_t digit = 9;

		while (sum > 0 && digit >= 1)
		{
			if (sum - digit >= 0)
			{
				sum -= digit;
				digits.push_back(digit);
			}
			digit--;
		}

		if (sum == 0)
		{
			sort(digits.begin(), digits.end());
			for (auto digit : digits)
				cout << digit;
			cout << endl;
		}
		else
			cout << -1 << endl;
	}
}