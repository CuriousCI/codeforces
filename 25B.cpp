#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length;
	string phone_number;
	cin >> length >> phone_number;

	if (length & 1)
	{
		for (auto digit = 0; digit < length - 3; digit += 2)
			cout << phone_number[digit] << phone_number[digit + 1] << '-';

		cout << phone_number[length - 3] << phone_number[length - 2] << phone_number[length - 1];
	}
	else
		for (auto digit = 0; digit < length; digit += 2)
		{
			cout << phone_number[digit] << phone_number[digit + 1];
			if (digit != length - 2)
				cout << '-';
		}
}