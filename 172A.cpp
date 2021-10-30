#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t phones, length;
	string phone, prefix;

	cin >> phones >> prefix;
	length = prefix.length();
	while (--phones)
	{
		cin >> phone;
		for (uint16_t digit = 0; digit < length; digit++)
			if (phone[digit] != prefix[digit])
			{
				length = min(digit, length);
				break;
			}
	}

	cout << length;
}